#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int isPrime(int N)
    {
        for (int i = 2; i * i <= N / 2; i++)
            if (N % i == 0)
                return 0;
        return 1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0;
}