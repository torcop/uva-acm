#include <bits/stdc++.h>

using namespace std;


string decToBase(int n,int base)
{

    if( n == 0)
        return "0";

    string s = "";
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array

         string str = to_string(n % base);
         if( str == "10")
            str = "A";

         if( str == "11")
            str = "B";


         if( str == "12")
            str = "C";


         if( str == "13")
            str = "D";


         if( str == "14")
            str = "E";

        if( str == "15")
            str = "F";


         s += str;
        n = n / base;
        i++;
    }

    reverse(s.begin(),s.end());

    return s;
}

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
        power = power * base;
    }

    return num;
}


string spacePad( string res){

        int dist = 7 - res.length();

        string str = "";
        for(int i = 0; i< dist ; i++){

                str += " ";

        }

       return str + res;

}



ofstream myfile;

int main ()
{


myfile.open ("write.txt");


int count, from , to;

string str,cand;

while(  getline(cin,str) ){

        if( str.length() == 0 ) break;


         stringstream sst(str);

         sst >> cand;

         sst >> from;

         sst >> to;

         string result = decToBase(toDeci(cand.c_str(),from),to);

         if( result.length() > 7 ){

                 cout << "  ERROR" << endl;


                myfile << "  ERROR" << endl;

         } else{


             cout << spacePad(result) << endl;


            myfile << spacePad(result) << endl;

         }


}


myfile.close();



return 0;
}


