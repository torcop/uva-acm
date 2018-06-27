#include <bits/stdc++.h>

using namespace std;

long long int  power(long long int x, long long int y,long long int p)
{
    int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
ofstream myfile;

int main ()
{


myfile.open ("write.txt");

long long int x, n,y;

string s;

int count;

while( scanf("%d",&count) == 1 ){


    getchar();

    if( count == 0 ) break;


    while( count-- ){

         getline(cin,s);

        stringstream ss( s );

        ss>>x;
        ss >> y;
        ss>>n;

        long long int result = power(x,y,n);

        cout << result << endl;

        myfile << result << endl;
    }

}



myfile.close();



return 0;
}


