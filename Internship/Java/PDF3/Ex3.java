public class Ex3 {
    public static void main(String[] args) {
        int a = 10;
        int b = 11;
        boolean r = false;

        r = a > b; //O Resultado da False
        r = a++ >= --b; //O Resultado da True
        a = 10;
        b = 15;
        r = (a>10) || (b>10); //O Resultado da True
        r = (a>10) && (b>10); //O Resultado da False
    }
}
