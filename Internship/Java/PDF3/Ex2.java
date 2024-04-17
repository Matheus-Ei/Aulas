public class Ex2 {
    public static void main(String[] args){
        int a = 10; int b = 20; int r = 0; // O Resultado da 0

        r = a++ + ++b; // O Resultado da 31
        r = a + b; // O Resultado da 32
        r = ++a + --b; // O Resultado da 32
    }
}
