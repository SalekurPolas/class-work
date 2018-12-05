#include <iostream>
#include "BinarySearchTree.cpp"

using namespace std;

int main(){
    TreeType<int> salekur;

    if(salekur.IsEmpty()){
        cout << "Tree is Empty" << endl;
    }else{
        cout << "Tree is not Empty" << endl;
    }

    salekur.InsertItem(4);
    salekur.InsertItem(9);
    salekur.InsertItem(2);
    salekur.InsertItem(7);
    salekur.InsertItem(3);
    salekur.InsertItem(11);
    salekur.InsertItem(17);
    salekur.InsertItem(0);
    salekur.InsertItem(5);
    salekur.InsertItem(1);

    if(salekur.IsEmpty()){
        cout << "Tree is Empty" << endl;
    }else{
        cout << "Tree is not Empty" << endl;
    }

    cout << "Tree Length: " << salekur.LengthIs() << endl;

    int item = 9;
    bool found;
    salekur.RetrieveItem(item, found);
    if(!found){
        cout << "Item not Found" << endl;
    }else{
        cout << "Item Found" << endl;
    }

    item = 13;
    salekur.RetrieveItem(item, found);
    if(!found){
        cout << "Item not Found" << endl;
    }else{
        cout << "Item Found" << endl;
    }

    salekur.Print();
    cout << endl;

    int counter;
    salekur.ResetTree(PRE_ORDER);
    for(counter = 0; counter < salekur.LengthIs(); counter++){
        salekur.GetNextItem(item, PRE_ORDER, found);
        cout << item << " ";
    }

    cout << endl;
    salekur.ResetTree(POST_ORDER);
    for(counter = 0; counter < salekur.LengthIs(); counter++){
        salekur.GetNextItem(item, POST_ORDER, found);
        cout << item << " ";
    }

    //Second part
    salekur.MakeEmpty();

    cout << endl << endl;
    if(salekur.IsEmpty()){
        cout << "Tree is Empty" << endl;
    }else{
        cout << "Tree is not Empty" << endl;
    }

    salekur.InsertItem(11);
    salekur.InsertItem(9);
    salekur.InsertItem(4);
    salekur.InsertItem(2);
    salekur.InsertItem(7);
    salekur.InsertItem(3);
    salekur.InsertItem(17);
    salekur.InsertItem(0);
    salekur.InsertItem(5);
    salekur.InsertItem(1);

    if(salekur.IsEmpty()){
        cout << "Tree is Empty" << endl;
    }else{
        cout << "Tree is not Empty" << endl;
    }

    cout << endl;
    salekur.ResetTree(IN_ORDER);
    TreeType<int> polas;
    for(counter = 0; counter < salekur.LengthIs(); counter++){
        salekur.GetNextItem(item, IN_ORDER, found);
        if(counter == salekur.LengthIs()/2){
            polas.InsertItem(item);
        }
    }

    return 0;
}
