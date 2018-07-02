// A optimized school method based C++ program to check
// if a number is prime
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n < 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

ofstream myfile;

// Driver Program to test above function
int main()
{

    myfile.open ("write.txt");


    string str;

    while( getline( cin, str) ){

            int sum = 0;

        for( int i = 0; i < str.length(); i++  ){

            if( isupper( str[i] ) ){

                    //cout << (str[i] - 'A') << endl;

                sum  += (str[i] - 'A') + 27;

            } else{

                //cout << ( str[i] - 'a' ) << endl;

                sum  += ( str[i] - 'a' ) + 1;

            }

        }

        //cout << sum << endl;

        string st = isPrime(sum) ? "It is a prime word." : "It is not a prime word.";

        cout << st << endl;
        myfile << st << endl;

    }

    myfile.close();


    return 0;
}
