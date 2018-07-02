
#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;


ll binomialCoeff(ll n, ll k)
{
    ll C[k+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;  // nC0 is 1

    for (ll i = 1; i <= n; i++)
    {
        // Compute next row of pascal triangle using
        // the previous row
        for (ll j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
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



