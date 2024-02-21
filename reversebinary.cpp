#pragma once
#include<iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    string binStr;
    int n;
    int result = 0;
    cin >> n;
    while (n >= 1)
    {
        if (n % 2 != 0)
        {
            binStr.append("1");
        }
        else
        {
            binStr.append("0");
        }
        n /= 2;
    }
    reverse(binStr.begin(), binStr.end());
    for (int i = 0; i < binStr.length(); i++)
    {
        if (binStr.c_str()[i] == '1')
        {
            result += 1 * pow(2, i);
        }
    }
    cout << result << endl;
}
