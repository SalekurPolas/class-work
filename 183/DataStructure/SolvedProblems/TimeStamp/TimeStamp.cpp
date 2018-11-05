#include "TimeStamp.h"

void TimeStamp::setValue(int hours, int minutes, int seconds){
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

bool TimeStamp::operator==(const TimeStamp &timeStamp)const{
    return hours == timeStamp.hours && minutes == timeStamp.minutes && seconds == timeStamp.seconds;
}

bool TimeStamp::operator<(const TimeStamp &timeStamp)const{
    if(hours == timeStamp.hours){
        if(minutes == timeStamp.minutes){
            return seconds < timeStamp.seconds;
        }
        return minutes < timeStamp.minutes;
    }
    return hours < timeStamp.hours;
}

void TimeStamp::print(){
    cout << hours << ":" << minutes << ":" << seconds << endl;
}
