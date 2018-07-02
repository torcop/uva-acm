#include <bits/stdc++.h>

using namespace std;

typedef  long long int ll;


int equation(int x , int a  , int b , int c){


    return a*(x*x) + b * x + c;
}


ofstream myfile;

int main ()
{


myfile.open ("write.txt");

int d , c ,a ,b ,l ;




while( scanf( "%d %d %d %d %d",&a,&b,&c,&d,&l ) == 5 ){




    if( a == 0 && b == 0 && c ==0 && d == 0 && l ==0)
        break;


        int count = 0;

     for( int i = 0 ; i <=l ; i++){


        if( equation(i,a,b,c) % d == 0 ){

            count++;

        }


     }


        cout << count <<endl;
//
        myfile << count << endl;

}



myfile.close();



return 0;
}



