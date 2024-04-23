package Java.PDF5;

public class arrayCopy {
    public static void main(String[] args) {
        int[] a = {2, 4, 6, 8, 10};
        int[] b = {5, 10, 15, 20, 25};

        System.arraycopy(a, 0, b, 1, 3);

        for(int i = 0; i<b.length; i++) {
            System.out.println(b[i] + " ");
        }
    }
}

