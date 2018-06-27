#include <bits/stdc++.h>
using namespace std;


ofstream myfile;



int main()
{

  myfile.open ("write.txt");

int n , x , y , count = 0;



scanf("%d",&n);



  while( n-- ){

        scanf("%d",&x);

        scanf("%d",&y);

        int sum = 0;
        for(int i  = x ; i<=y;i++){

            if( i & 1)
                sum += i;
        }

        cout << "Case " << ++count << ": "  << sum << endl;
  }






    return 0;
}
