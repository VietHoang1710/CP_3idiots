#include <bits/stdc++.h>
using namespace std;

// #define __builtin_popcount __builtin_popcountll

int main()
{
}

class Solution
{
public:
    int uniquePaths(int m, int n)
    {

        long long res = 1;
        for (int k = 1; k <= m; k++)
        {
            res *= (n + k);
            res /= k;
        }
        return res;
    }
};