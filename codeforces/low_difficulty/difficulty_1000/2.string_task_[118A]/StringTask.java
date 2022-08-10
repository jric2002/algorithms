/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class StringTask {
  public static void main(String[] args) throws IOException {
    Character[] vowels = new Character[]{'a', 'o', 'y', 'e', 'u', 'i'};
    String s, o;
    Boolean is_vowel;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    s = input.readLine();
    o = "";
    for (Short i = 0; i < s.length(); i++) {
      is_vowel = false;
      for (char v : vowels) {
        if (v == Character.toLowerCase(s.charAt(i))) {
          is_vowel = true;
          break;
        }
      }
      if (!is_vowel) {
        o += "." + Character.toLowerCase(s.charAt(i));
      }
    }
    System.out.println(o);
  }
}