#pragma once
#include<iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
    set <int> knownNumbers;
    int number;
    int result;
    for (int i = 0; i < 10; i++)
    {
        cin >> number;
        number = number % 42;
        if (knownNumbers.count(number) == 0)
        {
            knownNumbers.insert(number);
        }
    }
    cout << knownNumbers.size();
}
