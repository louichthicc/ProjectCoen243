// Hospital.h
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#ifndef HOSPITAL_H
#define HOSPITAL_H
#include <string>
#include <vector>
class Hospital {
  private:
std::vector<Patient>* patients;
std::vector<Doctor>* doctors;

public:
  Hospital(std::vector<Patient>* P, std::vector<Doctor*> D); // constructor (has to read)

  //Members function
 void Find_Oldest_Patient();

 int Count_Critical_Patients();

 void Doctor_By_Speciality();

 void Show_Patients_ID();

 void Show_Doctor_by_ID();

 void Show_assigned_Doctors();

 void Show_Assigned_Patients();




#endif //HOSPITAL_H
