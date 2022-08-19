/* Author: José Rodolfo (jric2002) */
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;
import java.util.Comparator;
public class Dragons {
  public static void main(String[] args) throws IOException {
    Integer s, n;
    Integer[][] d;
    Boolean status;
    String[] v = new String[2];
    String[] dv = new String[2];
    BufferedReader input_v = new BufferedReader(new InputStreamReader(System.in));
    v = (input_v.readLine()).split(" ");
    s = Integer.valueOf(v[0]);
    n = Integer.valueOf(v[1]);
    d = new Integer[n][2];
    status = true;
    BufferedReader input_dv = new BufferedReader(new InputStreamReader(System.in));
    for (int i = 0; i < n; i++) {
      dv = (input_dv.readLine()).split(" ");
      d[i][0] = Integer.valueOf(dv[0]);
      d[i][1] = Integer.valueOf(dv[1]);
    }
    Arrays.sort(d, new Comparator<Integer[]>() {
      @Override
      public int compare(Integer[] a, Integer[] b) {
        return a[0].compareTo(b[0]);
      }
    });
    for (Integer[] e : d) {
      if (s <= e[0]) {
        status = false;
        break;
      }
      else {
        s += e[1];
      }
    }
    System.out.println((status) ? "YES" : "NO");
  }
}