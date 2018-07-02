#include <bits/stdc++.h>

using namespace std;

typedef  long long int ll;


ofstream myfile;

int main ()
{


myfile.open ("write.txt");

int a  ;

while( scanf( "%d",&a ) == 1 ){

    if( a == 0 )
        break;

    int full_bottle = 0;

    int empty_bottle = 0;



    while( 1 ){



        if( a < 3 )
        {

               if( empty_bottle > 0){

                  a += empty_bottle;

                  empty_bottle = 0;
               }

                    if( a == 1 || a == 0){

                        full_bottle += 0;
                        break;
                    }

                    if( a == 2 ){



                        full_bottle += 1;
                        break;
                    }


            }

        empty_bottle += a % 3;

        full_bottle += a / 3;

        a /= 3;

//
//        cout << "a :: " << a << endl;
//
//        cout << "E :: " << empty_bottle << endl;
//
//        cout << "F :: " << full_bottle << endl;



    }


    cout << full_bottle <<endl;

    myfile << full_bottle << endl;

}



myfile.close();



return 0;
}



