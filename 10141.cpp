#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <cmath>
using namespace std;

typedef long long               ll;
typedef long double             ld;
typedef vector<int>             vi;
typedef vector<vi>              vvi;
typedef pair<int, int>          pii;
typedef vector<pii>             vii; // vector of integer pairs
typedef set<int>                si;
typedef map<string, int>        msi;

#define VAR(a,b)        __typeof(b) a=(b)
#define REP(i,n)        for(int i=0;i<(n);++i)     // 0 to n
#define FOR(i,a,b)      for(VAR(i,a);i<=(b);++i)  // a to b, a < b
#define FORD(i,a,b)     for(VAR(i,a);i>=(b);--i)  // a to b, a > b
#define FORE(a,b)       for(VAR(a,(b).begin());a!=(b).end();++a) // for each, e.g. FORE(iter, vect) cout << *iter << endl;
#define SIZE(a)         ((int)((a).size())) // e.g. for (int i = 0; i < SIZE(vect); ++i)
#define ALL(v)          (v).begin(),(v).end() // e.g. sort(ALL(vect))
#define FILL(x,a)       memset(x,a,sizeof(x))
#define CLR(x)          memset(x,0,sizeof(x))
#define VE              vector<int>
#define SZ              size()
#define SZ(v)           ((int)(v).size())
#define PB              push_back
#define MP              make_pair
#define FI              first
#define SE              second
#define TRsi(c,it)      for(si::iterator it=(c).begin();it!=(c).end();it++) // cout << " " << *it;
#define TRvii(c,it)     for(vii::iterator it=(c).begin();it!=(c).end();it++) // cout << " " << *it;
#define TRmsi(c,it)     for(msi::iterator it=(c).begin();it!=(c).end();it++)
#define INF             2000000000 // 2 billion
#define SQ(x)           ((x)*(x))
#define getLastDigit(i) i%10
#define remLastDigit(i) i/10
//#define char2int(c)     c-0
#define char2idx(c)     c-'a'

const double PI=acos(-1.0); //NOTES: PI
const double EPS=1e-11; //NOTES: EPS

// Translator
bool isUpper(char c){return c>='A' && c<='Z';} //NOTES: isUpper(
bool isLower(char c){return c>='a' && c<='z';} //NOTES: isLower(
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';} //NOTES: isLetter(
bool isDigit(char c){return c>='0' && c<='9';} //NOTES: isDigit(
char toLower(char c){return (isUpper(c))?(c+32):c;} //NOTES: toLower(
char toUpper(char c){return (isLower(c))?(c-32):c;} //NOTES: toUpper(
//int str2int(string s){int r=0;istringstream sin(s);sin>>r;return r;} //NOTES: str2int(
int char2int(char c){return (int)c;} //NOTES: char2int(

// Numeric functions
bool isPowOf2(int i){return (i & i-1) == 0;} //NOTES: isPowOf2

/* solution start */




int main ()
{


//
// FILE *f = fopen("file.txt", "w");
// if (f == NULL)
// {
//     printf("Error opening file!\n");
//
//     return -1;
//     //exit(1);
// }


int count = 0;
int req , prop,req_met=0;

float price =0;


//char* prop_name;

map<int,float> props_cont;

map<int,string> props_name;


map<int,string> :: iterator itr;



while(scanf("%d %d", &req, &prop ) , ( req || prop  ) ){


        if( count){
            cout << endl;
            //fprintf(f,"\n");
        }


    int prop_temp = prop;

    string reqs;
     cin.ignore();

    while( req --){

        getline( cin , reqs);

    }





    string prop_name[prop];
   while(prop--){


     getline( cin , prop_name[prop] );

     //fprintf(f,"%s\n",prop_name[prop].c_str());

    scanf("%f %d",&price,&req_met);

    //fprintf(f,"%f %d\n",price,req_met);



    if( props_cont.find( req_met ) == props_cont.end() ){

         props_cont.insert( make_pair( req_met,price) );

          props_name.insert( make_pair( req_met , prop_name[prop]) );

    }else{

         float temp_val = props_cont.find(req_met)->second;

         //fprintf(f,"%f %f\n",price,temp_val);

         if( temp_val > price ){

                 props_cont.erase(req_met);

                 props_cont.insert( make_pair( req_met,price) );

                 props_name.erase(req_met);

                 props_name.insert( make_pair( req_met , prop_name[prop]) );
         }

    }


     cin.ignore();
    while(req_met--){
         getline( cin , reqs);
    }



   }


//        for( itr = props_name.begin() ; itr != props_name.end() ; ++itr ){
//         fprintf(f,"%d %s\n",itr->first,itr->second.c_str());
//         //fprintf(f,"%s\n",props_name.find(props_cont.rbegin()->first)->second.c_str());
//       }



     cout << "RFP #" << ++count << endl;
     cout << props_name.find(props_cont.rbegin()->first)->second << endl;

//
//     fprintf(f,"RFP #%d\n",count);
//     fprintf(f,"%s\n",props_name.find(props_cont.rbegin()->first)->second.c_str());
//


    props_cont.clear();
    props_name.clear();


}
//fclose(f);

 return 0;

}

