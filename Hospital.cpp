// Hospital.cpp
// Created by:
// Louis-Charles Penelle (40315955), Github : Louichthicc
// Maya Senoune (40314506), Github : Maya-senoune
//

#include "Hospital.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "Doctor.h"
#include "Patients.h"
Hospital::Hospital() {
    createDoctors();
    createPatients();
}

void Hospital::createPatients() {
    std::ifstream file1("file_Patients.txt");
    if(!file1) {
        std::cerr<<"File not found"<<std::endl;
        return;
    }
    std::string line;
    while(std::getline(file1,line)) {
        std::istringstream linestream(line);
        std::string item;
        std::vector<std::string> items;
        while (std::getline(linestream,item,',')) {
            items.push_back(item);
        }
        Patients patient;
        patient.setName(items[0]);
        patient.setLastName(items[1]);
        patient.setPID(stol(items[2]));
        patient.setDID(stol(items[3]));
        patient.setDOB(items[4]);
        patient.setBT(items[5]);
        patient.setD(items[6]);
        patient.setDOA(items[7]);
        patient.setDOD(items[8]);
        patients.push_back(patient);
    }
    file1.close();
}
void Hospital::createDoctors() {
    std::ifstream file("doctors.txt");
    if(!file) {
        std::cerr<<"File not found"<<std::endl;
        return;
    }
    std::string line;
    std::string FN,LN,S,BS,B,DID,YOE;
    while(file>>FN>>LN>>DID>>S>>YOE>>BS>>B) {
        Doctor doctor(FN,LN,std::stol(DID),S,stoi(YOE),stod(BS),stod(B));
        doctors.push_back(doctor);
    }
    file.close();
}
void Hospital::Find_Oldest_Patient() {
    std::string oldest="20241215";
    int oldest_patient=0;
    for(int i=0;i<patients.size();i++) {
        if(patients[i].getDOB()<oldest) {
            oldest=patients[i].getDOB();
            oldest_patient=i;
        }
    }
    patients[oldest_patient].Print_Patient_info();
}
int Hospital::Count_Critical_Patients() {
    int counter=0;
    for(int i=0;i<patients.size();i++) {
        if(patients[i].Patient_Status()=="Critical") {
            counter++;
        }
    }
    return counter;
}

void Hospital::Doctor_By_Speciality(std::string s) {
    for(int i=0;i<doctors.size();i++) {
        if(doctors[i].getSpeciality()== s){
            std::cout<< "Doctor "<<doctors[i].getFirstName()<<" "<<doctors[i].getLastName()<<" does "<<s<<std::endl;
        }
    }
}

void Hospital::Show_Patient_by_ID(int id) {
    for(int i=0;i<patients.size();i++) {
        if(patients[i].getPID()==id) {
            patients[i].Print_Patient_info();
            return;
        }
    }
    std::cout<<"No patient has the provided ID"<<std::endl;
}
void Hospital::Show_Doctor_by_ID(int id) {
    for(int i=0;i<doctors.size();i++) {
        if(doctors[i].getID()==id) {
            doctors[i].Print_Doctor_Info();
            return;
        }
    }
    std::cout<<"No doctor has the provided ID"<<std::endl;
}
void Hospital::Show_assigned_doctor(int id) {
    int doctorID = 0;
    for(int i=0;i<patients.size();i++) {
        if(patients[i].getDID()==id) {
            doctorID=patients[i].getDID();
        }
    }
    for(int i=0;i<doctors.size();i++) {
        if(doctors[i].getID()==doctorID) {
            std::cout<<"The assigned doctor is: "<<std::endl;
            doctors[i].Print_Doctor_Info();
            return;
        }
    }
    std::cout<<"either the doctor ID provided or the patient ID provided aren't in our database."<<std::endl;
}
void Hospital::Show_Assigned_Patients(int id) {
    int counter=0;
    for(int i=0;i<patients.size();i++) {
        if(patients[i].getDID()==id) {
            counter++;
            patients[i].Print_Patient_info();
        }
    }
    if (counter==0) {
        std::cout<<"no patients assigned";
    }
}
