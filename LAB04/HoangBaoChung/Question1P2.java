package UnitTest;

public class Question1P2 {
	public int USCLN(int a, int b){
        while(a!= b){
        	if(a>b) a= a-b; 
               else b= b-a;
       }
       return (a);
	}
	
	public int BSCNN(int a,int b){
	    return (a*b)/USCLN(a,b);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
	}

}

