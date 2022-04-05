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