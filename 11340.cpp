// my second program in C++
#include <bits/stdc++.h>

typedef long long int ll ;

typedef std::numeric_limits< long double > dbl;

using namespace std;

int main ()
{


ll N,M,K ;
char map_c;
int map_int;

string str;

scanf("%lld" , &N);

while(  N-- ){

    map< char, int > mp;
    map<char, int>::iterator it ;

//    mp['a']=5;
//    mp['b']=10;

    //it = mp.find('b');

//    if(it == mp.end())
//        cout << "Key-value pair not present in map" ;
//    else
//        cout << "Key-value pair present : "
//          << it->first << "->" << it->second ;
//
//    cout << endl ;



    scanf("%lld" , &K);



    while(  K-- ){


        scanf(" %c %d" , &map_c,&map_int);


        mp[map_c] = map_int;
    }

    scanf("%lld" , &M);

     cin.ignore();

     float sum = 0;

    while( M--  ){


        getline( cin , str);

        for(int i=0 ; i< str.length() ; i++){


            it = mp.find(str[i]);

            if(it != mp.end())
                sum += it->second;

        }


         //for( int i=0 ; i<)



    }


        printf("%.2f",sum/100);
        printf("$\n");

//    cout.precision(3);
//    cout << sum/(double)100 << '$' << endl;
}


  //fclose(f);
  return 0;

}



