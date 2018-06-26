#include <bits/stdc++.h>

using namespace std;



int main (){

char str[100];

int n;

 while( scanf("%d",&n) == 1  ){

    if( n == 0)
        break;

    scanf("%s",str);

    int i =0;

    int j = 0;

    while( str[i] != '\0'){

        j = i+n-1;

        int k = 0;

        while( ++k <= n ){

            cout<< str[j--];

        }

        i +=n;


    }

    cout << endl;



  //cout << st << endl;

 }


return 0;
}

