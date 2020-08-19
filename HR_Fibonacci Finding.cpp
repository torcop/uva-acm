// #include <iostream>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <sstream>
// #include <queue>
// #include <deque>
// #include <bitset>
// #include <iterator>
// #include <list>
// #include <stack>
// #include <map>
// #include <set>
// #include <functional>
// #include <numeric>
// #include <utility>
// #include <limits>
// #include <time.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>

#include <bits/stdc++.h>

using namespace std;

/*****************************  All Required define Pre-Processors and typedef Constants ***********************************/

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define ll long long
#define ull unsigned long long
#define ld long double
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef map<int, int> mpii;
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define FOR(i, j, k, in) for (int i = j; i < k; i += in)
#define RFOR(i, j, k, in) for (int i = j; i >= k; i -= in)
#define tr(c, i) for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)
#define present(c, x) ((c).find(x) != (c).end())
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define PB push_back
#define MP make_pair
#define fi first
#define se second
#define sz(x) (int)((x).size())
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define lli long long int
#define REP(i, n) for (int i = 1; i <= n; i++)

lli ar[3];

lli I[3][3], T[3][3];

void mul(lli A[3][3], lli B[3][3], int dim)
{
    lli res[dim + 1][dim + 1];

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            res[i][j] = 0;
            for (int k = 1; k <= 2; k++)
            {
                lli x = (A[i][k] * B[k][j]) % MOD;
                res[i][j] = (res[i][j] + x) % MOD;
            }
        }
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            A[i][j] = res[i][j];
        }
    }
}

lli getFib(int n)
{

    if (n <= 2)
        return ar[n];

    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;

    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;

    n = n - 1;

    while (n)
    {
        if (n & 2)

            mul(I, T, 2),
                n--;

        else

            mul(T, T, 2),
                n /= 2;
    }

    lli Fn = (ar[1] * I[1][1] + ar[2] * I[2][1]) % MOD;

    return Fn;
}

int main()
{

    int t, n;
    cin >> t;

    while (t--)
    {

        cin >> ar[1] >> ar[2] >> n;

        n++;

        cout << getFib(n) << endl;
    }

    return 0;
}
