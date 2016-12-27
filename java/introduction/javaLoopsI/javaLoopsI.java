
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaLoopsI{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int m = 0;

		scan.close();
		for(int i=1; i<=10; i++){
			m+=n;
			System.out.printf("%d x %d = %d\n", n, i, m);
		}
	}

}