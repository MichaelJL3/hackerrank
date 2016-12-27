
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaStdinAndStdoutII{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);

		String i = scan.next();
		double d = scan.nextDouble();
		String s = scan.nextLine();
		s = scan.nextLine();

		scan.close();
		System.out.printf("String: %s\nDouble: %s\nInt: %s\n", s, Double.toString(d), i);
	}

}