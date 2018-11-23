#include <iostream>

using namespace std;

int FindMin(int a[], int size){
    if (size == 1){
        return a[0];
    }else{
        if(a[size-1] < FindMin(a, size-1)){
            return a[size-1];
        }else{
            return FindMin(a, size-1);
        }
    }
}

int main(){
    int size, counter, minValue;
    cout << "Enter Size of Integer Array: ";
    cin >> size;

    int a[size];
    for(counter = 0; counter < size; counter++){
        cout << "Enter Value for a[" << counter << "]: ";
        cin >> a[counter];
    }

    minValue = FindMin(a, size);

    cout << "\nMinimum Value: " << minValue << endl;

    return 0;
}
