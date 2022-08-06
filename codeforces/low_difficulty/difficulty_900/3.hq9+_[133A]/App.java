/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class App {
  public static void main(String[] args) throws IOException {
    Character[] kw = new Character[]{'H', 'Q', '9', '+'};
    String p;
    Short size_p, size_kw;
    Boolean output = false;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    p = input.readLine();
    size_p = (Integer.valueOf(p.length())).shortValue();
    size_kw = (Integer.valueOf(kw.length)).shortValue();
    for (Short i = 0; i < size_p && !output; i++) {
      for (Short j = 0; j < (size_kw - 1); j++) {
        if (p.charAt(i) == kw[j]) {
          output = true;
          break;
        }
      }
    }
    System.out.println((output) ? "YES" : "NO");
  }
}