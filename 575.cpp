#include <bits/stdc++.h>

using namespace std;



int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}




int toDeci(const char str[], int base)
{
    int len = strlen(str);
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;

    for (i = len - 1; i >= 0; i--)
    {

        num += val(str[i]) * power;
        power = ( (power +1) * base ) -1;
    }

    return num;
}





ofstream myfile;

int main ()
{


myfile.open ("write.txt");


int count, from , to;

string str,cand;

while(  getline(cin,str) ){

        if( str == "0" ) break;


            int result = toDeci(str.c_str(),2);

             cout << (result) << endl;

            myfile << (result) << endl;



}


myfile.close();



return 0;
}


