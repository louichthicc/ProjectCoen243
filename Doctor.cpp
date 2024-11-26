// Doctor.cpp
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#include "Doctor.h"
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