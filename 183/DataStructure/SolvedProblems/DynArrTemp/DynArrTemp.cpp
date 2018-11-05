#include "DynArrTemp.h"
#include <iostream>

using namespace std;

template <class itemType>
DynArrTemp<itemType>::DynArrTemp(int s){
    data = new itemType[s];
    //size = s;
}

template<class itemType>
DynArrTemp<itemType>::~DynArrTemp(){
    delete[] data;
}

template <class itemType>
itemType DynArrTemp<itemType>:: getValue(int index){
    return data[index];
}

template<class itemType>
void DynArrTemp<itemType>::setValue(int index, itemType value){
    data[index] = value;
}
