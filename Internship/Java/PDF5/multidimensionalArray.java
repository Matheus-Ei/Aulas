package Java.PDF5;

public class multidimensionalArray {
    public static void main(String[] args) {
        int d[][] = new int[2][2];
        d[0][0] = 3;
        d[0][1] = 6;
        d[1][0] = 9;
        d[1][1] = 12;

        for(int i = 0; i<d.length; i++) {
            for(int j = 0; j<d.length; j++) {
                System.out.println(d[i][j]);
            }
        }
    }
}

