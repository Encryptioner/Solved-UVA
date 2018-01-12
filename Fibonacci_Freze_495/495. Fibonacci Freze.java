
package Fibonacci_Freze_495;

import java.math.BigInteger;//Accepted
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        int i;
        BigInteger[] array;
        array = new BigInteger[5001];
        array[0]=BigInteger.valueOf(0);
        array[1]=array[2]=BigInteger.valueOf(1);
        
        for(i=3;i<=5000;i++)
        {
            array[i]=array[i-1].add(array[i-2]);
        }
        
        Scanner input=new Scanner(System.in);
        
        while(input.hasNext())
        {
            int n=input.nextInt();
            System.out.println("The Fibonacci number for "+n+" is "+array[n]);
        }
    }
}

