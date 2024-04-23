package Java.PDF4;
import java.util.Scanner;

public class Ex2 {
    static class Week {
        public Week() {
        }
        public void getDay(int number) {
            switch (number) {
                case 1:
                    System.out.println("\nDomingo\n");
                    break;
                case 2:
                    System.out.println("\nSegunda\n");
                    break;
                case 3:
                    System.out.println("\nTerça\n");
                    break;
                case 4:
                    System.out.println("\nQuarta\n");
                    break;
                case 5:
                    System.out.println("\nQuinta\n");
                    break;
                case 6:
                    System.out.println("\nSexta\n");
                    break;
                case 7:
                    System.out.println("\nSabado\n");
                    break;
            
                default:
                    System.out.println("\nEsse Dia da Semana Não Existe, Tente Novamente!\n");

                    Scanner scan = new Scanner(System.in);
                    int num = scan.nextInt();
                    this.getDay(num);
                    scan.close();

                    break;
            }
        }
    }
    public static void main(String[] args) {
        int number = 0;
        Scanner scan = new Scanner(System.in);
        number = scan.nextInt();

        Week day = new Week();
        day.getDay(number);

        scan.close();
    }
}
