// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long int prime_Sum(int n)
    {
        // Code here
        bool prime[n + 1];

        // Create a boolean array "prime[0..n]"
        // and initialize all entries it as true.
        // A value in prime[i] will finally be
        // false if i is Not a prime, else true.
        memset(prime, true, n + 1);

        for (int p = 2; p * p <= n; p++)
        {

            // If prime[p] is not changed, then
            // it is a prime
            if (prime[p] == true)
            {

                // Update all multiples of p
                for (int i = p * 2; i <= n; i += p)
                    prime[i] = false;
            }
        }

        // Return sum of primes generated through
        // Sieve.
        int sum = 0;
        for (int i = 2; i <= n; i++)
            if (prime[i])
                sum += i;
        return sum;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        Solution ob;
        long long int ans = ob.prime_Sum(n);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends