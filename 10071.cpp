#include <bits/stdc++.h>

using namespace std;


ofstream myfile;

int main()
{

  myfile.open ("write.txt");

int n;

long long int player,opponent;

string inp;


while( getline(cin,inp) ) {

  stringstream ss( inp );

    ss >> player;

    ss >> opponent;


    cout << player * opponent * 2 << endl;
    myfile << player * opponent * 2 << endl;

//    bigint bg = (
//
//        bigint( opponent )
//        *
//        bigint( player )
//
//      ) *2;


//    cout << bg   << endl;
//
//    myfile << bg << endl;




  }


    myfile.close();

    return 0;
}
