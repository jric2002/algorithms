/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class Kafs {
  public static void main(String[] args) throws IOException {
    Integer n, max_sg, size_sg;
    String[] a;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextInt();
    a = new String[n];
    BufferedReader input_a = new BufferedReader(new InputStreamReader(System.in));
    a = (input_a.readLine()).split(" ");
    max_sg = size_sg = 1;
    for (int i = 1; i < n; i++) {
      if (Integer.valueOf(a[i - 1]) <= Integer.valueOf(a[i])) {
        size_sg++;
      }
      else {
        if (size_sg > max_sg) {
          max_sg = size_sg;
        }
        size_sg = 1;
      }
    }
    if (size_sg > max_sg) {
      max_sg = size_sg;
    }
    System.out.println(max_sg);
  }
}