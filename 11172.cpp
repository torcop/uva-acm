// my second program in C++
#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{

//
//FILE *f = fopen("file.txt", "w");
//if (f == NULL)
//{
//    printf("Error opening file!\n");
//
//    return -1;
//    //exit(1);
//}

int TC, a, b;
scanf("%d", &TC);
while (TC--) {
scanf("%d %d", &a, &b);

if( a < b ){
        //printf("%d\n",a+b);
        //fprintf(f,"%s\n","<");

        printf("%s\n","<");
    }else if( a > b ){

         printf("%s\n",">");
        //fprintf(f,"%s\n",">");
    }else{

         printf("%s\n","=");
        //fprintf(f,"%s\n","=");
    }

}

  //fclose(f);
  return 0;

}
