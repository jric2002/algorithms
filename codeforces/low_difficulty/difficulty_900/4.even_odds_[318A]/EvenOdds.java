/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class EvenOdds {
  public static void main(String[] args) throws IOException {
    Double n, k, temp, number;
    String[] values;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    values = (input.readLine().split(" "));
    n = Double.valueOf(values[0]);
    k = Double.valueOf(values[1]);
    temp = ((n % 2) == 0) ? (n / 2) : ((n + 1) / 2);
    number = (k <= temp) ? ((2 * k) - 1) : (2 * (k - temp));
    System.out.print(String.format("%.0f", number));
  }
}