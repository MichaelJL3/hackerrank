
/*
	SOLVED: 12/26/2016

	Most of the code is non modifiable in the problem
	only the one commented line was actually written
*/

import java.util.*;
import java.security.*;

public class Solution {
	public static void main(String[] args) {
		try {
		    Scanner in = new Scanner(System.in);
		    int n = in .nextInt();
		    in.close();

		    //Only Written Line
		    String s = Integer.toString(n);
   
		    if (n == Integer.parseInt(s)) {
		    	System.out.println("Good job");
		    } else {
		    	System.out.println("Wrong answer.");
		    }
	  	} catch (DoNotTerminate.ExitTrappedException e) {
	   		System.out.println("Unsuccessful Termination!!");
	  	}
	}
}