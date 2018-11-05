#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

class TimeStamp{
    public:
        TimeStamp();
        ~TimeStamp();
        int hours, minutes, seconds;
        void setValue(int, int, int);
        bool operator == (const TimeStamp &timeStamp)const;
        bool operator < (const TimeStamp &timeStamp)const;
        void print();
};

#endif // TIMESTAMP_H_INCLUDED
