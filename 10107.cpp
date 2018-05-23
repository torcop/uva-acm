#include <bits/stdc++.h>
// #define WF( f , str ) fprintf(f,"%lld\n",str)

typedef long long int ll;



using namespace std;

int main (){

  // FILE *fp;
  //   fp = fopen("write.txt", "w");
  //
  //   if(!fp)
  //   {
  //
  //     cout << " ERROR" << endl;
  //     exit(0);
  //   }

  // 
  // ofstream myfile;
  // myfile.open ("write.txt");

  vector<ll> my_set;


 ll N ;

 while( scanf("%lld",&N) == 1  ){

   //cout << N << endl;

    my_set.push_back(N);

    sort( my_set.begin() , my_set.end());

    int size = my_set.size();

    if(size & 1){


      int ind = (size/2);

      // if( ind > 0)
      //     ind -= 1;


      ll x = my_set.at(ind);

      //myfile  << "Index :: " << ind << " Value :: "<< x << endl;

      cout << x << endl;

      //myfile << x << endl;

      // WF( fp, x);

    }else{

      ll ind = (size /2 ) -1 ;

      ll a = my_set.at(ind);

      ll b = my_set.at(ind + 1);


      ll r = (a+b)/2;

      //myfile << "Index:: " << ind << " Value:: " <<  a << " :: " << " Index " << ind+1 << " :: "<< b << " :: " << r << endl;

      //myfile << r << endl;

      cout << r << endl;

       //WF( fp, r);
    }

 }


  //myfile.close();
 //fclose(fp);

return 0;
}
