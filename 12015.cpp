#include <bits/stdc++.h>

#define WF( f , str ) fprintf(f,"%s\n",str)
using namespace std;


    // Inserting the elements one by one
    //mymap.insert(make_pair(10, "queen"));


    // begin() returns to the first value of multimap.



    bool comp(pair<int,string> i,pair<int,string> j){ //compare pairs by string size
return i.first<j.first;
}

ofstream myfile;


int main (){


     myfile.open ("write.txt");


    int T;
    int count = 0;


    scanf("%d",&T);

    while(T--){

        multimap<int, string, greater <int> > mymap;

        char url[500];
        int rank;


        for(int i = 0 ; i < 10 ; i++){


            scanf("%s %d",url,&rank);

            mymap.insert(make_pair(rank, string(url) ));


        }





         int maxVal=max_element(mymap.begin(), mymap.end(),comp)->first;

         //cout << maxStringSize << endl;

         multimap<int,string> :: iterator it;

         cout << "Case #"<<++count<<":" << endl;


        myfile << "Case #"<< count <<":" << endl;


        for (it=mymap.begin() ; it!=mymap.end() ; it++){

            if((*it).first == maxVal){
                  cout <<  (*it).second  << endl;

                myfile << (*it).second << endl;

            }

        }



    }



    return 0;

}
