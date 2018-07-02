#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}


ofstream myfile;

int main ()
{


myfile.open ("write.txt");

int n ,t ;

string str;

;

int a[500];



while( scanf("%d",&t) == 1){


   if( !isPrime(t) ){

        cout << t <<" is not prime." << endl;

        myfile << t <<" is not prime." << endl;

   } else{

        str = "";
        int x = t;
        while( t ){
            str += to_string(t % 10);

            t /= 10;
        }

        //reverse( str.start() , str.end() );

        if( (x != stoi(str) ) && isPrime( stoi(str) ) ){

            cout << x << " is emirp." << endl;

            myfile << x << " is emirp." << endl;

        }else{

            cout << x << " is prime." << endl;

            myfile << x << " is prime." << endl;

        }

   }



}



myfile.close();



return 0;
}




