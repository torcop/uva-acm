#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

ll get_cost( string num_str ){

  ll x = (ll)num_str[0];
  ll cost = 0;
  for(int i = 1; i<num_str.length();i++ ){

    x += (ll)num_str[i];
    cost += x;

  }

  return cost;
}

int main (){


  priority_queue <ll, vector<ll>, greater<ll> > pq;


 ll N ;

 ll total_cost = 0;

char str[100000];

 while( scanf("%s",&str) == 1  ){

   if( (ll)str == 0 )
    break;

  // string num_str = string(str) ;
  //
  // while( next_permutation(num_str.begin(), num_str.end()) ){
  //
  //       pq.push( get_cost( num_str ) );
  //
  // }


    //cout<< pq.top() << endl;
  //
  cout << str << endl;

 }


return 0;
}
