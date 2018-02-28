import java.io.*;

class PrintXTimes implements Runnable{
	
	public void run(){

		Integer k;
		String s = "";
		Integer count = 0;

		while(true){

			
			catch(Exception e){}
			try{
				Thread.sleep(1000);
				++count;
			}
			catch(InterruptedException e){} 
}

class P4{

	public static void main(String [] args){
		Thread t = new Thread(new PrintXTimes());
		t.start();
	}

	while(true){
			
			DataInputStream z;
			z = new DataInputStream(System.in);
			try {
				s = z.readLine();
			}
			catch(Exception e){}
			try{
				Thread.sleep(1000);
				++count;
			}
			catch(InterruptedException e){} 

			k = Integer.parseInt(s);
			if(count < 10)	System.out.println(k*2);
			else System.out.println(k*3);	
		}
		
	}

}