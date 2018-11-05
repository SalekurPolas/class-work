#include "DynArrGet.h"
#include <iostream>

DynArr::DynArr(){
    data = NULL;
    size = 0;
}

DynArr::DynArr(int s){
    data = new int[s];
    size = s;
}

DynArr::~DynArr(){
    delete[ ] data;
}

int DynArr::getValue(int index){
    return data[index];
}

void DynArr::setValue(int index,int value){
    data[index] = value;
}

void DynArr::allocate(int s){
    data = new int[s];
}
