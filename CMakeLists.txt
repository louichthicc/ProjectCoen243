cmake_minimum_required(VERSION 3.29)
project(ProjectCoen243)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ProjectCoen243
        Driver.cpp
        Hospital.cpp
        Hospital.h
        Doctor.cpp
        Doctor.h
        Patients.h
        Patients.cpp
        doctors.txt
        file_Patients.txt
)
