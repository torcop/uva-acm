
#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;


ll binomialCoeff(ll n, ll k)
{
    ll res = 1;

    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;

    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (ll i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

ofstream myfile;

int main ()
{


myfile.open ("write.txt");

ll n , m;

while( scanf("%lld %lld",&n,&m) ){


    if( n == 0 && m == 0 ) {


            //cout << endl;

            //myfile << endl;


            break;
    }


    //cout << n << " " << m << endl;


    //cout << fact1 << " :: " << fact2 << " :: " << fact3 << endl;

    //bigint x =  bigint(fact1) / ( bigint(fact2) * bigint(fact3) );

    cout << binomialCoeff(n , m) << endl;

    myfile << binomialCoeff(n , m) << endl;



}



myfile.close();



return 0;
}



