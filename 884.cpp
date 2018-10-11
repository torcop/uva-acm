#include <bits/stdc++.h>

using namespace std;

ofstream myfile;





int main ()
{


myfile.open ("write.txt");

 int c,l;

int k,count = 0 ;

int n = 1000000;

bool prime[n+1];
memset(prime, true, sizeof(bool));


int ans[168];

int result[n+1];


    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            ans[count++] = p;
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++){

            int j = p;
            result[p] = 0;
         for (int k=0; k<168; k++){

                while( j%ans[k] == 0){

                     j /= ans[k];
                      result[p]++;
                }


         }

    }



while(   scanf("%d",&l) == 1 ){



    cout <<  ans[l]  << endl;

}


myfile.close();



return 0;
}







