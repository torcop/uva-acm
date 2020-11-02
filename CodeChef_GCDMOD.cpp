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

lli prod(lli a, lli b, lli d = MOD)
{

    lli x = 0, y = a;

    while (b > 0)
    {

        if (b & 1)
        {

            x = (x + y) % d;
        }

        y = (y + y) % d;

        b = b / 2;
    }

    return x;
}

lli bpow(lli a, lli n, lli d = MOD)
{

    lli res = 1;

    while (n > 0)
    {
        if (n & 1)
        {
            res = prod(res, a, d);
        }

        a = prod(a, a, d);
        n = n / 2;
    }

    return res;
}

lli solve(lli a, lli b, lli n)
{

    lli v = a - b;

    if (a == b)
    {
        return bpow(a, n) + bpow(b, n) % MOD;
    }

    lli d = (bpow(a, n, v) + bpow(b, n, v)) % v;

    return __gcd(d % v, v);
}

int main()
{

    lli A, B, N;

    int t;

    cin >> t;

    while (t--)
    {
        cin >> A >> B >> N;
        cout << solve(A, B, N) << endl;
    }
    return 0;
}