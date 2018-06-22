#include <bits/stdc++.h>
#include <tr1/unordered_map>
using namespace std;


typedef long long int ll;

typedef vector<ll> vlls;


ofstream myfile;


int main (){

int N;


 myfile.open ("write.txt");


 int spaceCount = 0;


while( scanf("%lld",&N) == 1){


    getchar();

    if( spaceCount++ > 0 ){

        cout << endl;
        myfile << endl;
    }


    string line, str;//It should not be string
    stringstream ss;


    std::tr1::unordered_map<string,int> mymap;
    std::tr1::unordered_map<string,int> :: iterator it;

    vector<string> names;

    getline(cin, line);


    ss.str(line);
    while(ss >> str)
    {


        mymap[str] = 0;

        names.push_back(str);
    }



    ss.clear();

    while( N-- ){

        getline(cin, line);



        ss.str(line);

        int count = 0;

        string donner;
        string taker;
        int amount = 0;
        int taker_no = 0;

        int give_amount = 0;

        int gift_rat = 0;

        while(ss >> str)
        {
            if( count == 0 ){

                //mymap[ str ] =
                donner = str ;
            }

            if( count == 1){

                std::istringstream ss1(str);

                ss1 >> amount;


            }


             if( count == 2){

                std::istringstream ss2(str);

                ss2 >> taker_no;

                if( amount > 0 && taker_no > 0){

                        mymap[ donner ] += (-1 * amount);

                     int rems = amount % taker_no ;

                    //if( rems > 0 ){


                        gift_rat = ( amount - rems ) / taker_no ;

                        mymap[ donner ] += rems;

                        //cout << " :::: " << gift_rat << endl;
                    //}

                }


            }


            if( count > 2){

               mymap[str] += gift_rat;
            }

            count++;

            //account.push_back(str);//extracting tokens of string in tmp vector
        }



        ss.clear();


//        vector<string> :: iterator it1;
//
//
//        for (it1 = names.begin(); it1 != names.end(); ++it1)
//        {
//
//            cout << *it1 << " "<< mymap[ *it1 ] << endl;
//
//            //myfile << *it1 << " "<< mymap[ *it1 ] << endl;
//
//        }


//        if(N){


}


        vector<string> :: iterator it1;


        for (it1 = names.begin(); it1 != names.end(); ++it1)
        {

            cout << *it1 << " "<< mymap[ *it1 ] << endl;

            myfile << *it1 << " "<< mymap[ *it1 ] << endl;

        }


//        if(N){


        //}




   // myfile << "Set #" << round << endl;
   // myfile << "The minimum number of moves is " << result <<"."<< endl;
   // myfile << endl;


}


myfile.close();


return 0;
}

