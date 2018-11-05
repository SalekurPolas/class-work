#include <iostream>
#include "Parentheses.cpp"

using namespace std;

template<class ItemType>
void Matching(StackType<ItemType> recieveStack){
    int open = 0, close = 0;
    while(!recieveStack.IsEmpty()){
        if(recieveStack.Top() == 40){
            open++;
        }else if(recieveStack.Top() == 41){
            close++;
        }
        recieveStack.Pop();
    }
    if(open == 0 && close == 0){
        cout << "\nDid not find!" <<endl;
    }else{
        if(open == close){
            cout << "\nBalanced!" << endl;
        }else{
            cout << "\nNot Balanced!" <<endl;
        }
    }
}

int main(){
    StackType<char> Stack;
    char pstr[100];
    cout << "Enter Parentheses String: ";
    cin >> pstr;
    for(int counter = 0; pstr[counter] != NULL; counter++){
        Stack.Push(pstr[counter]);
    }
    Matching(Stack);
    return 0;
}
