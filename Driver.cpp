#include "Hospital.h"
#include <iostream>
int main() {
    Hospital hospital;
    hospital.Find_Oldest_Patient();
    std::cout<<"there are "<< hospital.Count_Critical_Patients()<<" critical patients."<<std::endl;
    hospital.Doctor_By_Speciality("Cardiology");
    hospital.Show_Patient_by_ID(11111111);
    hospital.Show_Doctor_by_ID(87654321);
    hospital.Show_assigned_doctor(11111111);
    hospital.Show_Assigned_Patients(87654321);

    Patients patient("test","LastTest",12345678,87654321,"20200101","A+","critical everything","20241010","20241212");
    if(patient.isDischarged()==true) {
        std::cout<<"Discharged"<<std::endl;
    }
    else {
        std::cout<<"Not Discharged"<<std::endl;
    }
    std::cout<<"The patient's condition is "<<patient.Patient_Status()<<std::endl;
    patient.Print_Patient_info();

    Doctor doctor("yes","no",87654321,"general",5,100000.32,0.15);
    std::cout<<doctor.Calculate_Salary()<<std::endl;
    doctor.Print_Doctor_Info();

    return 0;
}