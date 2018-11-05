#include <iostream>
#include "QueType.cpp"

using namespace std;

int main(){
    QueType<int> salekur;

    if(salekur.IsEmpty()){
        cout << "Queue is Empty!" << endl;
    }else{
        cout << "Queue is not Empty!" << endl;
    }

    salekur.Enqueue(5);
    salekur.Enqueue(7);
    salekur.Enqueue(4);
    salekur.Enqueue(2);

    if(salekur.IsEmpty()){
        cout << "Queue is Empty!" << endl;
    }else{
        cout << "Queue is not Empty!" << endl;
    }

    if(salekur.IsFull()){
        cout << "Queue is Full!" << endl;
    }else{
        cout << "Queue is not Full!" << endl;
    }

    salekur.Enqueue(6);

    QueType<int> polas;
    int item;
    for(int counter = 0; !salekur.IsEmpty(); counter++){
        salekur.Dequeue(item);
        cout << item << " ";
        polas.Enqueue(item);
    }
    cout << endl;
    if(polas.IsFull()){
        cout << "Queue is Full!" << endl;
    }else{
        cout << "Queue is not Full!" << endl;
    }

    try{
        polas.Enqueue(8);
    }catch(FullQueue e){
        cout << "Queue is Overflow!" <<endl;
    }

    polas.Dequeue(item);
    polas.Dequeue(item);

    for(int counter = 0; !polas.IsEmpty(); counter++){
        polas.Dequeue(item);
        cout << item << " ";
        salekur.Enqueue(item);
    }
    cout << endl;
    salekur.Dequeue(item);
    salekur.Dequeue(item);
    salekur.Dequeue(item);

    if(salekur.IsEmpty()){
        cout << "Queue is Empty!" << endl;
    }else{
        cout << "Queue is not Empty!" << endl;
    }

    try{
        salekur.Dequeue(item);
    }catch(EmptyQueue e){
        cout << "Queue Underflow!" <<endl;
    }
    return 0;
}
