package product;

public class Newspaper extends Product {
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    private float price;
    private int pages;
    private String time;

    public Newspaper() {
    }

    public Newspaper(String id, String name, String des, float price, int pages, String time) {
        super(id, name, des);
        this.price = price;
        this.pages = pages;
        this.time = time;
    }

    public void set_price(float price) {
        this.price = price;
    }

    public void set_pages(int pages) {
        this.pages = pages;
    }

    public void set_time(String t) {
        this.time = t;
    }

    public float get_price() {
        return this.price;
    }

    public int get_pages() {
        return this.pages;
    }

    public String time() {
        return this.time;
    }

    public String toString() {
        String var10000 = super.toString();
        return var10000 + ", price: " + this.price + ", Pages: " + this.pages + ", Time: " + this.time;
    }
}
