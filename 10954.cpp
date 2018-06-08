#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;

typedef vector<ll> vlls;

typedef priority_queue <ll, vector< ll >, greater< ll > > pqg;

  ofstream myfile;
  

void get_cost( vlls& lls, pqg& pq){


  myfile << " ############# " << endl;

  ll x = lls[0] ;
  ll cost = 0;

  myfile << x << " ";


  for(ll i = 1; i<lls.size();i++ ){

    myfile << lls[i] << " ";

    x += lls[i];
    cost += x;

  }

    myfile << endl ;

    myfile << "Cost::" << cost << endl;


      myfile << " ############# " << endl;


  pq.push( cost ) ;
}


// Generating permutation using Heap Algorithm
void heapPermutation(vlls &lls , pqg& pq , ll size )
{


    // if size becomes 1 then prints the obtained
    // permutation
    if (size == 1)
    {
        get_cost(lls, pq);
        return;
    }
 
    for (ll i=0; i<size; i++)
    {
        heapPermutation( lls , pq , size-1 );
 
        // if size is odd, swap first and last
        // element
        if (size%2==1)
            swap(lls[0], lls[size-1]);
 
        // If size is even, swap ith and last
        // element
        else
            swap(lls[i], lls[size-1]);
    }
}


int main (){

 ll N , inp ;


  myfile.open ("write.txt");



while( scanf("%lld",&N) == 1){

  if( N == 0) break;

if( N >= 2 && N < 5000 ) {

  vector<ll> lls;

   pqg pq;

  while( N-- ){

    scanf("%lld",&inp);

    if( inp < 100000 ){
      lls.push_back( inp );
    }
  }

  
  //heapPermutation( lls , pq , lls.size());


  std::sort (lls.begin(),lls.end());

  do {
    

    get_cost( lls , pq );

  } while ( std::next_permutation(lls.begin(),lls.end()) );




   cout << pq.top() << endl;

    myfile << "Result::" << pq.top() << endl;


  //  while (!pq.empty()) {
  //      cout << pq.top() << endl;  // Print highest priority string
  //      pq.pop();                    // Remmove highest priority string
  //   }
  
  


}

}


 myfile.close();


return 0;
}
