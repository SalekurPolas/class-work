#include <iostream>
#include "DynArrTemp.cpp"

using namespace std;

int main(){
    DynArrTemp<char> polas(3);

    char temp;
    for(int counter = 0; counter < 3; counter++){
        cout<< "Enter Int Value at " <<counter<< ": ";
        cin>>temp;
        polas.setValue(counter, temp);
    }

    cout<<endl;
    for(int counter = 0; counter < 3; counter++){
        cout<< "Value at index " <<counter<< " is: " <<polas.getValue(counter)<<endl;
    }

    return 0;
}
