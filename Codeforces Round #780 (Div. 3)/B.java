import java.util.Scanner;

public class B { //B - Vlad and Candies
    static Scanner sc = new Scanner(System.in);
    static int[] a;
    public static void solve(){
        int n = sc.nextInt();
        int m1 = 0;
        int m2 = 0;
        a = new int [n];
        for(int i = 0;i < n; i++) a[i] = sc.nextInt();
        for(int i = 0;i < n; i++){
            if(m1 <= a[i]){
                m2 = m1;
                m1 = a[i];
            }else if(m2<a[i]) m2 = a[i];
        }
        if(m1-m2>1) System.out.println("NO");
        else System.out.println("YES");
    }
    public static void main(String[] args) {
        int T;
        T = sc.nextInt();
        while(T-->0) solve();
        sc.close();
    }
}
