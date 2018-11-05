#include <iostream>
#include "StudentInfoName.cpp"

using namespace std;

int main(){
    StudentInfo student;
    //inserting students
    for(int counter = 0; counter < 2; counter++){
        student.insertStudent();
    }
    //deleting student
    int newId;
    cout << "\nEnter Id to delete Account: ";
    cin >> newId;
    student.deleteStudent(newId);
    //retrieving student
    cout << "\nEnter Student Id to Search: ";
    cin >> newId;
    int index = student.retrieveStudent(newId);
    if(index != -1){
        student.printInfo(newId);
    }
    //printing all info
    student.printInfoAll();
    //..........
    return 0;
}
