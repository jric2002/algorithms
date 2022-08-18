/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;
public class GravityFlip {
  public static void main(String[] args) throws IOException {
    int n;
    Integer[] c;
    int i;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextInt();
    c = new Integer[n];
    BufferedReader input_a = new BufferedReader(new InputStreamReader(System.in));
    i = 0;
    for (String ai : (input_a.readLine()).split(" ")) {
      c[i] = Integer.valueOf(ai);
      i++;
    }
    Arrays.sort(c);
    for (int ai : c) {
      System.out.print(ai + " ");
    }
  }
};