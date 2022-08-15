/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class ChatRoom {
  public static void main(String[] args) throws IOException {
    Character[] word = new Character[]{'h', 'e', 'l', 'l', 'o'};
    String s;
    Integer size_s, size_w, p;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    s = input.readLine();
    size_s = s.length();
    size_w = word.length;
    p = 0;
    for (Integer i = 0; i < size_s; i++) {
      if (p < size_w) {
        if (s.charAt(i) == word[p]) {
          p++;
        }
      }
    }
    System.out.println((p == size_w) ? "YES" : "NO");
  }
}