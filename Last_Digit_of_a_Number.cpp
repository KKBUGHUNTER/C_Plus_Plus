#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getLastDigit(string a, string b)
    {
        cout << pow(stoi(a), stoi(b));
        int ans = static_cast<int>(pow(stoi(a), stoi(b))) % 10;
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;

        cin >> a >> b;

        Solution ob;
        cout << ob.getLastDigit(a, b) << endl;
    }
    return 0;
}