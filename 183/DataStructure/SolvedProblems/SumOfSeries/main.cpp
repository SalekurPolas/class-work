#include <iostream>
#include <math.h>

using namespace std;

double SumOfSeries(int n){
    if(n == 0){
        return 1;
    }else{
        return (1/pow(2, n)) + SumOfSeries(n-1);
    }
}

int main(){
    int n;
    cout << "Enter Total Element of Series: ";
    cin >> n;

    double sum = SumOfSeries(n);

    cout << "Sum Of Series: " << sum << endl;
    return 0;
}
