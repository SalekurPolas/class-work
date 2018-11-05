#include "TwoDimensionalType.h"
#include<iostream>

using namespace std;

template<class dataType>
TwoDimensionalType<dataType>::TwoDimensionalType(){
    row = 0;
    col = 0;
    matrixData = 0;
}

template<class dataType>
TwoDimensionalType<dataType>::~TwoDimensionalType(){
    for(int counter = 0; counter < row; counter++){
        delete matrixData[row];
        delete[] matrixData;
    }
}

template<class dataType>
void TwoDimensionalType<dataType>::setMatrixSize(int newRow, int newCol){
    row = newRow;
    col = newCol;
}

template<class dataType>
void TwoDimensionalType<dataType>::allocateMatrix(){
    matrixData = new dataType*[row];
    for(int counter = 0; counter < row; counter++){
        matrixData[counter] = new dataType[col];
    }
}

template<class dataType>
void TwoDimensionalType<dataType>::fillMatrix(){
    allocateMatrix();
    cout<<"\nYour Matrix Size is "<<row<<"x"<<col<<"\nEnter Value for them: "<<endl;
    for(int counter = 0; counter < row; counter++){
        for(int counts = 0; counts < col; counts++){
            cin>>matrixData[counter][counts];
        }
    }
}

template<class dataType>
dataType TwoDimensionalType<dataType>::getMatrix(int row, int col){
    return matrixData[row][col];
}

template<class dataType>
void TwoDimensionalType<dataType>::printMatrix(){
    cout << "\nYour Entered Matrix is: \n"<<endl;
    for(int counter = 0; counter < row; counter++){
        for(int counts = 0; counts < col; counts++){
            cout << "Value at [" <<counter<< "][" <<counts<< "]: " <<getMatrix(counter, counts)<<endl;
        }
    }
}
