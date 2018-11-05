#include <iostream>
#include "UnsortedType.cpp"

using namespace std;

int main(){
    //creating object
    UnsortedType<int> polas;
    //inserting list elements
    polas.InsertItem(5);
    polas.InsertItem(7);
    polas.InsertItem(6);
    polas.InsertItem(9);
    //printing list
    int item = 0;
    polas.ResetList();
    cout<<"Unsorted List: ";
    for(int counter = 0; counter < polas.LengthIs(); counter++){
        polas.GetNextItem(item);
        cout << item << ", ";
    }
    //printing list length
    cout << "\n\nLength of the list: " << polas.LengthIs() <<endl;
    //inserting element
    polas.InsertItem(1);
    //resetting position
    polas.ResetList();
    //printing list
    cout<<"\nUnsorted List: ";
    for(int counter = 0; counter < polas.LengthIs(); counter++){
        polas.GetNextItem(item);
        cout << item << ", ";
    }
    cout << endl;
    //retrieving element
    bool found = false;
    int retriveValue = 4;
    polas.RetriveItem(retriveValue, found);
    if(found == true){
        cout << "\nThe item " << retriveValue <<" is Found!" <<endl;
    }else{
        cout << "\nThe item " << retriveValue <<" does not Found!" <<endl;
    }
    //searching value 5
    retriveValue = 5;
    polas.RetriveItem(retriveValue, found);
    if(found == true){
        cout << "\nThe item " << retriveValue <<" is Found!" <<endl;
    }else{
        cout << "\nThe item " << retriveValue <<" does not Found!" <<endl;
    }
    //searching value 9
    retriveValue = 9;
    polas.RetriveItem(retriveValue, found);
    if(found == true){
        cout << "\nThe item " << retriveValue <<" is Found!" <<endl;
    }else{
        cout << "\nThe item " << retriveValue <<" does not Found!" <<endl;
    }
    //searching value 10
    retriveValue = 10;
    polas.RetriveItem(retriveValue, found);
    if(found == true){
        cout << "\nThe item " << retriveValue <<" is Found!" <<endl;
    }else{
        cout << "\nThe item " << retriveValue <<" does not Found!" <<endl;
    }
    //checking the list is full or not
    if(polas.IsFull() == true){
        cout << "\nList is Full!" <<endl;
    }else{
        cout << "\nList is not Full!" <<endl;
    }
    //deleting element
    polas.DeleteItem(5);
    //checking the list is full or not
    if(polas.IsFull() == true){
        cout << "\nList is Full!" <<endl;
    }else{
        cout << "\nList is not Full!" <<endl;
    }
    //deleting element
    polas.DeleteItem(1);
    //printing list
    polas.ResetList();
    cout<<"\nUnsorted List: ";
    for(int counter = 0; counter < polas.LengthIs(); counter++){
        polas.GetNextItem(item);
        cout << item << ", ";
    }
    //deleting element
    polas.DeleteItem(6);
    //printing list
    polas.ResetList();
    cout<<"\n\nUnsorted List: ";
    for(int counter = 0; counter < polas.LengthIs(); counter++){
        polas.GetNextItem(item);
        cout << item << ", ";
    }
    cout << endl;
    return 0;
}
