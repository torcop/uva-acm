#include <bits/stdc++.h>

using namespace std;

ofstream myfile;


int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid+1, r, x);
   }

   // We reach here when element is not
   // present in array
   return -1;
}


int main ()
{


myfile.open ("write.txt");

int n,q,e;

int k,count = 0 ;

int numb = 0 ;

vector<int> v;

while(   scanf("%d %d",&n,&q) == 2 ){


    v.clear();

    if( n == 0 && q == 0 )
        break;

    while(n--){

        scanf("%d",&e);
        v.push_back(e);

    }
      std::sort (v.begin(), v.end());



      cout << "CASE# " << ++numb << ":"<<endl;

      myfile << "CASE# " << numb << ":"<<endl;

    while(q--){

        scanf("%d",&e);

         std::vector<int>::iterator low,up;
        low=std::lower_bound (v.begin(), v.end(), e); //

         if( low != v.end() && *low == e){
            cout << e << " found at " << (low- v.begin()) +1 <<endl;

            myfile << e << " found at " << (low- v.begin()) +1<<endl;

         }

         else{

            cout << e << " not found" << endl;

            myfile << e << " not found" << endl;
         }


    }

}


myfile.close();



return 0;
}






