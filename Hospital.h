// Hospital.h
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#ifndef HOSPITAL_H
#define HOSPITAL_H
#include "Patients.h"
#include "Doctor.h"
#include <vector>


class Hospital {
public:
    //constructor
    Hospital();
    //help with the construction
    void createPatients();
    void createDoctors();

    //others
    void Find_Oldest_Patient();
    int Count_Critical_Patients();
    void Doctor_By_Speciality(std::string s);
    void Show_Patient_by_ID(int id);
    void Show_Doctor_by_ID(int id);
    void Show_assigned_doctor(int id);
    void Show_Assigned_Patients(int id);

private:
    std::vector<Patients> patients;
    std::vector<Doctor> doctors;
};



#endif //HOSPITAL_H
