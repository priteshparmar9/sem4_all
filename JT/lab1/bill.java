import java.util.Scanner;

class Customer {
    String c_id, c_name, c_city, c_category;
    int items;
    Product p[];
    Customer(String id, String name, String city, String cat, int item) {
        this.c_id = id;
        this.c_category = cat;
        this.c_city = city;
        this.c_name = name;
        this.items = item;
    }
}

class Product {
    String p_id, p_name;
    double p_price, p_discount;
    int p_quantity;

    Product(String p_id, String p_name, double p_price, int p_quantity, double p_discount) {
        this.p_id = p_id;
        this.p_name = p_name;
        this.p_price = p_price;
        this.p_quantity = p_quantity;
        this.p_discount = p_discount;
    }
}

class bill {
    public static void main(String[] args) {
        String id, name, category, city;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter following details: ");
        System.out.print("Customer ID: ");
        id = s.next();
        System.out.print("customer name : ");
        name = s.next();
        System.out.print("city : ");
        city = s.next();
        System.out.print("category : ");
        category = s.next();
        int n;
        System.out.print("Enter number of products : ");
        n = s.nextInt();
        Customer c = new Customer(id, name, city, category, n);
        c.items = n;
        if (n > 3) {
            Product[] p = new Product[n];
            String p_id, p_name;
            int p_quantity;
            double p_price, p_discount;
            for (int i = 0; i < n; i++) {
                System.out.println("Enter Details for " + (i + 1) + " th product");
                System.out.print("Product id : ");
                p_id = s.next();
                System.out.print("Product name : ");
                p_name = s.next();
                System.out.print("Product price : ");
                p_price = s.nextDouble();
                System.out.print("Product quantity : ");
                p_quantity = s.nextInt();
                System.out.print("Product discount : ");
                p_discount = s.nextDouble();
                System.out.println("Discount is " + p_discount + " %");
                p[i] = new Product(p_id, p_name, p_price, p_quantity, p_discount);
            }
            c.p = p;
            System.out.println("Hello "+c.c_name);
            System.out.println();
            System.out.println("Thank you for your purchase. You are our " + c.c_category + " from " + c.c_city);
            System.out.println("Please find your invoice: ");
            int sr_no=1;
			double total_amount=0;
            for(int i = 0; i < c.items; i++){
                total_amount+=p[i].p_quantity*(p[i].p_price*(1-p[i].p_discount/100));
				System.out.println(sr_no + " " + p[i].p_name + "   "+p[i].p_discount + " %  "+p[i].p_quantity+ " "+ p[i].p_price );
				sr_no++;
            }
			System.out.println("Total Amount : "+total_amount);
        } else {
            System.out.println("Sorry!!! You have to buy atleast 4 products to generate bill.");
        }
    }
}