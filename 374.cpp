
#include <bits/stdc++.h>

typedef unsigned long long ull ;



using namespace std;


ofstream myfile;
ull power(ull x, ull y, ull p)
{
    ull res = 1;      // Initialize result

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




int main ()
{


myfile.open ("write.txt");

ull b ,p, m;


while( scanf("%llu\n%llu\n%llu", &b, &p, &m) == 3){

    cout << power(b,p,m) << endl;

    myfile << power(b,p,m) << endl;


}




myfile.close();



return 0;
}



