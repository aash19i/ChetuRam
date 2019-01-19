import java.util.*;
import java.lang.*;
class Numeric 
{
	public static void main(String[] args) 
	{
		String a;
		int c=0;
		Scanner s=new Scanner(System.in);
		a=s.nextline();
		for(int i=o;i<a.length;i++){
			if (a.charAt(i)=='0' || a.charAt(i)=='1' ||  a.charAt(i)=='2' ||  a.charAt(i)=='3' ||  a.charAt(i)=='4' ||  a.charAt(i)=='5' ||  a.charAt(i)=='6' ||  a.charAt(i)=='7' ||  a.charAt(i)=='8' ||  a.charAt(i)=='9')
			{c++;}}
			
		System.out.println(c);
	}
}
