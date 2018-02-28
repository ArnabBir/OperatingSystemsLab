class g_dash implements Runnable{
	
	int k;
	public void run(){
		int i;
		for(i = 1; i <= k; ++i){
			Systems.out.println(i);
			try{
				Thread.sleep(1000);
			}
			catch(Exception e){}
		}
	}
}