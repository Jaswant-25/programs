import java.util.*;

public class FlamesCalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the boy name: ");
        String b = sc.nextLine();
        System.out.print("Enter the girl name: ");
        String g = sc.nextLine();

        char[] b1 = b.toCharArray();
        char[] g1 = g.toCharArray();

        int b_length = b.length();
        int g_length = g.length();

        for (int i = 0; i < b_length; i++) {
            for (int j = 0; j < g_length; j++) {
                if (b1[i] == g1[j]) {
                    b1[i] = ' ';
                    g1[j] = ' ';
                    break;
                }
            }
        }
        
        int b_rem = 0;
        int g_rem = 0;
        for (char c : b1) {
            if (c != ' ')
                b_rem++;
        }
        for (char d : g1) {
            if (d != ' ')
                g_rem++;
        }
        
        int total = b_rem + g_rem;
        System.out.print(total);
    }
}
