//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int getLastDigit(string a, string b)
    {
        // code here
        int l = stoi(a) % 10;
        int power = stoi(b);

        int cyclicity[10] = {0, 1, 4, 4, 2, 5, 6, 4, 4, 2};
        int r = 0;

        switch (l)
        {
        case 0:
            return 0;
        case 1:
            return 1;
        case 5:
            return 5;
        case 6:
            return 6;
        default:
            r = power / cyclicity[l];
            int ans = abs((static_cast<int>(pow(l, r)) % 10));
            cout << "Last Digit: " << l << " reminder: " << r << " Answer: " ;
            return ans;
        }
    }
};
//{ Driver Code Starts.
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
    // } Driver Code Ends