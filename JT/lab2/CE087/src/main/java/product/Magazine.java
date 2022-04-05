package product;

public class Magazine extends Product {
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    String publisher;
    String catagory;
    float price;

    public Magazine() {
    }

    public Magazine(String id, String name, String des, String publisher, String cat, float price) {
        super(id, name, des);
        this.publisher = publisher;
        this.catagory = cat;
        this.price = price;
    }

    public String get_publisher() {
        return this.publisher;
    }

    public String get_catagory() {
        return this.catagory;
    }

    public float get_price() {
        return this.price;
    }

    public void set_publisher(String pub) {
        this.publisher = pub;
    }

    public void set_catagory(String cat) {
        this.catagory = cat;
    }

    public void set_price(float p) {
        this.price = p;
    }

    public String toString() {
        String var10000 = super.toString();
        return var10000 + ", Publisher: " + this.publisher + ", Price: " + this.price + ", catagory: " + this.catagory;
    }
}
