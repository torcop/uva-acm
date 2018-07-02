
#include <bits/stdc++.h>

const int MAX = 1000001;


using namespace std;


ofstream myfile;

bool prime[MAX];


int idx = 0;

//vector<int> primes;


void SieveOfEratosthenes()
{

    for(int i=0;i<MAX;i++)
        prime[i]=1;

     prime[0] = prime[1] = 0;

    for (int p=2; p*p<= MAX; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=MAX; i += p)
                prime[i] = false;

             //
        }



    }




}


int main ()
{


myfile.open ("write.txt");

int n , m;

SieveOfEratosthenes();

//sort(primes.begin(),primes.end());



while( scanf("%d",&n) == 1){


    if(  n == 0 ) {

            break;
    }

        bool flag = true;

        int a ,b;
        int max_diff =-1;
        for(int i = 2; i<n; i++){

            if( prime[i] ){

                int diff = n -i;



                if( prime[diff] ){

                    //max_diff = max(diff,max_diff);

                    if( diff > max_diff ){

                        max_diff = diff;

                        a = min(i,diff);
                        b = max(i,diff);
                    }



                   flag = false;
                   break;
                }

            }
        }


        if( flag ){


            cout << n << ":" << endl; cout << "NO WAY!" << endl;

            myfile << n << ":" << endl; myfile << "NO WAY!" << endl;


        } else{

             cout << n << ":" << endl ; cout  << a << "+" << b << endl;

             myfile << n << ":" << endl ; myfile  << a << "+" << b << endl;


        }
}



myfile.close();



return 0;
}



