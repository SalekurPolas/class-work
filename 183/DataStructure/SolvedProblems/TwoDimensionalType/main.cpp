#include <iostream>
#include "TwoDimensionalType.cpp"

using namespace std;

int main(){
    int row, col;
    TwoDimensionalType<char > polas;

    cout << "Enter Row Size: ";
    cin >> row;

    cout << "Enter Col Size: ";
    cin >> col;

    polas.setMatrixSize(row, col);
    polas.fillMatrix();
    polas.printMatrix();

    return 0;
}
