import java.io.*;

class g implements Runnable{
	public void run(){
		int k;
		String s = "";
		DataInputStream z;
		z = new DataInputStream(System.in);
		try {
			s = z.readLine();
		}
		catch(Exception e){}
		k = Integer.parseInt(s);
		System.out.println(k*2);
	}
}