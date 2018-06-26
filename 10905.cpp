#include <bits/stdc++.h>
using namespace std;


ofstream myfile;


// A comparison function which is used by sort() in printLargest()
int myCompare(string X, string Y)
{
    string XY = X.append(Y);

    string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1: 0;
}


void printLargest(vector<string>& arr)
{

    sort(arr.begin(), arr.end(), myCompare);

    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}


int main()
{

  myfile.open ("write.txt");

int n;

string s,ind;

vector<string> data;

while(scanf("%d",&n) == 1){

  getchar();

  if( n == 0 )break;

  getline(cin,s);

  stringstream ss(s);


  while( n-- ){


    ss>>ind;

    data.push_back(ind);

  }

  printLargest( data );

  cout << endl;

  data.clear();


}




    return 0;
}
