#include<iostream>
#include <string>
using namespace std;
int main()
{
    int b = 0;
    int k = 0;
    string word;
    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        if (word.c_str()[i] == 'k')
        {
            k++;
        }
        else if (word.c_str()[i] == 'b')
        {
            b++;
        }
    }
    if (b == 0 && k == 0)
    {
        cout << "none" << endl;
    }
    else if (b > k)
    {
        cout << "boba" << endl;
    }
    else if(b == k)
    {
        cout << "boki" << endl;
    }
    else
    {
        cout << "kiki" << endl;
    }
}
