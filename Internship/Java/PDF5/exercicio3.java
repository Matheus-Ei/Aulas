package Java.PDF5;
import java.util.Iterator;
import java.util.TreeMap;


public class exercicio3 {
    static class PrecosCursos {
        public PrecosCursos() {
            TreeMap<String, Integer> map = new TreeMap<String, Integer>();

            map.put("JSE", 190);
            map.put("JEE", 380);
            map.put("JME", 280);
            map.put("EJB", 240);
            map.put("JSTL", 90);
            map.put("JSF", 170);
            map.put("JSP", 120);


            Iterator i = map.keySet().iterator();

            while(i.hasNext()) {
                String key = (String) i.next();
                Integer course = (Integer) map.get(key);

                System.out.println(key + " : " + course);
            }
        }
    }

    public static void main(String[] args) {
        PrecosCursos pc = new PrecosCursos();
    }
}



