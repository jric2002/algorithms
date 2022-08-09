/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.lang.Math;
public class TheatreSquare {
  public static void main(String[] args) throws IOException {
    Integer n, m, a;
    Double r;
    String[] values;
    BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
    values = (input.readLine()).split(" ");
    n = Integer.valueOf(values[0]);
    m = Integer.valueOf(values[1]);
    a = Integer.valueOf(values[2]);
    r = Math.ceil(n / a.doubleValue()) * Math.ceil(m / a.doubleValue());
    System.out.format("%.0f", r);
  }
}