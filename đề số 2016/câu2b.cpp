#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

class Patient {
private:
    int MSBN;
    bool isOutpatient;
    int daysInHospital;
    char roomType;
    double outpatientFee;
    double dailyHospitalFee;

public:
    Patient(int msbn, bool outpatient, int days, char room, double outpatientFee, double dailyHospitalFee)
        : MSBN(msbn), isOutpatient(outpatient), daysInHospital(days), roomType(room), outpatientFee(outpatientFee), dailyHospitalFee(dailyHospitalFee) {}

    double CalculateOutpatientFee() const {
        return outpatientFee;
    }

    double CalculateInpatientFee() const {
        return daysInHospital * (dailyHospitalFee + GetRoomPrice());
    }

    int GetMSBN() const {
        return MSBN;
    }

    char GetRoomType() const {
        return roomType;
    }

private:
    double GetRoomPrice() const {
        switch (roomType) {
            case 'A':
                return 1400000.0;
            case 'B':
                return 900000.0;
            case 'C':
                return 600000.0;
            default:
                return 0.0;
        }
    }
};

class ActivityLog {
private:
    int logDate;
    int MSBN;
    string activityType;
    double outpatientFee;
    double dailyHospitalFee;
    char roomType;

public:
    ActivityLog(int date, int msbn, const string& type, double outFee, double dailyFee, char room)
        : logDate(date), MSBN(msbn), activityType(type), outpatientFee(outFee), dailyHospitalFee(dailyFee), roomType(room) {}

    int GetMSBN() const {
        return MSBN;
    }

    string GetActivityType() const {
        return activityType;
    }

    double GetOutpatientFee() const {
        return outpatientFee;
    }

    double GetDailyHospitalFee() const {
        return dailyHospitalFee;
    }

    char GetRoomType() const {
        return roomType;
    }
};

class Hospital {
private:
    vector<Patient> patients;

public:
    void ReadActivityLogsFromFile(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Could not open file: " << filename << endl;
            return;
        }

        int MSBN, date;
        string activityType;
        double outpatientFee, dailyHospitalFee;
        char roomType;

        while (file >> date) {
            file >> MSBN >> activityType;
            if (activityType == "TKVP") {
                break; // Stop reading when encountering the total summary log
            }
            file >> outpatientFee;

            if (activityType == "NV") {
                file >> roomType;
                file >> dailyHospitalFee;
            } else {
                dailyHospitalFee = 0.0; // Set default value for outpatient
            }

            ActivityLog activity(date, MSBN, activityType, outpatientFee, dailyHospitalFee, roomType);
            ProcessActivityLog(activity);
        }

        file.close();
    }

    void PrintPatientBillingSummary() const {
        cout << "Billing Summary for Patients:" << endl;
        cout << setw(10) << "MSBN" << setw(20) << "Total Fee" << endl;

        for (const Patient& patient : patients) {
            double totalFee = (patient.GetRoomType() == 'C') ? patient.CalculateInpatientFee() : patient.CalculateOutpatientFee();
            cout << setw(10) << patient.GetMSBN() << setw(20) << fixed << setprecision(2) << totalFee << endl;
        }
    }

    void CountPatients() const {
        int inpatients = 0, outpatients = 0;

        for (const Patient& patient : patients) {
            if (patient.GetRoomType() == 'C') {
                inpatients++;
            } else {
                outpatients++;
            }
        }

        cout << "Number of Inpatients: " << inpatients << endl;
        cout << "Number of Outpatients: " << outpatients << endl;
    }

private:
    void ProcessActivityLog(const ActivityLog& log) {
        auto it = find_if(patients.begin(), patients.end(), [&log](const Patient& p) { return p.GetMSBN() == log.GetMSBN(); });

        if (it == patients.end()) {
            // New patient, add to the list
            patients.emplace_back(log.GetMSBN(), log.GetActivityType() != "NV", 0, log.GetRoomType(), log.GetOutpatientFee(), log.GetDailyHospitalFee());
            it = prev(patients.end());
        }

        if (log.GetActivityType() == "NV") {
            // Inpatient activity, update days in hospital
            it->CalculateInpatientFee(); // This updates the daysInHospital
        }
    }
};

int main() {
    Hospital hospital;
    hospital.ReadActivityLogsFromFile("activity_logs.txt");
    hospital.PrintPatientBillingSummary();
    hospital.CountPatients();

    return 0;
}
