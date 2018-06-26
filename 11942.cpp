#include <bits/stdc++.h>
using namespace std;


typedef long long int ll;

typedef vector<ll> vlls;


// ofstream myfile;


int main (){

 int N , inp , round = 0;


int a, b,c, d,e, f, g, h, i, j;

 // myfile.open ("write.txt");

scanf("%lld",&N);

cout << "Lumberjacks:" << endl;
while( N--){

    scanf("%d %d %d %d %d %d %d %d %d %d",&a, &b,&c, &d,&e, &f,&g, &h,&i, &j);

    if( a < b && b < c && c < d && d < e && e< f && f< g && g < h && h < i && i< j ){


        cout << "Ordered" << endl;
    }
    else if( a > b && b > c && c > d && d > e && e > f && f > g && g > h && h > i && i > j ){


        cout << "Ordered" << endl;
    } else {

        cout << "Unordered" << endl;
    }

   //
   // myfile << "Set #" << round << endl;
   // myfile << "The minimum number of moves is " << result <<"."<< endl;
   // myfile << endl;

}




// myfile.close();


return 0;
}
