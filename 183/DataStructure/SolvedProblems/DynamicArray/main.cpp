#include "DynamicArray.cpp"
#include <iostream>

using namespace std;

int main(){
    //promoting the user to enter the size of array
    cout<<"Enter the Size of the Array: ";
    int size;

    //taking the input from the user and assigning that value to the integer variable named size
    cin>>size;
    cout<<endl;

    //creating the DynamicArray class object with the specified size
    DynamicArray d(size);

    //taking ten inputs from the users and saving them inside the DynamicArray object created above
    int temp;

    for(int i=0; i<size; i++){
        cout<<"Enter value to be inserted at index = "<<i<<": ";
        cin>>temp;
        d.insertItem(i,temp);
    }

    //printing all the integer values saved in the DynamicArray object
    cout<<"\nThe value stored are: \n\n";

    int temp2;

    for(int i=0; i<size; i++){
        //temp2 = d.getItem(i);
        cout<<"Index = "<<i<<", ";
        //cout<<"Value = "<<temp2<<endl;
        cout<<"Value = "<<d.getItem(i)<<endl;
    }

    return 0;
}
