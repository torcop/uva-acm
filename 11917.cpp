#include <bits/stdc++.h>
using namespace std;

int main ()
{


// FILE *f = fopen("write.txt", "w");
// if (f == NULL)
// {
//    printf("Error opening file!\n");
//
//    exit(1);
// }

int TC, course_number,course_du,count = 0 ;
char course_name[21];

map <string, int> course_time;

scanf("%d", &TC);
while (TC--) {
  scanf("%d", &course_number);

  course_time.clear();

  while( course_number-- ){

    scanf("%s %d", course_name , &course_du );

      course_time.insert( pair <string, int> ( string(course_name) , course_du) );

  }



int D;
  scanf("%d", &D );

  scanf("%s", course_name );

    string key = string( course_name );

  map <string, int> :: iterator itr  = course_time.find( key  );

    if ( itr != course_time.end()){

      int course_duration = itr->second;


      if( course_duration <= D  ){

        cout<< "Case "<<++count<<": Yesss"<< endl;

        //cout<< course_duration << " DUR::DEAD " << D << endl;

        // fprintf(f,"%d%s%d\n",course_duration," DU::DEAD ",D);
        // fprintf(f,"%s%d%s\n","Case ",count,": Yesss");


      }else if(  course_duration > D && course_duration <= D +5  ){

        cout<<"Case "<<++count<< ": Late"<< endl;

        //cout<< course_duration << " DUR::DEAD " << D << endl;

        // fprintf(f,"%d%s%d\n",course_duration," DU::DEAD ",D);
        // fprintf(f,"%s%d%s\n","Case ",count,": Late");

      }else{

          cout<<"Case "<<++count<<": Do your own homework!"<<endl;

          //cout<< course_duration << " DUR::DEAD " << D << endl;

          // fprintf(f,"%d%s%d\n",course_duration," DU::DEAD ",D);
          // fprintf(f,"%s%d%s\n","Case ",count,": Do your own homework!");
      }

    }
    else
    {
        cout<< "Case "<<++count<<": Do your own homework!"<<endl;
        //fprintf(f,"%d%s%d\n",course_duration,"::",D);
        // fprintf(f,"%s%d%s\n","Case ",count,": Do your own homework!");
    }

}

  // fclose(f);

  return 0;

}
