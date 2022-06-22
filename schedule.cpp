/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：schedule.cpp
*   创 建 者：lgd
*   创建日期：2021年09月07日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> week = {"第一周", "第二周", "第三周", "第四周", "第五周", "第六周", "第七周", "第八周",
                       "第九周", "第十周", "第十一周", "第十二周", "第十三周", "第十四周", "第十五周", "第十六周"};
vector<string> weekdays = {"星期一", "星期二", "星期三", "星期四", "星期五", "星期六", "星期日"};
vector<string> eachclass = {"上午一节", "上午二节", "下午一节", "下午二节", "晚间上课"};
vector<string> classtime = {"08:30-10:10", "10:30-12:10", "14:30-16:10", "16:30-18:10", "19:00-21:35"};

class RealClass
{
public:
    string classname;
    string teacher;
    vector<int> weeklist;
    vector<int> timelist;
    string classroom;
    int day;
    RealClass(const string &rclassname, const string &rteacher, vector<int> rweeklist, vector<int> rtimelist, const string &rclassroom, int rday)
    {
        classname = rclassname;
        teacher = rteacher;
        weeklist = rweeklist;
        timelist = rtimelist;
        classroom = rclassroom;
        day = rday;
    }
};

class Schedule
{
public:
    vector<RealClass> classlist;
    void add(RealClass some)
    {
        classlist.push_back(some);
    }

    void remove(RealClass sm)
    {
        for (auto iter = classlist.begin(); iter != classlist.end(); iter++)
        {
            if (sm.classname == iter->classname)
            {
                classlist.erase(iter);
            }
        }
    }

    void show()
    {
        for (int i_week = 0; i_week < week.size() - 13; i_week++)
        {
            cout << setw(70) << week[i_week] << endl;
            for (int i = 0; i < 70; i++)
            {
                cout << "*";
            }
            cout << endl;
            cout << setw(15) << "课节\\星期";
            for (int i = 0; i < weekdays.size(); i++)
            {
                cout << setw(15) << weekdays[i];
            }
            cout << endl;
            for (int i_class = 0; i_class < eachclass.size(); i_class++)
            {
                cout << setw(15) << eachclass[i_class];
                for (int i_day = 0; i_day < weekdays.size(); i_day++)
                {
                    vector<string> tmp;
                    for (auto myclass : classlist)
                    {
                        auto u = myclass.weeklist;
                        auto v = myclass.timelist;
                        auto w = myclass.day;
                        if (find(u.begin(), u.end(), i_week + 1) != u.end() && find(v.begin(), v.end(), i_class + 1) != v.end() && w == i_day + 1)
                        {
                            tmp.push_back(myclass.classname);
                        }
                    }

                    if (tmp.empty())
                    {
                        cout << setw(15) << "NULL";
                    }
                    else
                        cout << setw(15) << tmp[0];
                }
                cout << endl;
            }
            cout << endl;
        }
    }
};

int main()
{
    RealClass one = RealClass("硕士英语", "陈晓莉", {3, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}, {2}, "A8502", 1);
    RealClass two = RealClass("硕士英语", "陈晓莉", {3, 4, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15}, {1}, "A8502", 3);
    RealClass tri = RealClass("实验设计与数据处理", "翁庙成", {2, 3, 4, 5, 7, 8, 9, 10}, {3, 4}, "A5211", 1);
    RealClass four = RealClass("高等岩石力学", "阴可", {2, 3, 4, 5}, {1, 2}, "B二509", 4);
    RealClass five = RealClass("Numeric Analysis", "温罗生", {3, 5, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}, {5}, "A5201", 2);
    RealClass six = RealClass("深基坑开挖及支护系统设计", "仉文岗", {3, 4, 5, 6, 7, 8, 9, 10, 11}, {3, 4}, "online", 5);
    Schedule mytable;
    mytable.add(one);
    mytable.add(two);
    mytable.add(tri);
    mytable.add(four);
    mytable.add(five);
    mytable.add(six);
    mytable.show();
    return 0;
}