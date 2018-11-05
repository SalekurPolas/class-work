#include <iostream>
#include"TwoDimensional.cpp"

using namespace std;

int main(){
    matrixType polas;

    int row, col;
    cout << "Enter Row Size: ";
    cin >> row;

    cout << "Enter Column Size: ";
    cin >> col;

    polas.setMatrixSize(row, col);
    polas.fillMatrix();

    cout << "\nYour Entered Matrix is: \n" << endl;
    for(int counter=0; counter<row; counter++){
        for(int counts=0; counts<col; counts++){
            cout << "Value at [" << counter << "][" << counts << "] is: " << polas.getMatrix(counter, counts) << endl;
        }
    }
    return 0;
}
