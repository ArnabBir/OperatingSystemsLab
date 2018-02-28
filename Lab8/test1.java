
class PrintUnit implements Runnable{
	public void run(){
		int counter = 0;
		while(true){
			System.out.println(++counter);
			try{
				Thread.sleep(1000);
			}
			catch(InterruptedException e){}
		}
	}
}

class PrintHundred implements Runnable{
	
	public void run(){
		int counter = 0;
		while(true){
			counter += 100;
			System.out.println(counter);
			try{
				Thread.sleep(1500);
			}
			catch(InterruptedException e){}
		}
	}
}

class test1{

	public static void main(String k[]){
		Thread t1 = new Thread(new PrintUnit());
		Thread t2 = new Thread(new PrintHundred());
		t1.start();
		t2.start();
	}
}