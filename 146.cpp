// my second program in C++
#include <bits/stdc++.h>

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


    char str[51];
    while ( scanf("%s", str) == 1 ) {
    if( strcmp (str,"#") == 0 ){
       break;
    }

    string s(str);

    bool val = next_permutation(s.begin(), s.end());
    if (val == false)
        cout << "No Successor" << endl;
    else
        cout << s << endl;


    }

  //fclose(f);
  return 0;

}



