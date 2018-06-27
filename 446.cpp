#include <bits/stdc++.h>

using namespace std;

int hexadecimalToDecimal(const char hexVal[])
{
    int len = strlen(hexVal);

    // Initializing base value to 1, i.e 16^0
    int base = 1;

    int dec_val = 0;

    // Extracting characters as digits from last character
    for (int i=len-1; i>=0; i--)
    {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value.
        if (hexVal[i]>='0' && hexVal[i]<='9')
        {
            dec_val += (hexVal[i] - 48)*base;

            // incrementing base by power
            base = base * 16;
        }

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexVal[i]>='A' && hexVal[i]<='F')
        {
            dec_val += (hexVal[i] - 55)*base;

            // incrementing base by power
            base = base*16;
        }
    }

    return dec_val;
}


// function to convert decimal to binary
string decToBinary(int n)
{
    // array to store binary number
    //int binaryNum[1000];

    string s = "";
    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
         s += to_string(n % 2);
        n = n / 2;
        i++;
    }

    reverse(s.begin(),s.end());

    return s;
}


string padding13( string x){


    string result = "";

    int pad = 13 - x.length();

    if( pad < 0)
        return x;

    for(int i = 0; i< pad; i++){


        result += "0";
    }

    return result + x;

}


ofstream myfile;

int main ()
{


myfile.open ("write.txt");


string s , st1,st2,op;

int count;

scanf("%d",&count);

getchar();
while(  count-- ){


    getline(cin,s);

    stringstream ss( s );

    ss>>st1;
    ss>>op;
    ss >> st2;


          int x = hexadecimalToDecimal(st1.c_str());

          int y = hexadecimalToDecimal(st2.c_str());

          string smr;


    if( op == "+"){


            smr = to_string( x + y );



    }


    if( op == "-"){

         smr = to_string( x - y );

    }


        string stx = padding13( decToBinary( x ) );

        string sty = padding13( decToBinary( y ) );


      string result = stx + " " + op + " " + sty + " = " + smr;




       cout << result << endl;


    myfile << result << endl;
}


myfile.close();



return 0;
}

