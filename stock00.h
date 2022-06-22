//stock00.h -- stock class interface
//version 00
#ifndef STOCK00_H
#define STOCK00_H
#include <string>

class Stock //class declaration
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }

public:
    void acquire(const std::string &co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
}; //note semicolon at the end

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; " << company << " shares set to 0." << std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. Transaction is aborted." << std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}
void Stock::sell(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares sold can't be negative. Transaction is aborted. " << std::endl;
    }
    else if (num > shares)
    {
        std::cout << "You can't sell more than you have! Transaction is aborted. " << std::endl;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}
void Stock::show()
{
    std::cout << "company: " << company << std::endl
              << "Shares: " << shares << std::endl
              << "Share Price:$" << share_val << std::endl
              << "Total Worth:$" << total_val << std::endl;
}
#endif