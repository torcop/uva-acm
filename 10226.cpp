#include <bits/stdc++.h>
using namespace std;



  ofstream myfile;


  void countFreq(vector<string>&a)
{
    // Insert elements and their
    // frequencies in a map
    map<string, int> hm;
    for (std::vector<string>::iterator it=a.begin(); it!=a.end(); ++it)
    hm[(*it)]++;

    // Print contents of map.
    //for (auto x : hm)

    std::cout << std::fixed;
   std::cout << std::setprecision(4);

   myfile << std::fixed;
myfile << std::setprecision(4);


for (std::map<string,int>::iterator it=hm.begin(); it!=hm.end(); ++it){
    cout << it->first << " " ;
    cout << ((it->second*100)/(double)a.size()) << endl;

    myfile << it->first << " " ;

    myfile << ((it->second*100)/(double)a.size()) << endl;
}

}

//(it->second/a.size())*100

// Driver program
int main()
{

  myfile.open ("write.txt");

    //int a[] = {1, 3, 2, 4, 2, 1};
    //int n = sizeof(a)/sizeof(a[0]);

    int n;

    string str;

    vector<string>a;


    scanf("%d",&n);

    getchar(); // clear scanf buffer

    getchar(); // clear blank line



    while( n--){

      while( getline(cin,str) ){

          if( str.length() == 0 ){


            if( a.size() > 0){

                countFreq(a);
            }



              if(n){

                cout << endl;
                myfile << endl;
              }

              if( a.size() > 0){
                      a.clear();
                    break;
                }



          }


            //cout << str << endl;

          a.push_back(str);

      }

    }





    return 0;
}
