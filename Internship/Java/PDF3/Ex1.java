class Ex1 {
    static class Stock {
        public int stock = 270;
        private int useMonth = 30;
        private int monthLeft = 0;

        public Stock() {
        }
        public void product() {
            this.monthLeft = this.stock/this.useMonth;

            System.out.println("Faltam " + this.monthLeft + " Meses para Acabar o Estoque");
        }
    }

    public static void main(String[] args) {
        Stock v22 = new Stock();
        v22.product();
    }
}


