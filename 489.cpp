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
#include <cstring>
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
#define FORN(i,a,b)      for(VAR(i,a);i<(b);++i)  // a to b, a < b

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

#define NO_OF_CHARS 256


string removeDups(string& guess)
{


  char * str = new char[guess.length()+1];
  strcpy(str, guess.c_str());

  bool bin_hash[NO_OF_CHARS] = {0};
  int ip_ind = 0, res_ind = 0;
  char temp;

  /* In place removal of duplicate characters*/
  while (*(str + ip_ind))
  {
    temp = *(str + ip_ind) - '0';
    if (bin_hash[temp] == 0)
    {
        bin_hash[temp] = 1;
        *(str + res_ind) = *(str + ip_ind);
        res_ind++;
    }
    ip_ind++;
  }

  /* After above step string is stringiittg.
     Removing extra iittg after string*/
  *(str+res_ind) = '\0';

  string tempr  = string(str);

  delete [] str;

  return tempr;

}

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


int round;

string puzzle;

string guess;


while( scanf("%d", &round) , round > 0 ){


  string line;
  cin.ignore();
  getline(cin,puzzle);
  getline(cin,guess);



  guess = removeDups(guess);

   //cout << guess << endl;


  FORN(i,0,SZ(guess)){


    if( puzzle.find(guess[i]) != string::npos ){

        puzzle.erase( std::remove( puzzle.begin(), puzzle.end(), guess[i] ), puzzle.end() ) ;



    }else{

        if( line.find(guess[i]) == string::npos ){

            line += guess[i];

            //cout << "Hello !!!" <<endl;

        }

        if( !puzzle.empty() && line.size() == 7){

             cout << "Round " << round << endl;
            cout << "You lose." << endl;

//            fprintf(f,"Round %d\n",round);
//            fprintf(f,"You lose.\n");

            break;
        }
    }

    if( puzzle.empty() && line.size() != 7 ){

        cout << "Round " << round << endl;
        cout << "You win." << endl;
//         fprintf(f,"Round %d\n",round);
//            fprintf(f,"You win.\n");
        break;
    }


  }


  if( !puzzle.empty() && line.size() !=7 ){

    cout << "Round " << round << endl;
    cout << "You chickened out." << endl;
//    fprintf(f,"Round %d\n",round);
//            fprintf(f,"You chickened out.\n");
  }


}

//fclose(f);

 return 0;

}

