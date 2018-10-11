#include <bits/stdc++.h>

using namespace std;

// function to find smallest number k such that
// the product of digits of k is equal to n
long long int smallestNumber(int n)
{


    stack<int> digits;


    for (int i=9; i>=2 && n > 1; i--)
    {
        while (n % i == 0)
        {

            digits.push(i);
            n = n / i;
        }
    }

    if (n != 1)
        return -1;


    long long int k = 0;
    while (!digits.empty())
    {
        k = k*10 + digits.top();
        digits.pop();
    }

    return k;
}


ofstream myfile;

int main()
{

    myfile.open ("write.txt");

    long long int n,p ;

    scanf("%lld",&n);
    while( n-- ){

        scanf("%lld",&p);

        if( p == 0 || p == 1){

               cout << (p)<<endl;

        myfile << (p)<<endl;
        } else{

              cout << smallestNumber(p)<<endl;

            myfile << smallestNumber(p)<<endl;

        }




    }


myfile.close();

    return 0;
}
