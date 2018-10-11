import java.math.BigInteger;
import java.util.Scanner;
import java.util.HashMap;
import java.io.*;
import java.lang.*;

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


	static BigInteger factorial(BigInteger n)
	{
	    BigInteger result = BigInteger.ONE;

	    while (!n.equals(BigInteger.ZERO)) {
	        result = result.multiply(n);
	        n = n.subtract(BigInteger.ONE);
	    }

    	return result;
	}

	private static final String LINE_SEPARATOR = "\r\n";

	
	static int getIdx(char ch)
    {
        return (ch - 'A');
    }

    static String format( int x ){

    	String str = new Integer( x ).toString();

    	int len = 5-str.length();

    	for(int i = 0 ; i<len;i++ ){


    		str = " " + str;
    	}

    	return str;

    }


	public static void main(String[] args) {

		FileWriter fileWriter;

		PrintWriter printWriter;

		try{

			 fileWriter = new FileWriter("write.txt");
		     printWriter = new PrintWriter(fileWriter);
		    
		

		Scanner scan = new Scanner(System.in);


		int t = scan.nextInt();
		int count = 0;

		while(t-- > 0){

			// String str = scan.nextLine();

			// String[] arr = str.split("\\s+");

			
			// BigInteger ng = new BigInteger( arr[0] ) ;

			// int expo  = Integer.parseInt( arr[1] );

			// int expo1  = Integer.parseInt( arr[0] );

			// if( expo == 0 && expo1 == 0 ) 

			// 	break;

			count++;

			int n = scan.nextInt();

			BigInteger nmg =  BigInteger.valueOf(2).pow(n-1).mod( BigInteger.valueOf(1000000007) );
							nmg = nmg.multiply( BigInteger.valueOf(n) ).mod( BigInteger.valueOf(1000000007) ); 
			//BigInteger x =  (factorial(ng)).divide( (factorial(mg)).multiply( factorial(nmg) ) );
			System.out.println( "Case #" + count+ ": "+nmg.toString() );
			printWriter.println( "Case #" + count+ ": "+nmg.toString() );


		}


		// while( scan.hasNextLine() ){


			





		// }


		printWriter.close();

		fileWriter.close();


		}catch( Exception e){


		} 
		    
	}

}



