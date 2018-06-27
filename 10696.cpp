#include <bits/stdc++.h>
using namespace std;


ofstream myfile;


int f91( int n){


    if( n >= 100 ){

            int x = n-10;

            cout << x << endl;

           return x;

    } else{

        int x = n + 11;

        cout << x << endl;
        return f91( f91( x ) );
    }




}


int main()
{

  myfile.open ("write.txt");

int n , x , y , count = 0;



while( scanf("%d",&n) == 1){

        if( n == 0 ) break;

        if( n <= 100){

                cout << "Hi" << endl;

            cout << "f91(" << n << ") = " << f91 (f91( n + 11) ) << endl;
        } else{

            cout << "f91(" << n << ") = " << f91(n) << endl;
        }



}


    return 0;
}
