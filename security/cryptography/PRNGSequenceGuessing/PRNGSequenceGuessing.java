
/*
    SOLVED: 12/29/2016

    Java gross! :( too verbose for my liking
*/

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Random rnd = new Random();
        Scanner scan = new Scanner(System.in);
        long st, en;
        int[] arr = new int[10];
        int iter=scan.nextInt();
        boolean fnd;
        
        for(int i=0; i<iter; i++){
            st=scan.nextLong();
            en=scan.nextLong();
            
            for(int j=0; j<10; j++)
                arr[j]=scan.nextInt();
            
            for(; st<=en; st++){
                rnd.setSeed(st);
                fnd=true;
                
                for(int k=0; k<10; k++){
                    if(rnd.nextInt(1000)!=arr[k]){
                        fnd=false;
                        break;
                    }
                }
                if(fnd)
                    break;
            }
            
            System.out.print(st);
            for(int j=0; j<10; j++)
                System.out.printf(" %d", rnd.nextInt(1000));
            System.out.println("");
        }
    }
}