import java.util.ArrayList;
import java.util.Scanner;

class Product {
	private String ID;
	private String name;
	private String description;

    // number of products
    private static int numOfProducts;
    static {
        numOfProducts = 0;
    }
    
    // instance block.
    {
        numOfProducts++;
    }

    // Constructors
    public Product() {
    }

	public Product(String id, String name, String des) {
    	this.ID = id;
    	this.name = name;
    	this.description = des;
	}

	// getters
	String get_id() {
    	return ID;
	}

	String get_name() {
    	return name;
	}
    
	String get_description() {
        return description;
	}
    
    static int getNumOfProducts() {
        return numOfProducts;
    }

	// setters
	void set_id(String id) {
    	this.ID = id;
	}

	void set_name(String name) {
    	this.name = name;
	}

	void set_description(String des) {
    	this.description = des;
	}

	public String toString() {
    	return "ID: " + ID + ", Name: " + name + ", Description: " + description;
	}

}

class Book extends Product {
	private int ISBN;
	private int price;
	private String auth_name;

	// Constructor
	Book() {
	}

	Book(int isbn, int price, String author, String id, String name, String des) {
    	super(id, name, des);
    	this.ISBN = isbn;
    	this.price = price;
    	this.auth_name = author;
	}

    // Setters
	void set_isbn(int isbn) {
    	this.ISBN = isbn;
	}

	void set_author(String name) {
    	this.auth_name = name;
	}

    void set_price(int price){
        this.price = price;
    }

    // Getters
	int get_isbn() {
    	return ISBN;
	}

	int get_price() {
    	return price;
	}

    String get_auth_name(){
        return auth_name;
    }

	public String toString() {
    	return (super.toString()) + ", ISBN: " + ISBN + ", Price: " + price + ", Author: " + auth_name;
	}
}

class Newspaper extends Product {
	private float price;
	private int pages;
	private String time;

    // Constructors
	Newspaper() {
	}

	Newspaper(String id, String name, String des, float price, int pages, String time) {
    	super(id, name, des);
    	this.price = price;
    	this.pages = pages;
    	this.time = time;
	}

    // Setters
	void set_price(float price){this.price = price;}
	void set_pages(int pages){this.pages = pages;}
	void set_time(String t){this.time = t;}

    // Getters
    float get_price(){return price;}
    int get_pages(){return pages;}
    String time(){return time;}

	public String toString(){
    	return (super.toString() + ", price: "+price+", Pages: "+pages+", Time: "+time);
	}
    
}

class Magazine extends Product{
	String publisher;
	String catagory;
	float price;

    // Constructors
	Magazine(){
	}
	Magazine(String id, String name, String des, String publisher, String cat, float price){
    	super(id,name,des);
    	this.publisher = publisher;
    	this.catagory = cat;
    	this.price = price;
	}

    // Getters
    String get_publisher(){return publisher;}
    String get_catagory(){return catagory;}
    float get_price(){return price;}

    // Setters
    void set_publisher(String pub){this.publisher = pub;}
    void set_catagory(String cat){this.catagory = cat;}
    void set_price(float p){this.price = p;}

	public String toString(){
    	return super.toString()+", Publisher: "+publisher+", Price: "+ price+ ", catagory: "+ catagory;
	}
}

class Articles extends Product{
	String writer;
	String publisher;

    // Constructors
	Articles(){
	}
	Articles(String id, String name, String des, String writer, String publisher){
    	super(id,name,des);
    	this.writer = writer;
    	this.publisher = publisher;
	}

    // Setters
    void set_writer(String w){this.writer = w;}
    void set_publisher(String p){this.publisher = p;}

    // Getters
    String get_writer(){return writer;}
    String get_publisher(){return publisher;}

	public String toString(){
    	return super.toString()+ ", writer: "+writer+", publisher: "+publisher;
	}
}

class Address{
	private String st1;
	private String st2;
	private String city;
	private String state;
	private int pin;
    
	Address(String s1, String s2, String city, String state, int pin){
   	 this.st1 = s1;
   	 this.st2 = s2;
   	 this.city = city;
   	 this.state = state;
   	 this.pin = pin;
	}
    
	public String toString() {
   	 return "Street 1: "+ st1+"\nStreet 2: "+st2+"\nCity : "+city+"\nPin : "+pin;
	}
    
}

class OrderedItem{
	Product p;
	float price;
	int quantity;
    
	OrderedItem(Product p, int q){
   	 this.p = p;
   	 this.quantity = q;
	}
}

class Order{
	String order_id;
	String order_date;
	String order_time;
	ArrayList <OrderedItem> orders = new ArrayList <OrderedItem>();    
}

class Customer{
	private String name;
	private String primary_num;
	private String secondary_num;
	private String email;
	private String dob;
	ArrayList <Address> addresses = new ArrayList <Address>();
	ArrayList <Order> orders = new ArrayList <Order>();
    
	Customer(String name, String p_n, String s_n, String email, String dob){
   	 this.name = name;
   	 this.primary_num = p_n;
   	 this.secondary_num = s_n;
   	 this.email = email;
   	 this.dob = dob;
	}
    
    
	void add_address(Address e) {
   	 addresses.add(e);
	}
    
	void add_order(Order o) {
   	 orders.add(o);
	}
    
	void display_customer() {
   	 System.out.println("Name: "+name+"\nPrimary Number : "+primary_num+"\nSecondary Number : " +secondary_num + "\nDOB : "+dob + "Email : " +email);
	}
    
	void display_addresses() {
   	 
	}
}



public class DriverProduct{
	public static void main(String args[]) {
   	 Scanner sc = new Scanner(System.in);
   	 int x = sc.nextInt();
    	Book p = new Book(12322, 99, "R.D.", "12P03A", "Maths", "12th Standard book");
    	Book f = new Book();
    	System.out.println(p);
    	Articles a = new Articles("321323", "Research", "Science research","Einstine", "Publisher_x");
    	Newspaper n = new Newspaper();
    	System.out.println(n);
    	System.out.println(a);
    	int num = p.getNumOfProducts();
    	System.out.println("Number of products is : " + num);
   	 
        // sc.close();
	}
}



