#include <iostream>
#include "SortedType.cpp"

using namespace std;

int main(){
    SortedType<int> polas;
    cout << "Length of List: " << polas.LengthIs() << "\n "<< endl;

    polas.InsertItem(5);
    polas.InsertItem(7);
    polas.InsertItem(4);
    polas.InsertItem(2);
    polas.InsertItem(1);

    cout << endl;
    for(int counter = 0; counter < polas.LengthIs(); counter++){
        int value;
        polas.GetNextItem(value);
        cout << "Value at " << counter << ": " << value << endl;
    }

    cout << endl;
    bool found;
    int item = 6;
    polas.RetriveItem(item, found);
    if(found) cout << "Item is Found!" << endl;
    else cout << "Item is not Found!" << endl;

    item = 5;
    polas.RetriveItem(item, found);
    if(found) cout << "Item is Found!" << endl;
    else cout << "Item is not Found!" << endl;

    if(polas.IsFull()) cout << "List is Full!" << endl;
    else cout << "List is not Full!" << endl;

    polas.DeleteItem(1);
    cout << endl;
    polas.ResetList();
    for(int counter = 0; counter < polas.LengthIs(); counter++){
        int value;
        polas.GetNextItem(value);
        cout << "Value at " << counter << ": " << value << endl;
    }

    if(polas.IsFull()) cout << "\nList is Full!" << endl;
    else cout << "\nList is not Full!" << endl;

    return 0;
}
