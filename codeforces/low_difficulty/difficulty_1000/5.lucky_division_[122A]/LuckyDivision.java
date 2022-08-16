/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
public class LuckyDivision {
  public static void main(String[] args) {
    Integer[] lucky_numbers = new Integer[]{4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    Integer n, size_ln, i;
    Boolean s;
    Scanner input = new Scanner(System.in);
    n = input.nextInt();
    s = false;
    size_ln = lucky_numbers.length;
    i = 0;
    while (i < size_ln && lucky_numbers[i] <= n) {
      if ((n % lucky_numbers[i]) == 0) {
        s = true;
        break;
      }
      i++;
    }
    System.out.println((s) ? "YES" : "NO");
  }
}