/* Author: José Rodolfo (jric2002) */
import java.util.Scanner;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
public class YoungPhysicist {
  public static void main(String[] args) throws IOException{
    Short n;
    Short x, y, z;
    String[] f;
    Scanner input_n = new Scanner(System.in);
    n = input_n.nextShort();
    x = y = z = 0;
    BufferedReader input_f = new BufferedReader(new InputStreamReader(System.in));
    while (n > 0) {
      f = (input_f.readLine()).split(" ");
      x = (short)(x + Short.valueOf(f[0]));
      y = (short)(y + Short.valueOf(f[1]));
      z = (short)(z + Short.valueOf(f[2]));
      n = (short)(n - 1);
    }
    if (x == 0 && y == 0 && z == 0) {
      System.out.println("YES");
    }
    else {
      System.out.println("NO");
    }
  }
}