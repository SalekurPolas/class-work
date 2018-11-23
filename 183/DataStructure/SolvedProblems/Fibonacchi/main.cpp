#include <iostream>

using namespace std;

int fib(int n){
    if (n==0){
        return 0;
    }else if (n==1){
       return 1;
    }else{
        return (fib(n-1) + fib(n-2));
    }
}

int main(){
    cout << "Enter an Integer: ";
    int n, counter, value;
    cin >> n;

    cout << "Fibonacci Series: ";
    for(counter = 0; counter < n; counter++){
        value = fib(counter);
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
