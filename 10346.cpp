#include <bits/stdc++.h>

using namespace std;

typedef  long long int ll;


ofstream myfile;

int main ()
{


myfile.open ("write.txt");

int a ,b  ;

while( scanf( "%d %d",&a,&b ) == 2 ){


    int full_bottle = a;

    int empty_bottle = 0;



    while( a >= b ){

        //full_bottle += a % b;


        full_bottle += a / b;

        empty_bottle += a % b;

        a /= b;

        if( a < b && a + empty_bottle >= b){

            a = a+ empty_bottle;
            empty_bottle = 0;

        }


//
//        cout << "a :: " << a << endl;
//
//        cout << "E :: " << empty_bottle << endl;
//
//        cout << "F :: " << full_bottle << endl;

    }


//
//        cout << "a :: " << a +empty_bottle << endl;
//
//        cout << "E :: " << empty_bottle << endl;
//
//        cout << "F :: " << full_bottle << endl;

//    a = a + empty_bottle;
//
//     while(  a < b ){
//
//        full_bottle += a / b;
//
//        empty_bottle += a % b;
//
//        a /= b;
//
//        full_bottle += ( ( a + empty_bottle ) / b );
//    }


//
//        cout << "a :: " << a << endl;
//
//        cout << "E :: " << empty_bottle << endl;
//
//        cout << "F :: " << full_bottle << endl;



    //full_bottle += a ;


    cout << full_bottle <<endl;

    myfile << full_bottle << endl;

}



myfile.close();



return 0;
}



