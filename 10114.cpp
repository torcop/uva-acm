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



// FILE *f = fopen("file.txt", "w");
// if (f == NULL)
// {
//     printf("Error opening file!\n");
//
//     return -1;
//     //exit(1);
// }


int duration, depre;

float down,loan;

float orig_loan;


while( scanf("%d %f %f %d", &duration, &down, &loan,&depre) , duration > 0 ){

    float car_price = down + loan;

    orig_loan = loan;


   int counts = 0;
   int prev_month = 0, month = 0;
   float prev_rate = 0, rate = 0;

   /* 0 month calculation */

   //cout << " hiiiiii " << endl;


        scanf("%d %f",&month,&rate);
        car_price -=  car_price * rate;
        //loan -= orig_loan/duration;

        //cout << " 1**** " << depre << " :: "<< loan << " :: " << car_price << endl;

if( loan > car_price ){

        //counts++;

        //cout << " 2**** " << depre << " :: "<< loan << " :: " << car_price << endl;

    while( --depre ){

        //cout << " 2**** " << depre << " :: "<< loan << " :: " << car_price << endl;

        prev_month = month;
        prev_rate = rate;
        scanf("%d %f",&month,&rate);

        //cout << "month :: " << month << " rate:: " << rate  << endl;


        if( month - prev_month >1 ){
            FOR(i,prev_month+1,month-1){

            //for(int i = prev_month+1;i<=month-1;i++){

                 if( loan < car_price) break;

                car_price -=  car_price * prev_rate;
                loan -= orig_loan/duration;
                counts++;

//                cout << prev_month << " :: " << month << " R "<< rate<< "::PR ::" << prev_rate << endl;
                 //cout << loan << " :L: " << car_price << endl;

                 //fprintf(f,"%f :L: %f\n",loan,car_price);

//

            }

        }


        if( loan < car_price) break;

        car_price -=  car_price * rate;
        loan -= orig_loan/duration;
        counts++;

        //if(counts > 0 && loan < car_price) break;

        //cout << loan << " :W: " << car_price << endl;

        //fprintf(f,"%f :W: %f\n",loan,car_price);

    }

    while( loan > car_price ){

        car_price -=  car_price * rate;
        loan -= orig_loan/duration;
        counts++;
        //cout << loan << " :2W: " << car_price << " :: rate" << rate << " :: down " << down << endl;

        //fprintf(f,"%f :2W: %f\n",loan,car_price);

    }

}else{

     /* ignore rest month ...... coz i got decision */
     while( --depre ){

        scanf("%d %f",&month,&rate);
     }


}
    cout << counts << (counts != 1 ? " months" : " month") << endl;


}

//fclose(f);

 return 0;

}

