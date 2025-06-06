#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    for (int i = 0; i < testcases; i++)
    {
        int arraySize;
        cin >> arraySize;

        int countEven = 0, countOdd = 0;

        long long int integerArray[arraySize];
        for (int i = 0; i < arraySize; i++)
        {
            cin >> integerArray[i];
        }

        for (int i = 0; i < arraySize; i++)
        {
            if (integerArray[i] % 2 == 0)
            {
                countEven++;
            }
            else if (integerArray[i] % 2 != 0)
            {
                countOdd++;
            }
        }

        if (arraySize == countOdd)
        {
            int result = arraySize / 2;
            cout << result << endl;
        }
        else if (arraySize % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            if (countOdd > countEven)
            {
                int result = (countOdd - countEven) / 2;
                cout << result << endl;
            }
            else
            {
                int result = (countEven - countOdd) / 2;
                cout << result << endl;
            }
        }
    }

    return 0;
}