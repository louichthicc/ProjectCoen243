// Doctor.h
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#ifndef DOCTOR_H
#define DOCTOR_H
#include <string>


class Doctor {
public:
    Doctor();
    Doctor(std::string name, std::string lastName, int ID, std::string speciality, int XP, double salary, double bonus);
//getters and setters
    std::string getFirstName();
    std::string getLastName();
    long int getID();
    std::string getSpeciality();
    int getYearsOfExperience();
    double getSalary();
    double getBonus();

    void setFirstName(std::string name);
    void setLastName(std::string lastName);
    void setID(long int ID);
    void setSpeciality(std::string speciality);
    void setYearsOfExperience(int years);
    void setSalary(double salary);
    void setBonus(double bonus);

    double Calculate_Salary();
    void Print_Doctor_Info();

private:
    std::string doctorFirstName;
    std::string doctorLastName;
    long int doctorID;
    std::string speciality;
    int yearsOfExperience;
    double baseSalary;
    double bonus;
    double salary;
};



#endif //DOCTOR_H
