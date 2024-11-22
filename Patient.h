// Patient.h
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#ifndef PATIENT_H
#define PATIENT_H
#include <string>


class Patient {
public:
    Patient();
    Patient(std::string name,std::string LastName,int ID, std::string DOB, std::string BT, std::string D, std::string DOA, std::string DD);


    //Getters and Setters
    std::string getFirstName();
    void setFirstName(std::string Name);
    std::string getLastName();
    void setLastName(std::string Name);
    int getId();
    void setId(int Id);
    std::string getDateOfBirth();
    void setDateOfBirth(std::string Date);
    std::string getBloodType();
    void setBloodType(std::string BloodType);
    std::string getDiagnosis();
    void setDiagnosis(std::string Diagnosis);
    std::string getDateOfAdmission();
    void setDateOfAdmission(std::string DateOfAdmission);
    std::string getDischargeDate();
    void setDischargeDate(std::string DischargeDate);

    //other functions
    bool isDischarged();
    std::string Patient_status();
    void Print_Patient_Info();

private:
    std::string patientFirstName;
    std::string patientLastName;
    int patientId;
    std::string dateOfBirth;
    std:: string bloodType;
    std::string diagnosis;
    std::string dateOfAdmission;
    std::string dischargeDate;
};



#endif //PATIENT_H
