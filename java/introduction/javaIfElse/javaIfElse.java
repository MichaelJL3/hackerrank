
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaIfElse{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);

		int input = scan.nextInt();
		scan.close();

		if(input%2==1){
			System.out.println("Weird");
		}else if(input>20){
			System.out.println("Not Weird");
		}else if(input>5){
			System.out.println("Weird");
		}else{
			System.out.println("Not Weird");
		}
	}

}