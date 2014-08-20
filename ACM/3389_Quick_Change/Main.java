import java.util.*;
public class Main {

  /**
    * @param args
    */
  public static void main(String[] args) {
    // TODO Auto-generated method stub
    Scanner in = new Scanner(System.in);
    int cases = in.nextInt(), counter = 0, counter2 = 1, pennies;
    int[] coins = new int[4];
    while (cases > counter)
    {
      pennies = in.nextInt();
      while (pennies >= 25)
      {
        pennies -= 25;
        coins[0]++;
      }
      while (pennies >= 10)
      {
        pennies -= 10;
        coins[1]++;
      }
      while (pennies >= 5)
      {
        pennies -= 5;
        coins[2]++;
      }
      coins[3] = pennies;
      System.out.println(cases + " " + coins[0] + " QUARTER(S), " + coins[1] + " DIME(S), " + coins[2] + " NICKEL(S), " + coins[3] + " PENNY(S)");
      coins = new int[4];
      counter--;
    }
  }

}
