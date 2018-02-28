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