#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;

typedef vector<ll> vlls;


// ofstream myfile;


int main (){

 ll N , inp , round = 0;




 // myfile.open ("write.txt");



while( scanf("%lld",&N) == 1){

  if( N == 0) break;

if( N >= 1 && N <= 50 ) {



    vlls llcont;

    ll count = 0;

    ll lop = N;

  while( N-- ){

    scanf("%lld",&inp);

      llcont.push_back( inp );

      count += inp;

  }

    //cout << count << " :: " << N << endl;

    ll brick = count / lop;

  //  cout << "brick::" << brick << endl;

    ll result  = 0;

    for (ll i = 0 ; i < llcont.size(); i++ ){

        if( brick < llcont[i] ){


            result += (llcont[i] - brick) ;

          // cout << llcont[i] << " :: " << brick << " ::RES::"<<  result << endl;

        }

    }



   cout << "Set #" << ++round << endl;
   cout << "The minimum number of moves is " << result <<"."<< endl;
   cout << endl;
   //
   // myfile << "Set #" << round << endl;
   // myfile << "The minimum number of moves is " << result <<"."<< endl;
   // myfile << endl;

}

}


// myfile.close();


return 0;
}
