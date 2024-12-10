// Hospital.cpp
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#include "Hospital.h"
#include "Patient.h"
#include "Doctor.h
#include <vector>
#include <iostream>
#include <stdexcept>
#include <fstream>

Hospital::Hospital() {  //constructor that reads
patients = new std::vector<Patient>();
doctors = new std::vector<Doctor>();

std::ifstream myFile1("patients.txt");
if (!myFile1.is_open) {   //she said to use exception handling whenever we can
throw std::runtime_error("no patients.txt");

if (myFile1.is_open()) {
int numberOfPatients;
myFile1 >> numberOfPatients; //read the number of patients in the file
}

for (int i = 0; i < numberOfPatients; ++i) {  // Boucle pour lire chaque patient
std::string firstName, lastName, dob, bloodType, diagnosis, admissionDate, dischargeDate;
long int patientID, assignedDoctorID;

 // Lit les informations de chaque patient depuis le fichier
patientFile >> firstName >> lastName >> patientID >> assignedDoctorID >> dob >> bloodType >> diagnosis >> admissionDate >> dischargeDate;

// Crée un nouvel objet Patient et l'ajoute au vecteur patients
patients->emplace_back(firstName, lastName, patientID, assignedDoctorID, dob,
 bloodType, diagnosis, admissionDate, dischargeDate); // to add it in the vector
 }
 patientFile.close();

 std::ifstream myFile2("doctors.txt");
 if (!myFile2.is_open) {
  throw std::runtime_error("no doctors.txt");
 }

 int numberOfDoctors;
 myFile2 >> numberOfDoctors;

 for (int i = 0; i < numberOfDoctors; ++i) { // with the loop, each doctor will be counted and added to the vector (with emplacepushback)
  std::string firstName, lastName, specialty;
  int doctorID;
  int yearsOfExperience;
  double baseSalary, performanceBonus;
  doctorFile >> firstName >> lastName >> doctorID >> specialty >> yearsOfExperience >> baseSalary >> performanceBonus;

  doctors->emplace_back(firstName, lastName, doctorID, specialty,
                        yearsOfExperience, baseSalary, performanceBonus);
 }
 doctorFile.close();
}


// member functions

void Hospital::Find_Oldest_Patient() {
Patient oldest = (*patients)[0];
 for (int i=0; i<patients->size(); i++) {
  if ((*patients)[i].getDateOfBirth() < oldest.getDateOfBirth()) {
 oldest=(*patients)[i];
 }
 }
std::cout<< "Oldest patient informations:"
oldest.Print_Patient_Info();
}

int Hospital::Count_Critical_Patients() {
  int count=0;
  for (int i=0; i<patients->size(); i++) {
if (*patients)[i].Patient_Status()=="Critical")
count++;
  }
  return count;
  }

  void Hospital::Doctor_By_Speciality (std::string& speciality) {
    for(int i=0 ; i<doctors->size(); i++) {
      if( (*doctors)[i].getDoctorSpeciality()==speciality) {
        std::cout<<(*doctors[i]).getFirstName<<"  " << (*doctors)[i].getLastName() << std::endl;
}
if( (*doctors)[i].getDoctorSpeciality()!=speciality) {
  std::cout<<"no doctor with this speciality"<<std::endl;
}
}

