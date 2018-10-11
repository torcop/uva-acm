#include <bits/stdc++.h>

using namespace std;

ofstream myfile;

    const unsigned long long int M = 1000000007;


unsigned long long int power(unsigned long long int x, unsigned long long int y)
{
    int res = 1;      // Initialize result

    x = x % M;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % M;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % M;
    }
    return res;
}

int main ()
{


myfile.open ("write.txt");

unsigned long int c,l;

int k,count = 0 ;

scanf("%d",&k);

while(  k-- ){

        //cin >> l;

        scanf("%llu",&l);


       //unsigned long long int result = (pow(2,l-1) % 1000000007) * (l % 1000000007);


    unsigned long long int f = 1;

    f = (power(2,l-1) * l ) % M;


        count++;

        cout << "Case #" << count <<": "<< f  << endl;

        myfile << "Case #" << count <<": "<< f  << endl;
}


myfile.close();



return 0;
}





