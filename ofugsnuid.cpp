#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int num;
    vector <int> result;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        result.push_back(num);
    }
    reverse(result.begin(), result.end());
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << endl;
    }
}
