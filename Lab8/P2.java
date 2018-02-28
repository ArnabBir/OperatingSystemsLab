import java.lang.*;

class P2{

	public static void main(String k[]){
		CheckEvenInput x = new CheckEvenInput();
		Thread t = new Thread(x);
		int counter = 0;
		t.start();
		while(t.isAlive()){
			System.out.println(++counter);
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException e){}  
		}
	}
}