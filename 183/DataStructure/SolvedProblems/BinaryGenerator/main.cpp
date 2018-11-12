#include <iostream>
#include "BinaryGenerator.cpp"

using namespace std;

int main(){
    cout << "Enter an Integer: ";
    int value;
    cin >> value;

    QueType<int> salekur(10);

    salekur.Enqueue(1);

    int item;
    for(int counter = 0; counter < value; counter++){
        salekur.Dequeue(item);
        cout << item << endl;
        salekur.Enqueue(item * 10);
        salekur.Enqueue((item * 10) + 1);
    }
    return 0;
}
