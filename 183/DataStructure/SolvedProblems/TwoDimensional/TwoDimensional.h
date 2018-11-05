#ifndef TWODIMENSIONAL_H_INCLUDED
#define TWODIMENSIONAL_H_INCLUDED

class matrixType{
    public:
        matrixType();
        ~matrixType();
        void setMatrixSize(int, int);
        void allocateMatrix();
        void fillMatrix();
        int getMatrix(int,int);
    protected:
        int numRow;
        int numColumn;
        int **matrixData;
};

#endif // TWODIMENSIONAL_H_INCLUDED
