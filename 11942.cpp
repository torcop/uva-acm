#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;

typedef vector<ll> vlls;


// ofstream myfile;


int main (){

 ll N , inp , round = 0;




 // myfile.open ("write.txt");

scanf("%lld",&N);

while( N--){


  vlls lls;

  std::string line;
  getline(std::cin, line);
  std::istringstream iss(line);
  while (iss >> inp)
  {
    lls.push_back(inp);
  }

  vlls::iterator it;  // declare an iterator to a vector of strings

  for(it = lls.begin(); it != lls.end(); it++ )    {

        cout<< *it << endl;

  }

   //
   // myfile << "Set #" << round << endl;
   // myfile << "The minimum number of moves is " << result <<"."<< endl;
   // myfile << endl;

}




// myfile.close();


return 0;
}
