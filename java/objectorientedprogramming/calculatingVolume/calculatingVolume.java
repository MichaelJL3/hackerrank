
/*
	SOLVED: 12/30/2016

	will not compile:
	class only solution
	some stuff looks weird and it was just necessary
	for the question so just deal with the useless
	display class
*/

class Display{
    public void display(double volume){
        System.out.printf("%.3f\n", volume);
    }
}

class Calculate{
    private final static Calculate Instance = new Calculate();
    private Scanner scan=new Scanner(System.in);
    Display output=new Display();
               
    public int get_int_val() throws IOException{
        int val=scan.nextInt();
        if(val<1){
            throw new NumberFormatException("All the values must be positive");  
        }
        return val;
    }
    
    public double get_double_val() throws IOException{
        double val=scan.nextDouble();
        if(val<1){
            throw new NumberFormatException("All the values must be positive");   
        }
        return val;
    }
    
    public int get_volume(int l, int  b, int h){
        return l*b*h;
    }
    
    public double get_volume(double r, double h){
        return Math.PI*h*r*r;
    }
    
    public int get_volume(int a){
        return a*a*a;
    }
    
    public double get_volume(double r){
        return (Math.PI*r*r*r*2)/3;
    }
    
    public static Calculate do_calc(){
        return Instance;
    }
}