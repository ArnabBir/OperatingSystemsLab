import java.lang.*;

class P1{

	public static void main(String k[]){
		g x = new g();
		Thread t = new Thread(x);
		t.start();
		while(t.isAlive()){
			System.out.println("Enter a number : ");
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException e){}  
		}
	}
}