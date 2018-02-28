class kapil{

	public static void main(String k[]){
		g x = new g();
		Thread t = new Thread(x);
		t.start();
		while(t.isAlive()){
			System.out.println("A");
		}
		System.out.println("ram");
	}
}