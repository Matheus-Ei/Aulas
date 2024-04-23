package Java.PDF5;
import java.util.Arrays;

public class fill {
    public static void main(String[] args) {
        char nota[] = new char[10];
        Arrays.fill(nota, 'w');

        for(int i = 0; i<nota.length; i++) {
            System.out.println(nota[i]);
        }
    }
}


