
#include <bits/stdc++.h>

typedef long long int  ll ;

const ll MAX = 20000000;

const ll CONT = 100002;


using namespace std;


ofstream myfile;

bool prime[MAX];


ll idx = 0;

//ll primes[CONT];
typedef pair<ll,ll> pp;

map<ll,pp> twin_prime;

void SieveOfEratosthenes()
{

    for(ll i=0;i<MAX;i++)
        prime[i]=1;

     prime[0] = prime[1] = 0;

     ll previous = 0;
     ll count =0;

    for (ll p=2; p*p< MAX; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i=p*2; i<=MAX; i += p)
                prime[i] = false;



             //
        }






    }

    for (ll p=2; p< MAX; p++)
    {


     if( prime[p]  && prime[p+2]){


        twin_prime[++count] = make_pair(p,p+2);

            // &&  previous == (p - 2) && prime[previous]


//           primes[++count] = p;
//
//           primes[++count] = p+2;



             //cout << count << " :: " << p << " :: " << p+2 << endl;

        }

        if( count >= CONT)
            break;


}


}


int main ()
{


myfile.open ("write.txt");

ll n , m;

SieveOfEratosthenes();

//
//for(int i=0 ; i< CONT;i++){
//
//    cout << i << " :: " << twin_prime[i].first << " :: " << twin_prime[i].second <<endl;
//}

//sort(primes.begin(),primes.end());

//map<int,int> maps;



while( scanf("%lld",&n) == 1){


    if(  n == 0 ) {

            break;
    }


    ll x = n;



//        int count = 0;
//
//        while( !prime[x] || !prime[x+2]  || (++count != n) ){
//
//            x++;
//            //break;
//        }

        cout << "("<< twin_prime[x].first << ", " << twin_prime[x].second << ")" << endl;

        myfile << "("<< twin_prime[x].first << ", " << twin_prime[x].second << ")" << endl;

//        for(int i = 2; i < n; i++){
//
//            if( prime[i] ){
//                int diff = n -i;
//                if( prime[diff] ){
//                   //cout << " ( " << i << " , " << diff << " ) " << endl;
//                    maps[min(i,diff)] = max(i,diff);
//
//                    ++count;
//                }
//
//            }
//        }


//        cout << maps.size() << endl;
//
//        myfile << maps.size() << endl;

        //maps.clear();
}




myfile.close();



return 0;
}



