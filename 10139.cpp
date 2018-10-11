
#include <bits/stdc++.h>

typedef unsigned long long ull ;



using namespace std;


ofstream myfile;


//FILE *fp;


void primeFactors(ull n, map<ull,ull>&mp)
{
    mp[2]=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);

        mp[2]++;
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (ull i = 3; i <= sqrt(n); i = i+2)
    {
        mp[i] = 0;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            //printf("%d ", i);

            mp[i]++;
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        mp[n]++;
        //printf ("%d ", n);
}

ull get_powers(ull n, ull p)
{
    ull res = 0;
    for (ull power = p ; power <= n ; power *= p)
        res += n/power;
    return res;
}


int main ()
{


myfile.open ("write.txt");

//fp = fopen("write.txt", "w");

ull n,b;

map<ull, ull> mp;


while( scanf("%llu %llu", &n,&b) == 2){

//    for(int i = 2 ; i<=b;i++ ){
//
//        mp[i] = 0;
//        primeFactors(i,mp);
//
//    }

    //cout << n << "! =";

    //myfile << n << "! =";


    bool result = true;

    int n1 = n;

    if (n == 0)
        n1 = 1;

    if( b != 0 ){


          primeFactors(b,mp);

        for (auto i = mp.begin(); i != mp.end(); i++) {

            if( i->second > 0){
                //std::cout << i->first  << " " << i->second << endl;
                //myfile << " " << i->second;

             ull x = get_powers(n1,i->first);

             ull y = i->second;

             //cout << n << " :: " << i->first << " :: " << x << " :: " << y << endl;

             if( x < i->second )
                result = false;
            }
        }


    }




    if( result ){

           cout << b << " divides " << n << "!" << endl;

           myfile << b << " divides " << n << "!" << endl;

    } else{

        cout << b << " does not divide " << n << "!" << endl;

        myfile << b << " does not divide " << n << "!" << endl;

    }



    //cout << endl;

    //myfile << endl;

    //cout << power(b,p,m) << endl;

    //myfile << power(b,p,m) << endl;

    //cout << n << endl;


    mp.clear();
}




myfile.close();

//fclose(fp);


return 0;
}




