import java.util.Scanner;

public class A { //A - Vasya and Coins
    static Scanner sc = new Scanner(System.in);
    public static void solve(){
        int a = sc.nextInt();
        int b = sc.nextInt();
        if (a < 1) System.out.println(1);
        else System.out.println(a+b*2+1);
    }
    public static void main(String[] args) {
        int T;
		T = sc.nextInt();
        while(T-->0) solve();
        sc.close();
    }
}