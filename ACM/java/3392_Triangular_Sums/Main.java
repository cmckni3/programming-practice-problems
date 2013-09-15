import java.util.*;
public class Main {

  /**
    * @param args
    */
  public static void main(String[] args) {
    // TODO Auto-generated method stub
    Scanner in = new Scanner(System.in);
    int cases = in.nextInt(), counter = 0, n, sum = 0;
    while (counter < cases)
    {
      n = in.nextInt();
      for (int k = 1; k <= n; k++)
      {
        sum += k*triangNum(k+1);
        //System.out.println("current sum = " + sum + " at " + k + "th iteration and " + triangNum(k+1) + " is triangNum");
      }
      System.out.println((counter+1) + " " + n + " " + sum);
      sum = 0;
      counter++;
    }
  }
  public static int triangNum(int k)
  {
    if (k == 1)
      return 1;
    else
    {
      return k+triangNum(k-1);
    }
  }

}
