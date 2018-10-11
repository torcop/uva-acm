#include <bits/stdc++.h>

using namespace std;

typedef  long long int ll;


bool isDivBy9(int n , int& x)
{
    // Base cases
    if (n == 0 || n == 9)
        return true;
    if (n < 9)
        return false;

    // If n is greater than 9, then recur for [floor(n/9) - n%8]
    return isDivBy9((int)(n >> 3) - (int)(n & 7),++x);
}

ofstream myfile;

int main ()
{


myfile.open ("write.txt");

int n , m;

string str;

while( getline( cin , str ) ){


    if( str == "0" ) break;

    ll sum  = 0;

    int count = 0;

    for( int i=0; i< str.length(); i++ ){

        sum+= str[i] - '0';

    }


    int degree = 1;
   while (sum > 9) {
			degree++;
			int b4 = sum;
			sum = 0;
			while (b4) {
				sum += b4 % 10;
				b4 /= 10;
			}
		}
		if (sum == 9)
			cout << str << " is a multiple of 9 and has 9-degree " << degree << ".\n";
		else
			cout << str << " is not a multiple of 9.\n";

    str = "";

}



myfile.close();



return 0;
}



