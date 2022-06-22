/*================================================================
*   Copyright (C) 2021 Sangfor Ltd. All rights reserved.
*   
*   文件名称：GradeBook.cpp
*   创 建 者：lgd
*   创建日期：2021年09月21日
*   邮    箱: lgd1447210528@gmail.com
================================================================*/
#include <iostream>
#include <string>
using namespace std;

class GradeBook {
public:
    explicit GradeBook(string name)
    {
        setCourName(name);
    }
    void setCourName(string name)
    {
        if (name.size() <= 25)
            courseName = name;
        if (name.size() > 25) {
            courseName = name.substr(0, 25);
            cerr << "Name \"" << name << "\" exceeds maxium length (25).\n"
                 << "Limiting courseName to first 25 characters.\n"
                 << endl;
        }
    }

    string getCourseName() const
    {
        return courseName;
    }

    void displayMessage() const
    {
        cout << "Welcome to the grade book for \n"
             << courseName << "!" << endl;
    }

private:
    string courseName;
};

int main()
{
    string nameOfCourse;
    GradeBook myGradeBook("123asdfghjklkjjjjfeuifhiaefhoaefhiofoefo");
    GradeBook myGradeBook1("456");

    cout << "gradeBook1 created for course: " << myGradeBook.getCourseName()
         << "\ngradeBook2 created for course: " << myGradeBook1.getCourseName()
         << endl;
    return 0;
}
