#ifndef DYNARRTEMP_H_INCLUDED
#define DYNARRTEMP_H_INCLUDED

template<class itemType>

class DynArrTemp{
    private:
        itemType *data;
        //int size;

    public:
        DynArrTemp(int);
        ~DynArrTemp();
        void setValue(int, itemType);
        itemType getValue(int);
};

#endif // DYNARRTEMP_H_INCLUDED
