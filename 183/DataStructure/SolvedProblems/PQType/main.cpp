#include <iostream>
#include "PQType.cpp"

using namespace std;

int main(){
    PQType<int> salekur(15);

    if(salekur.IsEmpty()){
       cout << "Queue is Empty!\n" << endl;
    }else{
        cout << "Queue is not Empty!\n" << endl;
    }

    salekur.Enqueue(4);
    salekur.Enqueue(9);
    salekur.Enqueue(2);
    salekur.Enqueue(7);
    salekur.Enqueue(3);
    salekur.Enqueue(11);
    salekur.Enqueue(17);
    salekur.Enqueue(0);
    salekur.Enqueue(5);
    salekur.Enqueue(1);

    if(salekur.IsEmpty()){
       cout << "Queue is Empty!\n" << endl;
    }else{
        cout << "Queue is not Empty!\n" << endl;
    }

    int item;
    salekur.Dequeue(item);
    cout << "Dequeue Value: " << item << endl;
    salekur.Dequeue(item);
    cout << "Dequeue Value: " << item << endl;

    return 0;
}
