
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
        for(int i = 2; i<n; i++){

            if( prime[i] ){

                int diff = n -i;

                if( prime[diff] ){

                   cout << n << " = " << i << " + " << diff << endl;

                   myfile << n << " = " << i << " + " << diff << endl;


                   flag = false;
                   break;
                }

            }
        }


        if( flag ){


            cout << "Goldbach's conjecture is wrong." << endl;

             myfile << "Goldbach's conjecture is wrong." << endl;


        }
}



myfile.close();



return 0;
}



