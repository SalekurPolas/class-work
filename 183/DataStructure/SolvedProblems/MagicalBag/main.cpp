#include <iostream>
#include "PQType.cpp"

using namespace std;

int main(){
    cout << "Example: 46**** or 53*****" << endl;
    cout << "Enter Integer String: ";
    char charArr[100];
    cin >> charArr;

    int counter;
    int arr[100];
    for (counter = 0; charArr[counter] != '\0'; counter++){
        arr[counter] = charArr[counter] - '0';
    }

    PQType<int> salekur(arr[0]);

    for(counter = 2; arr[counter] != '\0'; counter++){
        salekur.Enqueue(arr[counter]);
    }

    int item, total = 0;
    for(counter = 0; counter < arr[1]; counter++){
        salekur.Dequeue(item);
        total += item;
        salekur.Enqueue(item/2);
    }

    cout << "\nTotal Candy: " << total << endl;

    /*
    //For fixed value '5321742' try it

    PQType<int> salekur(5);

    salekur.Enqueue(2);
    salekur.Enqueue(1);
    salekur.Enqueue(7);
    salekur.Enqueue(4);
    salekur.Enqueue(2);

    int counter, item, total = 0;
    for(counter = 0; counter < 3; counter++){
        salekur.Dequeue(item);
        total += item;
        salekur.Enqueue(item/2);
    }

    cout << "Total Candy: " << total << endl;
    */

    return 0;
}
