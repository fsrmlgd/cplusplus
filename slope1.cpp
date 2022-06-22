/*================================================================
*   Copyright (C) 2move Sangfor Ltd. All rights reserved.
*
*   文件名称：slope.cpp
*   创 建 者：lgd
*   创建日期：2move年12月17日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
const int slide = 150;
const double π = 3.1415926;
const double φ = π / 6;
const double ϕ = π / 3;
const double f = tan(φ);
const double F = tan(ϕ);
const double c = 400;
const double H = 300;
const double γ = 25;
const vector<double> Foot = { 0, 0 };
const vector<double> Head = { H / F, H };
vector<double> linespace(double a, double b)
{
    vector<double> temp;
    for (int i = 0; i < slide + 1; i++) {
        temp.push_back(a + (b - a) * i / slide);
    }
    return temp;
}

double distance(vector<double> a, vector<double> b)
{
    return hypot(abs(a[0] - b[0]), abs(a[1] - b[1]));
}

double Minus(double a, double b)
{
    return sqrt(abs(b * b - a * a));
}

double choose(vector<double>& point)
{
    double R = distance(point, Foot);
    vector<double> slope = { 0, 0 };
    if (point[1] <= (H / 2 + H / 2 / F / F - point[0] / F)) {
        slope[0] = point[0] + (point[1] - F * point[0]) * sin(φ) * cos(φ);
        slope[1] = slope[0] * F;
    } else {
        slope[1] = H;
        slope[0] = Minus(R, abs(point[1] - H)) + point[0];
    }
    vector<double> t = linespace(Foot[0], slope[0]);
    vector<double> w;
    vector<double> length;
    vector<double> degree;

    for (int i = 0; i < t.size() - 1; i++) {
        if (t[i] <= H / F) {
            double l1 = Minus(R, abs(point[0] - t[i])) - point[1] + t[i] * F;
            double l2 = Minus(R, abs(point[0] - t[i + 1])) - point[1] + t[i + 1] * F;
            w.push_back((l1 + l2) * (t[i + 1] - t[i]) / 2 * γ);
            degree.push_back(atan(((Minus(R, abs(point[0] - t[i + 1])) - Minus(R, abs(point[0] - t[i]))) / (t[i + 1] - t[i]))));
            length.push_back(hypot(abs(l2 - l1 - (t[i + 1] - t[i]) * sin(φ)), t[i + 1] - t[i]));
        } else {
            double l1 = Minus(R, abs(point[0] - t[i])) - point[1] + H;
            double l2 = Minus(R, abs(point[0] - t[i + 1])) - point[1] + H;
            w.push_back((l1 + l2) * (t[i + 1] - t[i]) / 2 * γ);
            degree.push_back(atan(((Minus(R, abs(point[0] - t[i + 1])) - Minus(R, abs(point[0] - t[i]))) / (t[i + 1] - t[i]))));
            length.push_back(hypot(abs(l2 - l1), t[i + 1] - t[i]));
        }
    }

    double r = 0;
    double s = 0;
    for (int i = 0; i < w.size(); i++) {
        r += c * length[i] + f * w[i] * cos(degree[i]);
        s += w[i] * sin(degree[i]);
    }
    double K = -r / s;
    return K;
}

void finder(vector<double>& point)
{
    int stop = 1;
    double move = 0.05;
    int counter = 0;
    double K = 0;
    while (stop) {
        vector<double> p1 = { point[0] + move, point[1] + move };
        vector<double> p2 = { point[0] - move, point[1] + move };
        vector<double> p3 = { point[0] + move, point[1] - move };
        vector<double> p4 = { point[0] - move, point[1] - move };
        vector<double> temp = point;
        double k = choose(point);
        double k1 = choose(p1);
        double k2 = choose(p2);
        double k3 = choose(p3);
        double k4 = choose(p4);
        counter++;
        if (k1 <= k) {
            point = p1;
            k = k1;
        }
        if (k2 <= k) {
            point = p2;
            k = k2;
        }
        if (k3 <= k) {
            point = p3;
            k = k3;
        }
        if (k4 <= k) {
            point = p4;
            k = k4;
        }
        K = k;
        if (point == temp)
            stop = 0;
    }
    cout << "**************" << endl;
    cout << "n = " << counter << endl;
    cout << "K = " << K << endl;
    cout << "**************" << endl;
}

int main()
{
    vector<double> point = { 0, H };
    finder(point);
    return 0;
}
