package customer;

import java.io.Serializable;
import java.util.ArrayList;

public class Customer implements Serializable{
    /**
     *
     */
//	private static final long serialVersionUID = 1L;
    private String name;
    private String primary_num;
    private String secondary_num;
    private String email;
    private String dob;
    ArrayList <Address> addresses = new ArrayList <Address>();
    ArrayList <Order> orders = new ArrayList <Order>();

    public Customer(String name, String p_n, String s_n, String email, String dob){
        this.name = name;
        this.primary_num = p_n;
        this.secondary_num = s_n;
        this.email = email;
        this.dob = dob;
    }


    public void add_address(Address e) {
        addresses.add(e);
    }

    public void add_order(Order o) {
        orders.add(o);
    }

    public void display_addresses() {
        for(int i = 0; i < addresses.size(); i++) {
            System.out.println((i + 1) +" : "+addresses.get(i));
        }
    }

    public void display_orders() {
        for(int i = 0; i < orders.size(); i++) {
            System.out.println(orders.get(i) + "\n");
        }
    }

    public String get_p_n(){return primary_num;}
    public String get_s_n(){return secondary_num;}
    public String get_name(){return name;}
    public String get_dob(){return dob;}
    public String get_email(){return email;}


    public String toString() {
        return "Name: "+name+" || Primary Number : "+primary_num+" || Secondary Number : " +secondary_num + " || DOB : "+dob + " || Email : " +email;
    }
}
