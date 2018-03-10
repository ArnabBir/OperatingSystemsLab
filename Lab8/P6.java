import java.util.Scanner;

class PrintInt implements Runnable{
	
	int n;
	
	public void run(){
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
	}
	
	public int getn(){
		return n;
	}
}

class P6{
	
	public static void main(String [] args){
		
		PrintInt pi = new PrintInt();
		int counter = 1;
				
		while(true){
	
			Thread t = new Thread(pi);
			t.start();
		
			while(t.isAlive()){
				System.out.println(counter++);
				try{
					Thread.sleep(1000);
				}
				catch(Exception e){}
			}
			
			counter = pi.getn();
		}
	}
}
