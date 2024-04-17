package Internship.Java;

class Ex2 {
    static class Escola {
        public Escola() {
        }

        public void print() {
            final String STR = new String("Java");
            
            System.out.println(STR);
        }
    }

    public static void main(String[] args) {
        Escola exponencial;
        exponencial = new Escola();
        exponencial.print();
    }
}
