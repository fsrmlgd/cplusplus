#ifndef TIME_H
#define TIME_H

// Time class definition
class Time {
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;

public:
    Time();
    void setTime(int, int, int);
    void printUniversal() const;
    void printStandard() const;
};
#endif
