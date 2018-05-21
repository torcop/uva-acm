#include <bits/stdc++.h>
#define WF( f , str ) fprintf(f,"%lld\n",str)

typedef long long int ll;

using namespace std;

int main (){

  FILE *fp;
    fp = fopen("write.txt", "w");

    if(!fp)
    {

      cout << " ERROR" << endl;
      exit(0);
    }

  set <ll > my_set;

  std::set<ll>::iterator it;

 ll N ;

 while( scanf("%lld",&N) == 1  ){

   //cout << N << endl;

    my_set.insert(N);

    it = my_set.begin();

    ll size = my_set.size();

    if(size & 1){


      ll ind = (size/2);

      // if( ind > 0)
      //     ind -= 1;

      std::advance(it, ind);
      ll x = *it;

      cout<< x << endl;

      WF( fp, x);

    }else{

      ll ind = (size/2)-1;

      std::advance(it, ind);

      ll a = *it;


      std::advance(it, 1);



      ll b = *it;

      ll r = (a+b)/2;
       cout<< r << endl;

       WF( fp, r);
    }

 }

 fclose(fp);

return 0;
}
