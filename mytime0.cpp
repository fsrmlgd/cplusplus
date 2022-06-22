//mytime.cpp --Time-class before operator overloading
#include <iostream>
class Time
{
private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time operator+(const Time &t) const;
    Time operator-(const Time &t) const;
    Time operator*(double n) const;
    void Show() const;
};
Time::Time()
{
    hours = minutes = 0;
}
Time::Time(int h, int m)
{
    hours = h;
    minutes = m;
}
void Time::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}
void Time::AddHr(int h)
{
    hours += h;
}
void Time::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}
Time Time::operator+(const Time &t) const
{
    Time sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}
Time Time::operator-(const Time &t) const
{
    Time diff;
    diff.minutes = (minutes + 60 * hours - t.minutes - t.hours * 60) % 60;
    diff.hours = (minutes + 60 * hours - t.minutes - t.hours * 60) / 60;
    return diff;
}
Time Time::operator*(double mult) const
{
    Time result;
    result.hours = (minutes + 60 * hours) * mult / 60;
    result.minutes = (minutes + 60 * hours) * mult - 60 * result.hours;
    return result;
}
void Time::Show() const
{
    std::cout << hours << " hours, " << minutes
              << " minutes. " << std::endl;
}

int main()
{
    using namespace std;
    Time planning;
    Time coding(2, 40);
    Time fixing(5, 59);
    Time total;
    Time diff;
    cout << "planning time = ";
    planning.Show();
    cout << "coding time = ";
    coding.Show();
    cout << "fixing time = ";
    fixing.Show();
    total = coding + fixing;
    cout << "coding.sum(fixing) = ";
    total.Show();
    diff = fixing-coding;
    cout<<"fixing.diff(coding) = ";
    diff.Show();
    return 0;
}