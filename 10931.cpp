#include <bits/stdc++.h>

using namespace std;


void decToBinSum (long long int n)
{


    int sum = 0;

    string bins = "";

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array

        int rem = (n % 2);

        bins += to_string(rem);

        //cout << rem << endl;

        if(  rem == 1 ){
            sum += 1;

        }


        n = n / 2;
        i++;
    }

     reverse(bins.begin(),bins.end());


    cout << "The parity of " << bins << " is " << sum << " (mod 2)."<<endl;



}




ofstream myfile;

int main ()
{


myfile.open ("write.txt");


long long int c;

string str,cand;

while(  getline(cin,str) ){

        if( str == "0" ) break;

        stringstream sst(str);

        sst>>c;



        decToBinSum(c) ;

      //decToBinSum(c) ;



}


myfile.close();



return 0;
}



