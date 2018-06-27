#include <bits/stdc++.h>

using namespace std;


string decToTernary(int n)
{

    if( n == 0)
        return "0";

    string s = "";
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
         s += to_string(n % 3);
        n = n / 3;
        i++;
    }

    reverse(s.begin(),s.end());

    return s;
}



ofstream myfile;

int main ()
{


myfile.open ("write.txt");


int count;

while(  scanf("%d",&count) ){

        if( count < 0 )break;


        string result = decToTernary(count);

       cout << result << endl;


    myfile << result << endl;
}


myfile.close();



return 0;
}


