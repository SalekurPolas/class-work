#ifndef BINARYGENERATOR_H_INCLUDED
#define BINARYGENERATOR_H_INCLUDED

class FullQueue{};
class EmptyQueue{};

template<class ItemType>
class QueType{
    public:
        QueType();
        QueType(int);
        ~QueType();
        void MakeEmpty();
        bool IsEmpty();
        bool IsFull();
        void Enqueue(ItemType);
        void Dequeue(ItemType&);
    private:
        int front;
        int rear;
        ItemType* items;
        int maxQue;
};

#endif // BINARYGENERATOR_H_INCLUDED
