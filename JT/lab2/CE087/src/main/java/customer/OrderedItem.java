package customer;
import product.Product;

public class OrderedItem {
    Product p;
    float price;
    int quantity;

    public OrderedItem(Product p, int price ,int q){
        this.p = p;
        this.price = price;
        this.quantity = q;
    }

    public String toString() {
        return "Product: "+p.get_name() + " Price: " + price + " Quantity : " + quantity;
    }
}
