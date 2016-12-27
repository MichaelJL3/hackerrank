
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaLoopsII{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);
		int iter = scan.nextInt();
		int a, b, c, loop;

		for(int i=0; i<iter; i++){
			a = scan.nextInt();
			b = scan.nextInt();
			loop = scan.nextInt();

			c = a + b;
			System.out.printf("%d ", c);
			for(int j=1; j<loop; j++){
				c += Math.pow(2, j)*b;
				System.out.printf("%d ", c);
			}
			System.out.println("");
		}

		scan.close();
	}

}