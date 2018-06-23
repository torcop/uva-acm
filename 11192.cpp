#include <bits/stdc++.h>

using namespace std;

ofstream myfile;


int main (){

    myfile.open ("write.txt");

char str[1000];

int n;

 while( scanf("%d",&n) == 1  ){

    if( n == 0)
        break;

    scanf("%s",str);

    //int l = 0;

    //while( str[l++] != '\0');

    n = strlen(str)/n;

    int i =0;

    int j = 0;

    while( str[i] != '\0'){

        j = i+n-1;

        int k = 0;

        while( ++k <= n ){

            cout<< str[j];
            myfile << str[j];
            j--;
        }

        i +=n;


    }

    cout << endl;

    myfile << endl;




 }

  myfile.close();


return 0;
}

