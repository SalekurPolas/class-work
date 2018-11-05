#include <iostream>
#include "StackType.cpp"

using namespace std;

void ReversePrint(StackType<int> recieveStack){
    StackType<int> newStack;
    int tempVariable;
    while(!recieveStack.IsEmpty()){
        tempVariable = recieveStack.Top();
        newStack.Push(tempVariable);
        recieveStack.Pop();
    }
    cout << "Reverse Stack: ";
    while(!newStack.IsEmpty()){
        tempVariable = newStack.Top();
        cout << tempVariable << " ";
        recieveStack.Push(tempVariable);
        newStack.Pop();
    }
    cout << "\n" << endl;
}

void EmptyStatus(StackType<int> recieveStack){
    if(recieveStack.IsEmpty()){
        cout << "Stack is Empty!\n" << endl;
    }else{
        cout << "Stack is not Empty!\n" << endl;
    }
}

void FullStatus(StackType<int> recieveStack){
    if(recieveStack.IsFull()){
        cout << "Stack is Full!\n" << endl;
    }else{
        cout << "Stack is not Full!\n" << endl;
    }
}

int SumOddItems(StackType<int> recieveStack){
    int tempVariable, sum = 0;
    while(!recieveStack.IsEmpty()){
        tempVariable = recieveStack.Top();
        if( tempVariable % 2 == 1 ){
            sum += tempVariable;
        }
        recieveStack.Pop();
    }
    return sum;
}

int main(){
    //creating stack object
    StackType<int> newStack;
    //checking empty status
    EmptyStatus(newStack);
    //inserting values in stack
    newStack.Push(5);
    newStack.Push(7);
    newStack.Push(4);
    newStack.Push(2);
    //checking empty status
    EmptyStatus(newStack);
    //checking full status
    FullStatus(newStack);
    //print value in reverse
    ReversePrint(newStack);
    //inserting values in stack
    newStack.Push(3);
    ReversePrint(newStack);
    FullStatus(newStack);
    //deleting items
    newStack.Pop();
    newStack.Pop();
    ReversePrint(newStack);
    int sum = SumOddItems(newStack);
    cout << "Sum of Odd items: " << sum <<endl;
    return 0;
}
