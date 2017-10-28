// my second program in C++
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main ()
{


//FILE *f = fopen("file.txt", "w");
//if (f == NULL)
//{
//    printf("Error opening file!\n");
//
//    return -1;
//    //exit(1);
//}

int TC, amount=0,total_amount = 0;

char command[6];
scanf("%d", &TC);
while (TC--) {
//amount = -1;
    scanf("%s", command);

    if( !strcmp (command,"donate") ){
        scanf("%d",&amount );
        total_amount += amount;
    }
    else
    {
         printf("%d\n",total_amount);

        //fprintf(f,"%d\n",total_amount);
    }


}

  //fclose(f);
  return 0;

}


