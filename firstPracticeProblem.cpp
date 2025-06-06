#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string studentName;
    int studentRoll;
    int studentMark;
};

bool cmp(Student l, Student r)
{
    return l.studentMark == r.studentMark ? l.studentRoll < r.studentRoll : l.studentMark > r.studentMark;
}

int main()
{
    int arraySize;
    cin >> arraySize;

    Student studentArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> studentArray[i].studentName >> studentArray[i].studentRoll >> studentArray[i].studentMark;
    }

    sort(studentArray, studentArray + arraySize, cmp);

    for (int i = 0; i < arraySize; i++)
    {
        cout << studentArray[i].studentName << " " << studentArray[i].studentRoll << " " << studentArray[i].studentMark << endl;
    }

    return 0;
}