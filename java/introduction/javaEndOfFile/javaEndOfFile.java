
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaEndOfFile{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);
		String line;
		int linenum=0;

		while(scan.hasNext()){
			line = scan.nextLine();
			System.out.printf("%d %s\n", ++linenum, line);
		}

		scan.close();
	}

}