import java.lang.*;
import java.io.*;
import java.util.Scanner;

class ReadString implements Runnable{
	public void run(){
		String s = "";
		Scanner sc = new Scanner(System.in);
		try {
			s = sc.nextLine();
		}
		catch(Exception e){}
	}
}

class P3{

	public static void main(String k[]){

		Thread t1 = new Thread(new ReadString());
		Thread t2 = new Thread(new ReadString());
		Integer counter1 = 0;
		Integer counter2 = 0;
		System.out.println("Enter two strings : ");
		t1.start();
		t2.start();
		while(t1.isAlive() || t2.isAlive()){
			if(t1.isAlive()){
				++counter1;
			}
			if(t2.isAlive()){
				++counter2;
			}
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException e){}  
		}
		System.out.println("Difference : " + (counter1 - counter2));
	}
}