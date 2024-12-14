//
// Created by LouPe on 2024-12-14.
//

#ifndef PATIENTS_H
#define PATIENTS_H
#include <string>


class Patients {
public :
    // constructors
    Patients();
    Patients(std::string name,std::string lastName, long int PID, long int DID, std::string DOB, std::string BT, std::string D, std::string DOA, std::string DOD);

    //setters
    void setName(std::string name);
    void setLastName(std::string lastName);
    void setPID(long int PID);
    void setDID(long int DID);
    void setDOB(std::string DOB);
    void setBT(std::string BT);
    void setD(std::string D);
    void setDOA(std::string DAD);
    void setDOD(std::string DOD);

    //getters
    std::string getName();
    std::string getLastName();
    long int getPID();
    long int getDID();
    std::string getDOB();
    std::string getBT();
    std::string getD();
    std::string getDOA();
    std::string getDOD();

    //others
    bool isDischarged();
    std::string Patient_Status();
    void Print_Patient_info();

private:
    std::string patientFirstName;
    std::string patientLastName;
    long int patientId;
    long int doctorId;
    std::string dateOfBirth;
    std::string bloodType;
    std::string diagnosis;
    std::string dateOfAdmission;
    std::string dateOfDischarge;

};



#endif //PATIENTS_H
