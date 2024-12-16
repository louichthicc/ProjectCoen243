//
// Created by LouPe on 2024-12-14.
//

#include "Patients.h"

#include <iostream>
#include <ostream>
#include <utility>
// constructors
Patients::Patients() {}

Patients::Patients(std::string name,std::string lastName, long int PID, long int DID, std::string DOB, std::string BT, std::string D, std::string DOA, std::string DOD) {
    patientFirstName = std::move(name);
    patientLastName = std::move(lastName);
    patientId = PID;
    doctorId = DID;
    dateOfBirth = std::move(DOB);
    bloodType = std::move(BT);
    diagnosis = std::move(D);
    dateOfAdmission = std::move(DOA);
    dateOfDischarge = std::move(DOD);
}

//setters
void Patients::setName(std::string name) {
    patientFirstName = std::move(name);
}
void Patients::setLastName(std::string lastName) {
    patientLastName = std::move(lastName);
}
void Patients::setPID(long int PID) {
    patientId = PID;
}
void Patients::setDID(long int DID) {
    doctorId = DID;
}
void Patients::setDOB(std::string DOB) {
    dateOfBirth = std::move(DOB);
}
void Patients::setBT(std::string BT) {
    bloodType = std::move(BT);
}
void Patients::setD(std::string D) {
    diagnosis = std::move(D);
}
void Patients::setDOA(std::string DAD) {
    dateOfAdmission = std::move(DAD);
}
void Patients::setDOD(std::string DOD) {
    dateOfDischarge = std::move(DOD);
}

//getters
std::string Patients::getName() {
    return patientFirstName;
}
std::string Patients::getLastName() {
    return patientLastName;
}
long int Patients::getPID() {
    return patientId;
}
long int Patients::getDID() {
    return doctorId;
}
std::string Patients::getDOB() {
    return dateOfBirth;
}
std::string Patients::getBT() {
    return bloodType;
}
std::string Patients::getD() {
    return diagnosis;
}
std::string Patients::getDOA() {
    return dateOfAdmission;
}
std::string Patients::getDOD() {
    return dateOfDischarge;
}

//others
bool Patients::isDischarged() {
    if (dateOfDischarge == "-1") {
        return false;
    }
    return true;
}
std::string Patients::Patient_Status() {
    if (diagnosis.find("critical") != std::string::npos) {
        return "Critical";
    }
    if(diagnosis.find("moderate") != std::string::npos) {
        return "Moderate";
    }
    return "Stable";

}
void Patients::Print_Patient_info() {
    std::cout << "First Name: " << patientFirstName << std::endl;
    std::cout << "Last Name: " << patientLastName << std::endl;
    std::cout << "Patient ID : " << patientId << std::endl;
    std::cout << "Doctor's ID : "<< doctorId << std::endl;
    std::cout << "Date of Birth: year: ";
    for(int i=0; i<dateOfBirth.length(); i++) {
        std::cout << dateOfBirth[i];
        if (i ==3) {
            std::cout <<" month: ";
        }
        if (i == 5) {
            std::cout << " day: ";
        }
    }
    std::cout << std::endl;
    std::cout << "Blood Type: " << bloodType << std::endl;
    std::cout << "Diagnosis : " << diagnosis << std::endl;
    std::cout << "Date of Admission: year: ";
    for(int i=0; i<dateOfAdmission.length(); i++) {
        std::cout << dateOfAdmission[i];
        if (i ==3) {
            std::cout <<" month: ";
        }
        if (i == 5) {
            std::cout << " day: ";
        }
    }
    std::cout << std::endl;
    if(dateOfDischarge != "-1") {
        std::cout << "Date of Discharge: year: ";
        for(int i=0; i<dateOfDischarge.length(); i++) {
            std::cout << dateOfDischarge[i];
            if (i ==3) {
                std::cout <<" month: ";
            }
            if (i == 5) {
                std::cout << " day: ";
            }
        }
        std::cout << std::endl;
    } else {
        std::cout<<"Not discharged"<<std::endl;
    }
}