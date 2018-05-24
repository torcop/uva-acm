// my second program in C++
#include <bits/stdc++.h>

typedef long long int ll ;


using namespace std;



int main ()
{


  // FILE *fp;
  //   fp = fopen("write.txt", "w");
  //
  //   if(!fp)
  //   {
  //
  //     cout << " ERROR" << endl;
  //     exit(0);
  //   }

ll N,M,K ;
char map_c;
int map_int;

string str;

scanf("%lld" , &N);

if( N > 0 && N <= 5){

  while(  N-- ){

      map< char, int > mp;
      map<char, int>::iterator it ;

      double sum = 0;

      bool calc = false;

      scanf("%lld" , &K);

      if( K > 0 && K <= 100 ){

          while(  K-- ){
              scanf(" %c %d" , &map_c,&map_int);
              mp[map_c] = map_int;
          }

        }

          scanf("%lld" , &M);
           cin.ignore();

          if( M > 0 && M <= 150000 ){

            calc = true;

           while( M--  ){

               getline( cin , str);

               for(int i=0 ; i< str.length() ; i++){
                   it = mp.find(str[i]);
                   if(it != mp.end())
                       sum += it->second;
               }
          }

          printf("%.2f$\n",sum/100);
          // fprintf(fp,"%.2f$\n",sum/100);
      }

      if( !calc ){

        printf("0.00$\n");
        // fprintf(fp,"0.00$\n");
      }

    }
}

// fclose(fp);

  return 0;

}
