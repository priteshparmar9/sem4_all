package product;

public class Book extends Product {
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    private int ISBN;
    private int price;
    private String auth_name;

    public Book() {
    }

    public Book(int isbn, int price, String author, String id, String name, String des) {
        super(id, name, des);
        this.ISBN = isbn;
        this.price = price;
        this.auth_name = author;
    }

    public void set_isbn(int isbn) {
        this.ISBN = isbn;
    }

    public void set_author(String name) {
        this.auth_name = name;
    }

    public void set_price(int price) {
        this.price = price;
    }

    public int get_isbn() {
        return this.ISBN;
    }

    public int get_price() {
        return this.price;
    }

    public String get_auth_name() {
        return this.auth_name;
    }

    public String toString() {
        String var10000 = super.toString();
        return var10000 + ", ISBN: " + this.ISBN + ", Price: " + this.price + ", Author: " + this.auth_name;
    }
}
