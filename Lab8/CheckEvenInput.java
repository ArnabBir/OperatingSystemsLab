import java.io.*;

class CheckEvenInput implements Runnable{
	
	public void run(){

		int k;
		String s = "";
		
		do{
			
			DataInputStream z;
			z = new DataInputStream(System.in);
			try {
				s = z.readLine();
			}
			catch(Exception e){}
			k = Integer.parseInt(s);
		}while(k%2 != 0);
		
		System.out.println("Even Number Typed = " + k);
	}
}