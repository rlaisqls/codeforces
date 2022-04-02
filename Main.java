import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str =  br.readLine();
        char[] word = str.toCharArray();
        int[] cnt = new int[26];
        boolean flag = false;
        int m = 0;
        for(int i = 0; i < str.length(); i++){
            if('a' <= word[i] && word[i] <= 'z'){
                int tmp = word[i]-'a';
                cnt[tmp]++;
            }else if('A' <= word[i] && word[i] <= 'Z'){
                int tmp = word[i]-'A';
                cnt[tmp]++;
            }
        }
        for(int i=1; i <  26; i++){
            if(cnt[m] < cnt[i]){
                m = i;
                flag = false;
            }else if(cnt[m] == cnt[i]) flag = true;
        }
        if(flag) System.out.println("?");
        else System.out.println((char)(m+'A'));
    }
}
