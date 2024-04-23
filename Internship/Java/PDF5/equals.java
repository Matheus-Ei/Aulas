package Java.PDF5;

import java.util.Arrays;

public class equals {
    public static void main(String[] args) {
        char n1[] = {'C', 'D', 'E', 'H', 'J'};
        char n2[] = {'C', 'D', 'E', 'H', 'J'};

        if (Arrays.equals(n1, n2)) {
            System.out.println("Os Arrays São Iguais");
        } else {
            System.out.println("Os Arrays São Diferentes");
        }
    }
}


