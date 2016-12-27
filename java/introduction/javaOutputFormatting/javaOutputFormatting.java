
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaOutputFormatting{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);
		String s;
		int n;

		System.out.println("================================");
		for(int i=0; i<3; i++){
			s = scan.next();
			n = scan.nextInt();

			System.out.printf("%-15s%03d\n", s, n);
		}
		System.out.println("================================");
	}

}