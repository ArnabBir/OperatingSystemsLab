class g_dash implements Runnable{
	
	int k;
	public void run(){
		int i;
		for(i = 1; i <= k; ++i){
			System.out.println(i);
			try{
				Thread.sleep(500);
			}
			catch(Exception e){}
		}
	}
}
