/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;
public class Expression {
  public static void main(String[] args) {
    Integer a, b, c, max;
    Integer number_expressions = 6;
    Integer[] expressions = new Integer[number_expressions];
    Scanner input = new Scanner(System.in);
    a = input.nextInt();
    b = input.nextInt();
    c = input.nextInt();
    expressions[0] = a + b + c;
    expressions[1] = a + b * c;
    expressions[2] = (a + b) * c;
    expressions[3] = a * b + c;
    expressions[4] = a * (b + c);
    expressions[5] = a * b * c;
    max = Collections.max(Arrays.asList(expressions));
    System.out.println(max);
  }
}