/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.util.Arrays;
public class Twins {
  public static void main(String[] args) {
    short n, min_coins, i;
    int s1, s2;
    short[] coins;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextShort();
    coins = new short[n];
    Scanner input_coins = new Scanner(System.in);
    i = 0;
    for (String coin : (input_coins.nextLine()).split(" ")) {
      coins[i] = Short.valueOf(coin);
      i++;
    }
    Arrays.sort(coins);
    i = (short)(n - 1);
    do {
      s1 = s2 = 0;
      for (short j = (short)(n - 1); j > i; j--) {
        s1 += coins[j];
      }
      for (short j = (short)(i - 1); j >= 0; j--) {
        s2 += coins[j];
      }
      if (s1 > s2) {
        break;
      }
      i--;
    } while (i >= 0);
    min_coins = (short)(n - i);
    System.out.print(min_coins);
  }
}