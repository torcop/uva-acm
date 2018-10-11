
#include <bits/stdc++.h>

typedef  long long ull ;



using namespace std;


ofstream myfile;


//FILE *fp;


ull factorial(ull n){

  if(n == 0 || n == 1)
        return 1;
  return n * factorial(n-1);
}


int main ()
{


myfile.open ("write.txt");

//fp = fopen("write.txt", "w");

ull n,b;

map<ull, ull> mp;


while( scanf("%lld", &n) == 1){


    if( n < 0 ){

        if( n %2 == 0) {

            cout << "Underflow!" << endl;

            myfile << "Underflow!" << endl;

        } else{

             cout << "Overflow!" << endl;

             myfile << "Overflow!" << endl;
        }

    } else{


        if( n >=8 && n <=13 ){

             cout << factorial(n) << endl;

             myfile << factorial(n) << endl;
        }

        else if( n >= 0 && n <= 7 ){

            cout << "Underflow!" << endl;

            myfile << "Underflow!" << endl;
        }

        else
        {
            cout << "Overflow!" << endl;

            myfile << "Overflow!" << endl;



        }
    }





    mp.clear();
}




myfile.close();

//fclose(fp);


return 0;
}




