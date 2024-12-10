
#include "Doctor.h"
#include <string>
#include <iostream>

//constr
Doctor::Doctor() {}
Doctor::Doctor(std::string firstName,std::string lastName,int DID, std::string speciality, int NOY, double salary, double bsal) {
DoctorfirstName=firstName;

DoctorlastName=lastName;

doctorID=DID;

doctorSpeciality=speciality;

numberOfYears=NOY;

doctorSalary=salary;

bonusSalary=bsal;
  }


std::string Doctor::getFirstName() {
  return DoctorfirstName; }

void Doctor::setFirstName(std::string firstName) {
  DoctorfirstName=firstName; }

std::string Doctor::getLastName() {
  return DoctorlastName; }

void Doctor::setLastName(std::string lastName) {
  DoctorlastName=lastName; }


int Doctor::getDoctorID() {
  return doctorID; }

void Doctor::setDoctorID(int DID) {
  doctorID=DID; }

std::string Doctor::getDoctorSpeciality() {
  return doctorSpeciality; }

void Doctor::setDoctorSpeciality(std::string speciality) {
  doctorSpeciality=speciality; }

int Doctor::getNumberOfYears() {
  return numberOfYears; }

void Doctor::setNumberOfYears(int NOY) {
  numberOfYears=NOY; }

double Doctor::getdoctorSalary(){
  return doctorSalary; }

void Doctor::setdoctorSalary(double salary){
  doctorSalary=salary; }

double Doctor::getbonusSalary() {
  return bonusSalary; }

void Doctor::setbonusSalary(double bsal) {
  bonusSalary=bsal;
}

//members functions
double Doctor::Calculate_Salary() {
doctorSalary=doctorSalary*bonusSalary;
return doctorSalary;
}
void Doctor::Print_Doctor_Info() {
  std::cout<<"First Name: "<<DoctorfirstName<<std::endl;
  std::cout<<"Last Name: "<<DoctorlastName<<std::endl;
  std::cout<<"Doctor ID: "<<doctorID<<std::endl;
  std::cout<<"Doctor Speciality: "<<doctorSpeciality<<std::endl;
  std::cout<<"Years of experience: "<<numberOfYears<<std::endl;
  std::cout<<"Salary: "<<doctorSalary<<std::endl; // put getter
}
Doctor::Doctor(){}
Doctor::Doctor(std::string name, std::string lastName, int ID, std::string S, int XP, double salary, double B) {
    doctorFirstName = name;
    doctorLastName = lastName;
    doctorID = ID;
    speciality = S;
    yearsOfExperience = XP;
    baseSalary = salary;
    bonus = B;
}
//getters and setters
std::string Doctor::getFirstName() {
    return doctorFirstName;
}
std::string Doctor::getLastName() {
    return doctorLastName;
}
int Doctor::getID() {
    return doctorID;
}
std::string Doctor::getSpeciality() {
    return speciality;
}
int Doctor::getYearsOfExperience() {
    return yearsOfExperience;
}
double Doctor::getSalary() {
    return baseSalary;
}
double Doctor::getBonus() {
    return bonus;
}

void Doctor::setFirstName(std::string name) {
    doctorFirstName = name;
}
void Doctor::setLastName(std::string lastName) {
    doctorLastName = lastName;
}
void Doctor::setID(int ID) {
    doctorID = ID;
}
void Doctor::setSpeciality(std::string S) {
    speciality = S;
}
void Doctor::setYearsOfExperience(int years) {
    yearsOfExperience = years;
}
void Doctor::setSalary(double salary) {
    baseSalary = salary;
}
void Doctor::setBonus(double B) {
    bonus = B;
}

double Doctor::Calculate_Salary() {
    return baseSalary * (1+bonus);
}
void Doctor::Print_Doctor_Info(){}