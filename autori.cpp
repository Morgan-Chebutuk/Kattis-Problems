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
    string word;
    bool newWord = true;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (newWord)
        {
            cout << word.c_str()[i];
            newWord = false;
        }
        else if (word.c_str()[i] == '-')
        {
            newWord = true;
        }
    }
}
