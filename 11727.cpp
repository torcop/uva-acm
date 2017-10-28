// my second program in C++
#include <iostream>
#include <cstdio>
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

int TC, a, b,c,d=1;
scanf("%d", &TC);
while (TC--) {
scanf("%d %d %d", &a, &b,&c);

if (a > c)
   swap(a, c);

if (a > b)
   swap(a, b);

if (b > c)
   swap(b, c);

printf("Case %d: %d\n",d++,b);
//fprintf(f,"Case %d: %d\n",d++,b);

}

  //fclose(f);
  return 0;

}

