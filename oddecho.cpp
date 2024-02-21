
#pragma once
#include<iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    string word;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> word;
        if (i % 2 != 0)
        {
            cout << word << endl;
        }
    }
}
