package Java.PDF3;
public class operadorbinario {
    public static void main(String[] args) {
        int x = 13;
        int r = 0;
        String b = "";

        System.out.println("x:  " +x); //Printa o X
        b = Integer.toBinaryString (x); // Transforma o b em Binario
        System.out.println("b: " +b); // Printa o b
        System.out.println("Conferindo: " + Integer.parseInt (b, 2)); // Printa em Binario
        System.out.println("--------");

        //operador shift
        r = x >> 1; // Define que o r é igual a 
        System.out.println("r: " + r); //r: 6
        b = Integer.toBinaryString(r);
        System.out.println("b: " + b); //b:110
        System.out.println("Conferindo: " + Integer.parseInt (b, 2));

        System.out.println("--------");
        r = x << 1;
        System.out.println("r: " + r); //r: 26
        b = Integer.toBinaryString(r);
        System.out.println("b: " +b); //r: 11010
        System.out.println("Conferindo: " + Integer.parseInt(b, 2));
    }
}


