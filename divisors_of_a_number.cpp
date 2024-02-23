#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void getLastDigit(int a)
    {
        for (int i = 1; i <= a; i++)
        {
            if ((a % i) == 0)
                cout << i << " ";
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;

        cin >> a;

        Solution ob;
        ob.getLastDigit(a);
    }
    return 0;
}