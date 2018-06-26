#include <bits/stdc++.h>

using namespace std;

ofstream myfile;


int main (){

    myfile.open ("write.txt");


int input,lines;

map<string,int> dics;



 while( scanf("%d %d",&input,&lines) == 2  ){

   getchar();


    while( input-- ){

        string s;
        getline(cin,s);
        stringstream ss(s);

        string key;
        int val;

         ss >> key;
         ss >> val;

         //cout << key << " :: " << val << endl;

         dics[key] = val;

    }

    while(lines--){

            int points = 0;

            string str;


         while(getline(cin,str)){

            if( str == "." )
                break;

            if( str.length() > 0 ){


                stringstream sst(str);
                string keys;

                while( sst >> keys )
                {

                    points += dics[keys];

                }
            }

        }

        cout << points << endl;

        myfile << points << endl;



    }







 }

  myfile.close();


return 0;
}


