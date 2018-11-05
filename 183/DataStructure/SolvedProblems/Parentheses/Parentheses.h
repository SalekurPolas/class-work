#ifndef PARENTHESES_H_INCLUDED
#define PARENTHESES_H_INCLUDED

const int MAX_ITEMS = 100;

class FullStack
// Exception class thrown
// by Push when stack is full.
{};
class EmptyStack
// Exception class thrown
// by Pop and Top when stack is empty.
{};
template <class ItemType>
class StackType{
    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
    private:
        int top;
        ItemType items[MAX_ITEMS];
};

#endif // PARENTHESES_H_INCLUDED
