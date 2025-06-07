#include <bits/stdc++.h>
using namespace std;

int main()
{
    string firstString, secondString;
    getline(cin, firstString);
    cin >> secondString;

    int countString = 0;

    stringstream ss(firstString);
    string word;

    while (ss >> word)
    {
        if (word == secondString)
        {
            countString++;
        }
    }

    cout << countString;

    return 0;
}