/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
public class CapsLock {
  public static void main(String[] args) {
    String w, nw;
    int size_w, i;
    boolean s;
    Scanner input = new Scanner(System.in);
    w = input.next();
    size_w = w.length();
    s = true;
    nw = (Character.isLowerCase(w.charAt(0))) ? Character.toString(Character.toUpperCase(w.charAt(0))) : Character.toString(Character.toLowerCase(w.charAt(0)));
    i = 1;
    while (i < size_w) {
      if (!(Character.isUpperCase(w.charAt(i)))) {
        s = false;
        break;
      }
      nw = nw + Character.toString(Character.toLowerCase(w.charAt(i)));
      i++;
    }
    System.out.println((s) ? nw : w);
  }
}