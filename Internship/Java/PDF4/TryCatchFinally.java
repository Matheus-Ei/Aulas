package Java.PDF4;

public class TryCatchFinally {
    public static void main(String[] args) {
        try {
            System.out.println(1/0);
        }
        catch(Exception e) {
            System.out.println("\nO Erro Foi " + e);
        }
        finally {
            System.out.println("Fim");
        }
    }    
}  


