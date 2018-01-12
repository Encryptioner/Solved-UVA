
package Product_10106_uva;

import java.math.BigInteger;//Accepted
import java.util.Scanner;

public class Main {
public static void main(String[] arg){
	
Scanner input = new Scanner(System.in);
while(input.hasNext())
{
	BigInteger A = input.nextBigInteger();
	BigInteger B = input.nextBigInteger();        
        System.out.println( A.multiply(B));
}


}
}
