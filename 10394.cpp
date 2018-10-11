
#include <bits/stdc++.h>

typedef long long int  ll ;

const ll MAX = 20000010;

const ll CONT = 100002;


using namespace std;


ofstream myfile;

bool prime[MAX];

int twin_prime[MAX];


ll idx = 0;

//ll primes[CONT];
typedef pair<ll,ll> pp;


void SieveOfEratosthenes(map<ll,pp>& twin_prime_map)
{

    for(ll i=0;i<MAX;i++)
        prime[i]=1;

     prime[0] = prime[1] = 0;

     ll previous = 0;
     ll count =0;

     int n=sqrt(MAX);

    for (ll p=3; p*p<=MAX; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i=p*2; i<=MAX; i += p)
                prime[i] = false;

        }

    }


    int j = 1;

     for (ll p=3; p< MAX; p++)
    {
        // If prime[p] is not changed, then it is a prime

       if(prime[ p ] && prime[ p +2]){

            //twin_prime[j++] = p;

            //twin_prime[j++] = p+2;



//
//        cout <<  p << " , " <<  p +2 << endl;
//
//        myfile << p << " , " << p+2 << endl;


        twin_prime_map[j++] = make_pair(p,p+2);

       }


    }

//        for (ll p=1; p< j; p++)
//    {
//        // If prime[p] is not changed, then it is a prime
//
//
//            //twin_prime[j++] = p;
//
//
//
//
////        cout <<  p<< " , " << twin_prime[p] << endl;
////
////        myfile << p << " , " << twin_prime[p] << endl;
//
//
//
//    }




}



int main ()
{


myfile.open ("write.txt");

ll n , m;

map<ll,pp> twin_prime_map;

SieveOfEratosthenes(twin_prime_map);




//sort(primes.begin(),primes.end());

//map<int,int> maps;






while( scanf("%lld",&n) == 1){


    if(  n == 0 ) {

            break;
    }


    ll x = n;




        cout << "("<< twin_prime_map[x].first << ", " << twin_prime_map[x].second << ")" << endl;

        myfile << "("<< twin_prime_map[x].first << ", " << twin_prime_map[x].second << ")" << endl;



}


twin_prime_map.clear();


myfile.close();



return 0;
}



