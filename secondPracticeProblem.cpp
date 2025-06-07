#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string studentName;
    int studentRoll;
    int studentMark;
};

int main()
{
    int arraySize;
    cin >> arraySize;

    int i = 0, j = arraySize - 1;

    Student studentArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> studentArray[i].studentName >> studentArray[i].studentRoll >> studentArray[i].studentMark;
    }

    while (i < j)
    {
        swap(studentArray[i], studentArray[j]);
        i++;
        j--;
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << studentArray[i].studentName << " " << studentArray[i].studentRoll << " " << studentArray[i].studentMark << endl;
    }

    return 0;
}