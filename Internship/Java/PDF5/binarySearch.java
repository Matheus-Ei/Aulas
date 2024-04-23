package Java.PDF5;
import java.util.Arrays;

public class binarySearch {
    public static void main(String[] args) {
        char nota[] = {'C', 'E', 'A', 'D', 'B'};

        Arrays.sort(nota);
        int posicao = Arrays.binarySearch(nota, 'E');
        System.out.println(posicao);
    }
}


