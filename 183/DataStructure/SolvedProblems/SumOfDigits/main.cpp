#include <iostream>

using namespace std;

int SumOfDigits(int x){
    if(x/10 == 0){
        return x%10;
    }else{
        return (x%10) + SumOfDigits(x/10);
    }
}

int main(){
    cout << "Enter an Integer: ";
    int n,sumValue;
    cin >> n;

    sumValue = SumOfDigits(n);
    cout << "Sum of Digits: " << sumValue << endl;
    return 0;
}
