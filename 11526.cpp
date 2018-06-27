#include <bits/stdc++.h>

using namespace std;


long long H(int n){
    long long res = 0;
    for( int i = 1; i <= n; i=i+1 ){
        res = (res + n/i);
    }
    return res;
}

ofstream myfile;

int main ()
{


myfile.open ("write.txt");


long long int c;

int k,l ;
string str,cand;

scanf("%d",&k);

while(  k-- ){

        cin >> l;

        cout << H(l) << endl;

        myfile << H(l) << endl;


}


myfile.close();



return 0;
}




