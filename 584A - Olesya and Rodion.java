import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

public class Test {
	static BigInteger sqrt(BigInteger n)
	{
		Double d=Math.sqrt(n.doubleValue());
		n=BigInteger.valueOf(d.longValue());
		return n;
	}

	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		BigInteger k = new BigInteger(1+"");
		BigInteger sum = new BigInteger(0+"");
		BigInteger p = new BigInteger(10+"");
		long x = 0;
		int t, a;
	
			a = in.nextInt();
			t = in.nextInt();
			a--;
			p = p.pow(a);
			if(a==0 && t== 10){
				System.out.println("-1");
			}
			else {
				
			for(int i=1; ; i++){
				if(p.mod(BigInteger.valueOf(t)).compareTo(sum)==0){
					System.out.println(p);
					x=1;
					break;
				}
				p = p.add(k);
			}
			}
			
		in.close();
	}

}
