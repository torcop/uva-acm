#include <bits/stdc++.h>

#define WF( f , str ) fprintf(f,"%s\n",str)
using namespace std;

int main (){

//FILE *f = fopen("newfile.txt", "w");
//if (f == NULL)
//{
//    printf("Error opening file!\n");
//
//    return -1;
//    //exit(1);
//}



   int N, n;


int a[3000];

bool b[3000];

    char* jolly = "Jolly";
    char* notJolly = "Not jolly";

  while( scanf("%d",&N) == 1 ){
        //scanf("%d", &N);

    bool result = true;


    int count = 0;

    b[count] = true;

    if( N == 0 ){

        cout << "Not jolly" << endl;
        result = false;

    }


    while(  count < N ) {
    scanf("%d", &n);
      a[count++] = n;
      b[count] = false;
    }

    if( count == 1 ){

           //WF( f , jolly);
            //fprintf(f,"%s\n",jolly);
             cout << "Jolly" << endl;
            result  = false;
    }


    if( result ){

        for(int i=0;i<N-1;i++){

        int diff = abs(a[i] - a[i+1]);

        //cout << " :: "<< diff << endl;

        if( diff > 0 && diff < N)
            b[ diff ] = true;
        else{

            //WF(f,notJolly);
            //fprintf(f,"%s\n",notJolly);
             cout << "Not jolly" << endl;
             result = false;
            break;
        }


        }

    }



    if( result){

        for(int i =1;i<N;i++){

            if(!b[i])
            {
                result = false;
                break;
            }
        }

        if(  result ){
            //WF(f,jolly);
            //fprintf(f,"%s\n",jolly);
            cout << "Jolly" << endl;
        }

        else{
        //WF(f,notJolly);
        //fprintf(f,"%s\n",notJolly);
        cout << "Not jolly" << endl;
        }

    }
}


//fclose(f);

return 0;
}
