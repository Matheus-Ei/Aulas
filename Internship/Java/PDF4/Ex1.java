package Java.PDF4;
import java.util.Scanner;

public class Ex1 {
    static class Notes {
        private int value = 0;
        public Notes() {
        }

        public void check() {
            Scanner scan = new Scanner(System.in);
            value = scan.nextInt();

            if(value>10 || value<0) {
                System.out.println("O Valor é Invalido - " + value);
            }
            else if (value<5) {
                System.out.println("Infelizmente Voce Foi Reprovado - " + value);
            }
            else if (value<7) {
                System.out.println("Você Esta de Recuperação - " + value);
            }
            else {
                System.out.println("Aprovado - " + value);  
            }

            scan.close();
        }

    }
    public static void main(String[] args) {
        Notes not = new Notes();
        not.check();
    }
}





