#include <iostream>
#include <vector>
using namespace std;

class Patient {
private:
    string name;
    int age;
    // Other demographic and clinical data members

public:
    Patient(string _name, int _age) : name(_name), age(_age) {
        // Initialize other data members
    }

    // Getter and setter functions for demographic and clinical data

    void displayInfo() {
        cout << "Patient Name: " << name << endl;
        cout << "Patient Age: " << age << endl;
        // Display other data
    }
};

class LabResult {
private:
    string testName;
    string result;
    // Other lab result data members

public:
    LabResult(string _testName, string _result) : testName(_testName), result(_result) {
        // Initialize other data members
    }

    // Getter and setter functions for lab result data

    void displayResult() {
        cout << "Test Name: " << testName << endl;
        cout << "Result: " << result << endl;
        // Display other data
    }
};

class MedicalRecord {
private:
    Patient patient;
    vector<LabResult> labResults;
    // Other record data members

public:
    MedicalRecord(Patient _patient) : patient(_patient) {
        // Initialize other data members
    }

    void addLabResult(LabResult labResult) {
        labResults.push_back(labResult);
    }

    // Other functions to manage the medical record

    void displayRecord() {
        patient.displayInfo();
        cout << "\nLab Results:\n";
        for (size_t i = 0; i < labResults.size(); i++) {
            labResults[i].displayResult();
        }
        // Display other record data
    }
};

class PaymentSystem {
public:
    void processPayment(double amount) {
        // Implement payment processing logic
        cout << "Payment of $" << amount << " processed successfully." << endl;
    }
};

int main() {
    // Create patient
    Patient patient("Angelo Agyapong", 24);

    // Create lab results
    LabResult result1("Blood Test", "Normal");
    LabResult result2("Urine Test", "Abnormal");

    // Create medical record
    MedicalRecord record(patient);
    record.addLabResult(result1);
    record.addLabResult(result2);

    // Display patient information and lab results
    record.displayRecord();

    // Process payment
    PaymentSystem paymentSystem;
    paymentSystem.processPayment(10000.0);

    return 0;
}

