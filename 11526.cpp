#include <bits/stdc++.h>

#define MAX 10001

using namespace std;


long long a[MAX];

long long H(int n){

    long long res = 0;
    for( int i = 1; i <n; i=i+1 ){
        res = (res + n/i);
    }
    return res;
}

ofstream myfile;

int main ()
{


myfile.open ("write.txt");


long long int c,l;

int k ;
string str,cand;

    int count = 0;
    for(int i = 1; i<MAX; i++){


        a[count++] = H(i);
    }

scanf("%d",&k);

while(  k-- ){

        cin >> l;

        cout << a[l] << endl;

        myfile << a[l] << endl;


}


myfile.close();



return 0;
}




