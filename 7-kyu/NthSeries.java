import java.lang.String;
public class NthSeries {
  public static String seriesSum(int n) {
    float sum = 0.00f;
    int i ; 
    for(i = 1;i <= n; i++){
      sum += 1.00f / (1 + (i - 1) * 3); 
    }   
    return String.format("%.2f",sum);
  }
}

