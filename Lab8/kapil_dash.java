import java.io.*;

class kapil_dash{

	public static void main(String [] k) throws Exception{

		g_dash x = new g_dash();
		Thread t = new Thread(x);
		g_dash y = new g_dash();
		Thread u = new Thread(y);

		x.k = 15;
		t.start();
		String s;
		DataInputStream z;
		z = new DataInputStream(System.in);
		s = z.readLine();
		y.k = Integer.parseInt(s);
		u.start();
		t.join();
		System.out.println("mohan");
		
	}
}
