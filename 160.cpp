
#include <bits/stdc++.h>

typedef unsigned long long ull ;



using namespace std;


//ofstream myfile;


FILE *fp;


void primeFactors(int n, map<int,int>&mp)
{
    //mp[2]=0;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%d ", 2);

        mp[2]++;
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        //mp[i] = 0;
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


int main ()
{


//myfile.open ("write.txt");

fp = fopen("write.txt", "w");

int n;

map<int, int> mp;


while( scanf("%d", &n) == 1 && n){

    for(int i = 2 ; i<=n;i++ ){

        mp[i] = 0;
        primeFactors(i,mp);

    }

    //cout << n << "! =";

    //myfile << n << "! =";

    printf("%3d! =", n);

    fprintf(fp, "%3d! =",n);

    int count = 0;

    for (auto i = mp.begin(); i != mp.end(); i++) {

        if( i->second > 0){
            //std::cout << " " << i->second;
            //myfile << " " << i->second;

            count++;
            if(count > 15)	{
                count -= 15;
                printf("\n      ");
                fprintf(fp, "\n      ");


            }
                printf("%3d", i->second);
                fprintf(fp, "%3d",i->second);

        }
    }

    printf("\n");
    fprintf(fp, "\n");

    //cout << endl;

    //myfile << endl;

    //cout << power(b,p,m) << endl;

    //myfile << power(b,p,m) << endl;

    //cout << n << endl;


    mp.clear();
}




//myfile.close();

fclose(fp);


return 0;
}



