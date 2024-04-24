package Java.PDF5;
import java.util.*;

public class otherDataHash {
    public static void main(String[] args) {
        HashMap<String, Double> mapa = new HashMap<String, Double>();

        mapa.put("JSE", 123.00);
        mapa.put("JEE", 143.00);
        mapa.put("JSF", 265.00);

        Iterator i = mapa.keySet().iterator();

        while (i.hasNext()){
            String curso = (String) i.next();
            double preco = mapa.get(curso);
            System.out.println(curso + " : " + preco);
        }
    }
}
