#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class Patient {
public:
    int id;
    string type;
    int fee;

    Patient(int _id, const string& _type, int _fee) : id(_id), type(_type), fee(_fee) {}
};

class Hospital {
private:
    vector<Patient> patients;

public:
    void readData(const string& filename) {
        ifstream file(filename);
        if (!file.is_open()) {
            cerr << "Error opening file." << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            int day, id, fee;
            string type;
            iss >> day;
            if (day == -1) {
                // Handle TKVP
                cout << "Total fee: " << getTotalFee() << endl;
                continue;
            }
            iss >> id >> type;
            if (type == "KB") {
                iss >> fee;
                patients.push_back(Patient(id, type, fee));
            } else if (type == "NV") {
                char roomType;
                iss >> fee >> roomType;
                patients.push_back(Patient(id, type + roomType, fee));
            } else if (type == "XV") {
                auto it = find_if(patients.begin(), patients.end(), [id](const Patient& p) {
                    return p.id == id;
                });
                if (it != patients.end()) {
                    patients.erase(it);
                }
            }
        }

        file.close();
    }

    void printStatistics() {
        cout << "Number of inpatients: " << countPatients("NV") << endl;
        cout << "Number of outpatients: " << countPatients("KB") << endl;
    }

private:
    int getTotalFee() const {
        int totalFee = 0;
        for (const auto& patient : patients) {
            totalFee += patient.fee;
        }
        return totalFee;
    }

    int countPatients(const string& type) const {
        return count_if(patients.begin(), patients.end(), [type](const Patient& p) {
            return p.type == type;
        });
    }
};

int main() {
    Hospital hospital;
    hospital.readData("input.txt");
    hospital.printStatistics();

    return 0;
}
