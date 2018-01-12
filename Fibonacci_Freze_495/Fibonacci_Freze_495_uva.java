
package Fibonacci_Freze_495;

import java.util.Scanner;
import java.math.BigInteger;

public class Fibonacci_Freze_495_uva {
    public static void main(String[] args) {
        
        Scanner input=new Scanner(System.in);
        int i,n;
        BigInteger[] array;
        array = new BigInteger[5001];
        array[0]=BigInteger.valueOf(0);
        array[1]=array[2]=BigInteger.valueOf(1);
        
        for(i=3;i<=5000;i++)
        {
            array[i]=array[i-1].add(array[i-2]);
        }
        
        while(1==1)
        {
            n=input.nextInt();
            System.out.println("The Fibonacci number for "+n+" is "+array[n]);
        }
    }
}
