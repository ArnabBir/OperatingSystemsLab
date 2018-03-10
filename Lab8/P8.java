import java.util.Scanner;

class PrintU implements Runnable{
	
	public void run(){
		
		while(true){
			
			System.out.print("u");
			try{
				Thread.sleep(1000);
			}
			catch(Exception e){}
		}
	}
}

class PrintCounter implements Runnable{
	
	int k;

	public PrintCounter(int x){
		
		this.k = x;
	}
		
	public void run(){
		
		while(true){
			
			System.out.print(k++ + ",");
			try{
				Thread.sleep(1000);
			}
			catch(Exception e){}
		}
	}
}

class P8{
	
	public static void main(String [] args){
		
		PrintU pU = new PrintU();
		Thread tU = new Thread(pU);
		tU.start();
		Scanner sc = new Scanner(System.in);
		int n = 0;
		while(true){
			n = sc.nextInt();
			PrintCounter rI = new PrintCounter(n);
			Thread tRI = new Thread(rI);
			tRI.start();
		}
	}
}


