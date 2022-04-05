import customer.*;
import product.*;
import java.io.File;
import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Scanner;

public class DriverProduct {
    public static void main(String []args) throws Exception {
        Scanner sc = new Scanner(System.in);

        make_file.main(null);

        System.out.println("Select User: ");

        File f = new File("Saved_data_cust.txt");
        FileInputStream fis1 = new FileInputStream(f);
        ObjectInputStream ois1 = new ObjectInputStream(fis1);

        Customer c;
        int cust_no = 1;
        ArrayList <Customer> temp = new ArrayList <Customer>(4);
        for(int i = 0; i < 3; i++) {
            temp.add((Customer)ois1.readObject());
            System.out.println(i +" : " +temp.get(i));
        }
//		ois1.reset();
//		ObjectInputStream ois11 = new ObjectInputStream(fis1);
        System.out.println("Are you one of above if yes please enter serial number[1,2,3] else -1 : ");
        cust_no = sc.nextInt();
        if(cust_no == 0) {
            c = temp.get(0);
        }
        else if(cust_no == 1) {
            c = temp.get(1);
        }
        else if(cust_no == 2) {
            c = temp.get(2);
        }
        else {
            System.out.println("Enter Your Name : ");
            String name = sc.next();
            System.out.println("Enter Your Primary Number : ");
            String p_n = sc.next();
            System.out.println("Enter Your Secondary Number : ");
            String s_n = sc.next();
            System.out.println("Enter Your DOB : ");
            String DOB = sc.next();
            System.out.println("Enter Your Email : ");
            String mail = sc.next();
            c = new Customer(name, p_n, s_n, mail,DOB);
        }

        System.out.println("Selected Customer : \n"+c);


        int x = 1;
        ArrayList <OrderedItem> o = new ArrayList <OrderedItem>(10);
        while(x != 0) {
            System.out.println("\n\n1: Purchase Book\n2: Purchase Magazine\n3: Purchase Articles\n4: Purchase Newspapers");
            System.out.print("Please enter your input: ");
            x = sc.nextInt();
            switch(x) {
                case 1:
                    File f2 = new File("Saved_data_books.txt");
                    FileInputStream fis2 = new FileInputStream(f2);
                    ObjectInputStream ois2 = new ObjectInputStream(fis2);

                    for(int i = 0; i < 2; i++) {
                        Book t = (Book)ois2.readObject();
                        System.out.println(t + "\nDo you want to purchase? [0/Quantity] :");
                        int inp = sc.nextInt();
                        if(inp != 0) {
                            OrderedItem temp1 = new OrderedItem((Product)t, t.get_price(), inp);
                            o.add(temp1);
                        }
                    }
                    break;

                case 2:
                    File f3 = new File("Saved_data_maz.txt");
                    FileInputStream fis3 = new FileInputStream(f3);
                    ObjectInputStream ois3 = new ObjectInputStream(fis3);

                    for(int i = 0; i < 2; i++) {
                        Magazine t = (Magazine)ois3.readObject();
                        System.out.println(t + "\nDo you want to purchase? [0/Quantity] :");
                        int inp = sc.nextInt();
                        if(inp != 0) {
                            OrderedItem temp1 = new OrderedItem((Product)t,(int) t.get_price(), inp);
                            o.add(temp1);
                        }
                    }

                    break;

                case 3:
                    File f4 = new File("Saved_data_art.txt");
                    FileInputStream fis4 = new FileInputStream(f4);
                    ObjectInputStream ois4 = new ObjectInputStream(fis4);

                    for(int i = 0; i < 2; i++) {
                        Magazine t = (Magazine)ois4.readObject();
                        System.out.println(t + "\nDo you want to purchase? [0/Quantity] :");
                        int inp = sc.nextInt();
                        if(inp != 0) {
                            OrderedItem temp1 = new OrderedItem((Product)t,(int) t.get_price(), inp);
                            o.add(temp1);
                        }
                    }
                    break;

                case 4:
                    File f5= new File("Saved_data_newsp.txt");
                    FileInputStream fis5 = new FileInputStream(f5);
                    ObjectInputStream ois5 = new ObjectInputStream(fis5);

                    for(int i = 0; i < 2; i++) {
                        Newspaper t = (Newspaper)ois5.readObject();
                        System.out.println(t + "\nDo you want to purchase? [0/Quantity] :");
                        int inp = sc.nextInt();
                        if(inp != 0) {
                            OrderedItem temp1 = new OrderedItem((Product)t,(int) t.get_price(), inp);
                            o.add(temp1);
                        }
                    }
                    break;

            }
            System.out.println("1 to continue Shopping and 0 to exit : ");
        }
        Order o_c = new Order("ORD114",o);
        System.out.println("\n\n\n");
        c.add_order(o_c);
        c.display_orders();
        System.out.println("\n\nWhere do you want to deliver? [-1 to add new address] : ");
        c.display_addresses();
        x = sc.nextInt();
//		if(x == -1) {
//
//		}

        System.out.println("Thank You for using it your orders will be delivered within a week.");
    }
}
