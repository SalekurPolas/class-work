#include <iostream>
#include "D:\Education\Class\183\CSE225L\Coding\SortedType\Sortedtype.h"
#include "D:\Education\Class\183\CSE225L\Coding\SortedType\Sortedtype.cpp"

using namespace std;

class TimeStamp{
    public:
        int hours, minutes, seconds;

        void setValue(int hours, int minutes, int seconds){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }

        bool operator == (const TimeStamp &timeStamp)const{
            return hours == timeStamp.hours && minutes == timeStamp.minutes && seconds == timeStamp.seconds;
        }

        bool operator < (const TimeStamp &timeStamp)const{
            if(hours == timeStamp.hours){
                if(minutes == timeStamp.minutes){
                    return seconds < timeStamp.seconds;
                }
                return minutes < timeStamp.minutes;
            }
            return hours < timeStamp.hours;
        }

        void print(){
            cout << hours << ":" << minutes << ":" << seconds << endl;
        }
};

int main()
{
    SortedType<TimeStamp> *myList;

    TimeStamp t1;
    t1.setValue(15, 34, 23);
    myList->InsertItem(t1);

    TimeStamp t2;
    t2.setValue(13, 3, 2);
    myList->InsertItem(t2);

    TimeStamp t3;
    t3.setValue(43, 45, 12);
    myList->InsertItem(t3);

    TimeStamp t4;
    t4.setValue(25, 36, 17);
    myList->InsertItem(t4);

    TimeStamp t5;
    t5.setValue(52, 02, 20);
    myList->InsertItem(t5);

    myList->DeleteItem(t4);

    TimeStamp t;
    myList->ResetList();
    for(int i=0;i<4;i++)
    {
        myList->GetNextItem(t);
        t.print();
    }

    return 0;
}
