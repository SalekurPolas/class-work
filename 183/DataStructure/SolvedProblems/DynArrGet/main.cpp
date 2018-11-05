#include <iostream>
#include "DynArrGet.cpp"

using namespace std;

int main(){
    int size = 5;

    DynArr salekur();
    DynArr polas(size);

    int temp;
    for(int counter = 0; counter < size; counter++){
        cout<< "Enter value at Index " << counter << ": ";
        cin>>temp;
        polas.setValue(counter, temp);
    }

    cout<<endl;

    for(int counter = 0; counter < size; counter++){
        cout<< "The Value at Index " << counter << " is: " <<polas.getValue(counter)<<endl;
    }

    int newSize;
    cout <<endl<< "Enter New Array Size: ";
    cin>>newSize;
    cout<<endl;

    for(int counter = 0; counter < newSize; counter++){
        cout<<polas.getValue(counter)<< " Works!" <<endl;
    }

    return 0;
}
