#include<iostream>
#include "StudentInfoName.h"

using namespace std;

StudentInfo::StudentInfo(){
    index = 0;
    total = 0;
}

void StudentInfo::insertStudent(){
    cout << "Insert Student ID: ";
    cin >> id[index];
    total++;
    setName(id[index]);
    setCgpa(id[index]);
    index++;
}

void StudentInfo::setCgpa(int newId){
    cout << "Enter CGPA for " <<newId<< ": ";
    cin >> cgpa[retrieveStudent(newId)];
}

void StudentInfo::setName(int newId){
    cout << "Enter Name for " <<newId<< ": ";

    char newName[30];
    cin >> newName;

    name[retrieveStudent(newId)] = "Salekur";
}

int StudentInfo::retrieveStudent(int newId){
    for(int counter = 0; counter < total; counter++){
        if(newId == id[counter]){
            return counter;
        }
    }
    cout << "\nStudent could not found by ID " <<newId<< "!\n";
    return -1;
}

void StudentInfo::printInfo(int newId){
    cout << "\nStudent ID: " <<newId<<endl;
    cout << "Student Name: " <<name[retrieveStudent(newId)]<<endl;
    cout << "Student CGPA: " <<cgpa[retrieveStudent(newId)]<<endl;
}

void StudentInfo::printInfoAll(){
    cout << "\nPrinting All Students Info:\n"<<endl;
    for(int counter = 0; counter < total; counter++){
        cout << "Student ID: " <<id[counter]<<endl;
        cout << "Student Name: " <<name[counter]<<endl;
        cout << "Student CGPA: " <<cgpa[counter]<<endl;
    }
}

void StudentInfo::deleteStudent(int newId){
    if(retrieveStudent(newId) != -1){
        for(int counter = 0; counter < total; counter++){
            if(newId == id[counter]){
                id[counter] = id[counter+1];
                cgpa[counter] = cgpa[counter+1];
                name[counter] = name[counter+1];
                cout << "\nStudent id " << newId << " is successfully Deleted!\n";
                for(int counts = counter+1; counts < total; counts++){
                    id[counts] = id[counts+1];
                    cgpa[counts] = cgpa[counts+1];
                    name[counts] = name[counts+1];
                }
                total--;
                index--;
            }
        }
    }
}
