#include <bits/stdc++.h>

using namespace std;

ofstream myfile;

unsigned long int totient (unsigned long int i)
{
	unsigned long int res; /* Result */
	unsigned long int j;

	if (i==1) return 1;

        res=i;

        /* Check for divisibility by every prime number below the square root. */
        /* Start with 2. */
        if (i%2==0)
        {
		res-=res/2;
		do i/=2; while (i%2==0) ;
        }

        /* Since this doesn't use a list of primes, check every odd number. Ideally, skip past composite numbers.*/
	for (j=3; j*j<=i; j+=2)
	{
		if (i%j==0)
		{
			res-=res/j;
			do i/=j; while (i%j==0) ;
		}
	}

        /* If i>1, then it's the last factor at this point. */
	if (i>1) res-=res/i;

        /* Return the result. */
	return res;
}

unsigned long int countDivisors(unsigned long int n)
{

    unsigned long int count = 0;
	// Note that this loop runs till square root
	for (unsigned long int i=1; i<=sqrt(n); i++)
	{
		if (n%i == 0)
		{
			// If divisors are equal, print only one
			if (n/i == i)
				//printf("%d ", i);
				count++;

			else // Otherwise print both
				//printf("%d %d ", i, n/i);
				count += 2;
		}
	}

	return count;
	//cout << count << endl;
}

int main ()
{


myfile.open ("write.txt");

unsigned long int c,l;

int k,count = 0 ;


while(   scanf("%llu",&l) == 1 ){

    if( l == 0 )
        break;

    int count = 0;

    if( l == 1)
        cout << 1 << endl;
    else
    cout <<  totient(l)  << endl;

}


myfile.close();



return 0;
}






