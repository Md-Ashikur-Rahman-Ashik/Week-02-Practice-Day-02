#include <bits/stdc++.h>
using namespace std;

void nTimes(int testcases, int i)
{
    if (i <= testcases)
    {
        int num;
        char character;

        cin >> num >> character;

        for (int i = 0; i < num; i++)
        {
            if (i != num - 1)
            {
                cout << character << " ";
            }
            else
            {
                cout << character;
            }
        }

        cout << endl;
        nTimes(testcases, i + 1);
    }
}

int main()
{
    int testcases, i = 1;
    cin >> testcases;

    nTimes(testcases, i);

    return 0;
}