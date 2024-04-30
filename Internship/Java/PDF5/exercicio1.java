package Java.PDF5;
import java.util.Arrays;

public class exercicio1 {
    static class Cursos {
        public Cursos() {
            String[] cursos = {"JSE", "JEE", "JME", "EJB", "JSTL", "JSF", "JSP"};

            Arrays.sort(cursos);
    
            for(int i = 0; i<cursos.length; i++) {
                System.out.println(cursos[i]);
            }
        }
    }
    public static void main(String[] args) {
        Cursos cursos = new Cursos();
    }
}


