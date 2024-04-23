package Java.PDF4;

public class Ex3 {
    static class Repetition {
        public Repetition() {

        }
        public void loop() {
            for(int i=0; i<101; i++) {
                System.out.println(i);
            }
        }
    }

    public static void main(String[] args) {
        Repetition rep = new Repetition();
        rep.loop();
    }
}
