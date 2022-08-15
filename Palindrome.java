import java.io.*;
import java.util.*;
import java.lang.*;

public class Main
{
  public static void main (String[]args)
  {
    //Palindrome Check using StringBuilder class 
    
    Scanner sc = new Scanner (System.in);
    String str = sc.next ();
    StringBuilder sb = new StringBuilder (str);
    
    sb.reverse ();

    String rev = sb.toString ();
    if (str.equals (rev))
      {
	System.out.println ("Yes");
      }
    else
      {
	System.out.println ("No");
      }
  }
}
