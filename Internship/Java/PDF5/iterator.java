package Java.PDF5;
import java.util.*;

public class iterator {
    public static void main(String[] args) {
        HashMap mapa = new HashMap();
        mapa.put("Curso 1", "JSE");
        mapa.put("Curso 2", "JME");
        mapa.put("Curso 3", "J2EE");
        mapa.put("Curso 5", "EJB");

        String curso = (String)mapa.get("Curso 2");
        System.out.println(curso);

        int elementos = mapa.size();
        System.out.println("Elementos: " + elementos);

        Iterator i = mapa.keySet().iterator();
        while (i.hasNext()) {
            String chave = (String)i.next();
            curso = (String)mapa.get(chave);
            System.out.println(chave + ":" + curso);
        }

        mapa.clear();
        elementos = mapa.size();
        System.out.println("Elementos: " + elementos);
    }
}
