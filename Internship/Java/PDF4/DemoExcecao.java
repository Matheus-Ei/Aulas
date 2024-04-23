package Java.PDF4;

public class DemoExcecao {
    public static void main(String[] args) {
        int a = 0;
        try {
            a = obterDivisao(6, 0);
        } catch(ArithmeticException e) {
            System.out.println("Divisão por Zero");
        }
        System.out.println("a: " + a);
    }

    static int obterDivisao(int v1, int v2)
        throws ArithmeticException{
            int r = 0;
            r = v1/v2;
            return r;
        }
}
