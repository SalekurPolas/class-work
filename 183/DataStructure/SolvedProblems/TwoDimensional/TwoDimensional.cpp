#include "TwoDimensional.h"
#include <iostream>

using namespace std;

matrixType::matrixType(){
    numRow = 0;
    numColumn = 0;
    matrixData = 0;
}

matrixType::~matrixType(){
    for(int row = 0; row < numRow; row++)
        delete matrixData[row];
        delete[] matrixData;
}

void matrixType::setMatrixSize(int row, int col){
    numRow = row;
    numColumn = col;
}

void matrixType::allocateMatrix(){
    matrixData = new int*[numRow];
    for(int row = 0; row < numRow; row++)
        matrixData[row] = new int[numColumn];
}

void matrixType::fillMatrix(){
    allocateMatrix();
    cout << "\nYour matrix size is " << numRow << "x" << numColumn << "\nEnter Value for them:\n";

    for(int row = 0; row < numRow; row++){
        for (int column = 0; column < numColumn; column++)
            //cout<<"Enter Value at ["<<row<<"]["<<column<<"]: ";
            cin >> matrixData[row][column];
    }
}

int matrixType::getMatrix(int r,int c){
    return matrixData[r][c];
}
