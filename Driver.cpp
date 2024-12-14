#include "Hospital.h"
#include <iostream>
int main() {
    Hospital hospital;
    hospital.Find_Oldest_Patient();
    hospital.Count_Critical_Patients();
    hospital.Doctor_By_Speciality("Cardiology");
    hospital.Show_Patient_by_ID(11111111);
    hospital.Show_Doctor_by_ID(11111112);
    hospital.Show_assigned_doctor(11111111);
    hospital.Show_Assigned_Patients(11111112);

    Patients patient("test","LastTest",12345678,87654321,"20200101","A+","critical everything","20241010","20241212");
    std::cout<<patient.isDischarged();
    std::cout<<patient.Patient_Status();
    patient.Print_Patient_info();

    Doctor doctor("yes","no",87654321,"general",5,100000.32,0.15);
    std::cout<<doctor.Calculate_Salary();
    doctor.Print_Doctor_Info();

    return 0;
}