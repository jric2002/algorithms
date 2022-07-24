/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
public class Football {
  public static void main(String[] args) {
    String p, sub_p;
    int size_p;
    boolean dangerous;
    Scanner input = new Scanner(System.in);
    p = input.next();
    size_p = p.length();
    dangerous = false;
    if (size_p >= 7) {
      for (int i = 0; i < (size_p - 7 + 1); i++) {
        sub_p = p.substring(i, i + 7);
        if (sub_p.equals("0000000") || sub_p.equals("1111111")) {
          dangerous = true;
          break;
        }
      }
    }
    System.out.println((dangerous) ? "YES" : "NO");
  }
}