/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*
*   文件名称：boost-demo.cpp
*   创 建 者：lgd
*   创建日期：2021年12月04日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <boost/timer.hpp>
#include <boost/version.hpp>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    boost::timer t;
    cout << "hello world!";
    cout << t.elapsed();
    cout << "boost version: " << BOOST_VERSION << endl;
    cout << "boost lib version: " << BOOST_LIB_VERSION << endl;
    cout << BOOST_PLATFORM << endl;
    cout << BOOST_COMPILER << endl;
    cout << BOOST_STDLIB << endl;
    return 0;
}
