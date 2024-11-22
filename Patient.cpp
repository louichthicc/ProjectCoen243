// Patient.cpp
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#include "Patient.h"

Patient::Patient() {}
Patient::Patient(std::string name,std::string LastName,int ID, std::string DOB, std::string BT, std::string D, std::string DOA, std::string DD) {
    patientFirstName = name;
    patientLastName = LastName;
    patientId = ID;
    dateOfBirth = DOB;
    diagnosis = D;
    dateOfAdmission = DOA;
    dischargeDate = DD;

}


//Getters and Setters
std::string Patient::getFirstName() {
    return patientFirstName;
}
void Patient::setFirstName(std::string Name) {
    patientFirstName = Name;
}
std::string Patient::getLastName() {
    return patientLastName;
}
void Patient::setLastName(std::string Name) {
    patientLastName = Name;
}
int Patient::getId() {
    return patientId;
}
void Patient::setId(int Id) {
    patientId = Id;
}
std::string Patient::getDateOfBirth() {
    return dateOfBirth;
}
void Patient::setDateOfBirth(std::string Date) {
    dateOfBirth = Date;
}
std::string Patient::getBloodType() {
    return bloodType;
}
void Patient::setBloodType(std::string BloodType) {
    bloodType = BloodType;
}
std::string Patient::getDiagnosis() {
    return diagnosis;
}
void Patient::setDiagnosis(std::string Diagnosis) {
    diagnosis = Diagnosis;
}
std::string Patient::getDateOfAdmission() {
    return dateOfAdmission;
}
void Patient::setDateOfAdmission(std::string DateOfAdmission) {
    dateOfAdmission = DateOfAdmission;
}
std::string Patient::getDischargeDate() {
    return dischargeDate;
}
void Patient::setDischargeDate(std::string DischargeDate) {
    dischargeDate = DischargeDate;
}

//other functions
bool Patient::isDischarged() {
    if (dischargeDate == "-1") {
        return true;
    }
        return false;
}
std::string Patient::Patient_status() {
    if (diagnosis.find("critical")) {
        return "Critical";
    }
     if(diagnosis.find("moderate")) {
         return "Moderate";
     }
    return "Stable";
}
void Patient::Print_Patient_Info() {
}
