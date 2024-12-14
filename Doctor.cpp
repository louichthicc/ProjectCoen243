
#include "Doctor.h"
#include <string>
#include <iostream>
#include <utility>

//constructor
Doctor::Doctor() {}
Doctor::Doctor(std::string firstName,std::string lastName,int DID, std::string s, int NOY, double S, double bsal) {
    doctorFirstName=std::move(firstName);
    doctorLastName=std::move(lastName);
    doctorID=DID;
    speciality=std::move(s);
    yearsOfExperience=NOY;
    baseSalary=S;
    bonus=bsal;
    salary= Calculate_Salary();
  }


std::string Doctor::getFirstName() {
  return doctorFirstName; }

void Doctor::setFirstName(std::string firstName) {
  doctorFirstName=std::move(firstName); }

std::string Doctor::getLastName() {
  return doctorLastName; }

void Doctor::setLastName(std::string lastName) {
  doctorLastName=std::move(lastName); }


long int Doctor::getID() {
  return doctorID; }

void Doctor::setID(long int DID) {
  doctorID=DID; }

std::string Doctor::getSpeciality() {
  return speciality; }

void Doctor::setSpeciality(std::string s) {
  speciality=std::move(s); }

int Doctor::getYearsOfExperience() {
  return yearsOfExperience; }

void Doctor::setYearsOfExperience(int NOY) {
  yearsOfExperience=NOY; }

double Doctor::getSalary(){
  return salary; }

void Doctor::setSalary(double s){
  baseSalary=s;
  salary = Calculate_Salary();
}

double Doctor::getBonus(){
  return bonus; }

void Doctor::setBonus(double bsal) {
  bonus=bsal;
  salary = Calculate_Salary();
}

//members functions
double Doctor::Calculate_Salary() {
salary = baseSalary + baseSalary*bonus;
return salary;
}



void Doctor::Print_Doctor_Info() {
  std::cout<<"First Name: "<<doctorFirstName<<std::endl;
  std::cout<<"Last Name: "<<doctorLastName<<std::endl;
  std::cout<<"Doctor ID: "<<doctorID<<std::endl;
  std::cout<<"Doctor Speciality: "<<speciality<<std::endl;
  std::cout<<"Years of experience: "<<yearsOfExperience<<std::endl;
  std::cout<<"Salary: "<<salary<<std::endl;
}
