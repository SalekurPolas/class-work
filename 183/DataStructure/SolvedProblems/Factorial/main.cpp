#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0){
        return 1;
    }else if(n == 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    cout << "Enter an Integer: ";
    int n, factValue;
    cin >> n;

    factValue = factorial(n);
    cout << "Factorial of " << n << ": " << factValue << endl;
    return 0;
}
