
/*
	SOLVED: 12/26/2016
*/

import java.util.Scanner;

public class javaDatatypes{

	public static void main(String []args){
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		String s;
		String ans;

		for(int i=0; i<n; i++){
			ans = "";
			s = scan.next();

			try {
        		Byte.parseByte(s);
        		ans+="* byte\n";
    		}catch (NumberFormatException e){}
    		try {
        		Short.parseShort(s);
        		ans+="* short\n";
    		}catch (NumberFormatException e){}
    		try {
        		Integer.parseInt(s);
        		ans+="* int\n";
    		}catch (NumberFormatException e){}
			try {
        		Long.parseLong(s);
        		ans+="* long\n";
    		}catch (NumberFormatException e){}

    		if(ans.length()>0)
    			System.out.printf("%s can be fitted in:\n%s", s, ans);
    		else
    			System.out.printf("%s can't be fitted anywhere.\n", s);
		}

		scan.close();
	}

}