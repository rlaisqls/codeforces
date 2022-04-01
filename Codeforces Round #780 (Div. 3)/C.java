import java.util.Scanner;

public class C { //C - Get an Even String
    static Scanner sc = new Scanner(System.in);
    static int[] cnt;
    static char[] S;
    public static void solve(){
        cnt = new int [26];
        String str = sc.nextLine();
        S = str.toCharArray();
        int res = str.length();
        /*맨 처음에 Testcase 숫자를 입력하면서 nextLine scan이 한번 더 작동하는
        오류가 있었으나 그냥 T++하고 length 0인경우(잘못 입력된 경우)
        그냥 return 시켜줘서 해결. Accepted 받긴 했으나 원인 분석 필요함
        추후 수정예정*/
        if(str.length()==0) return;

        for(int i = 0; i < 26; i++) cnt[i]=0;
        for(int i = 0; i < str.length(); i++){
            int a = S[i]-'a';
            cnt[a]++;
            if(cnt[a]==2){
                res-=2;
                cnt = new int [26];
            }
        }
        System.out.println(res);
    }
    public static void main(String args[]){
        int T = sc.nextInt(); T++;
        while(T-->0) solve();
        sc.close();
    }  
}
