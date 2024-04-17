package Internship.Java;

class Ex1 {
    static class Course {
        public Course() {
        }
        
        public void print() {
            String name = new String("Java");
            float price = 179;
            String result = new String("The name of the course is " + name + " and the price is " + price);
            System.out.println(result);
        }
    }
    
    public static void main(String[] args) {
        Course java;
        java = new Course();
        java.print();
    }
}