
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaStdinAndStdoutI{

	public static void main(String []args){
		Scanner scanner = new Scanner(System.in);

		System.out.printf("%s\n%s\n%s\n", scanner.next(), scanner.next(), scanner.next());
		scanner.close();
	}

}