#ifndef TWODIMENSIONALTYPE_H_INCLUDED
#define TWODIMENSIONALTYPE_H_INCLUDED

using namespace std;

template<class dataType>

class TwoDimensionalType{
    public:
        TwoDimensionalType();
        ~TwoDimensionalType();
        void setMatrixSize(int, int);
        void allocateMatrix();
        void fillMatrix();
        dataType getMatrix(int, int);
        void printMatrix();
    protected:
        int row;
        int col;
        dataType** matrixData;
};

#endif // TWODIMENSIONALTYPE_H_INCLUDED
