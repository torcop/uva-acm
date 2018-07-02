import java.math.BigInteger;
import java.util.Scanner;

class Main {


 
/* function that returns nth Fibonacci number */
	static BigInteger fib(BigInteger n)
	{
	  BigInteger[][] F = {{ BigInteger.valueOf(1) , BigInteger.valueOf(1) },{ BigInteger.valueOf(1) , BigInteger.valueOf(0) }};
	  if (n.equals( BigInteger.valueOf(0) ) )
	    return BigInteger.valueOf(0);
	  power1(F, n.subtract( BigInteger.valueOf(1) )) ;
	  return F[0][0];
	}
 
/* Optimized version of power() in method 4 */
	static void power1(BigInteger[][] F, BigInteger n)
	{
	  if( n.equals( BigInteger.valueOf(0) )  || n.equals( BigInteger.valueOf(1) ) )
	      return;
	  BigInteger[][] M = {{ BigInteger.valueOf(1) , BigInteger.valueOf(1) },{ BigInteger.valueOf(1) , BigInteger.valueOf(0) }};
	 
	  power1(F, n.divide( BigInteger.valueOf(2) ) );
	  multiply(F, F);
	 
	  if ( !(n.remainder( BigInteger.valueOf(2) )).equals(  BigInteger.valueOf( 0 ) ) )
	     multiply(F, M);
	}
	 
	static void multiply(BigInteger[][] F, BigInteger[][] M)
	{
	  BigInteger x =   ( F[0][0].multiply(M[0][0]) ).add( F[0][1].multiply(M[1][0]) );
	  BigInteger y =  ( F[0][0].multiply(M[0][1]) ).add( F[0][1].multiply(M[1][1]) );  
	  BigInteger z =  ( F[1][0].multiply(M[0][0]) ).add( F[1][1].multiply(M[1][0]) ); 
	  BigInteger w =   ( F[1][0].multiply(M[0][1]) ).add( F[1][1].multiply(M[1][1]) ); 
	 
	  F[0][0] = x;
	  F[0][1] = y;
	  F[1][0] = z;
	  F[1][1] = w;
	}

	public static void main(String[] args) {

		// BigInteger[] f = new BigInteger[5001];
		// f[0] = BigInteger.ZERO;
		// f[1] = BigInteger.ONE;
		// for (int i = 0; i <= 4998; i++)
		// 	f[i + 2] = f[i + 1].add(f[i]);

		Scanner scan = new Scanner(System.in);
		while (scan.hasNextInt()) {
			int n = scan.nextInt();
			System.out.println("The Fibonacci number for " + n + " is " + fib( BigInteger.valueOf( n ) ) );
		}
	}

}

