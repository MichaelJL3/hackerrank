
/*
	SOLVED: 12/30/2016

	will not compile:
	class only solution
*/

class MyCalculator implements AdvancedArithmetic{
    public int divisor_sum(int n){
        int bound=(int)Math.sqrt(n);
        int sum=0;
        if(n==1)
            return n;
        for(int i=1; i<=bound; i++){
            if(n%i==0){
                sum+=i+(n/i);
            }
        }
        return sum;
    }
}