#include <iostream>

using namespace std;

int DecToBin(int dec){
    if(dec == 0){
        return 0;
    }else{
        return (dec%2+10*(DecToBin(dec/2)));
    }
}

int main(){
    cout << "Enter a Decimal Value: ";
    int dec;
    cin >> dec;

    int bin = DecToBin(dec);

    cout << "Binary for " << dec << " is: " << bin << endl;
    return 0;
}
