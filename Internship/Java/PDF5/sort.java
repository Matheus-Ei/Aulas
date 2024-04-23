package Java.PDF5;
import java.util.Arrays;

public class sort {
    public static void main(String[] args) {
        char nota[] = {'C', 'E', 'A', 'D', 'B'};

        for (int i=0; i<nota.length; i++) {
            System.out.println(nota[i]);
        }
        Arrays.sort(nota);
        System.out.println("\n");

        for (int i=0; i<nota.length; i++) {
            System.out.println(nota[i]);
        }
    }
}


