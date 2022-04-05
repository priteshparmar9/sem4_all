package product;

import java.io.Serializable;

public class Product implements Serializable{
    /**
     *
     */
    private static final long serialVersionUID = 1L;
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
    public String get_id() {
        return ID;
    }

    public String get_name() {
        return name;
    }

    public String get_description() {
        return description;
    }

    public static int getNumOfProducts() {
        return numOfProducts;
    }

    // setters
    public void set_id(String id) {
        this.ID = id;
    }

    public void set_name(String name) {
        this.name = name;
    }

    public void set_description(String des) {
        this.description = des;
    }

    public String toString() {
        return "ID: " + ID + ", Name: " + name + ", Description: " + description;
    }
}
