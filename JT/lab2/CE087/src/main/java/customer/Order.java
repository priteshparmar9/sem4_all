package customer;

import java.util.ArrayList;
import java.time.LocalDateTime;

public class Order {
    String order_id;
    LocalDateTime dt;
    int total;
    ArrayList <OrderedItem> orders = new ArrayList <OrderedItem>();

    public Order(String id, ArrayList <OrderedItem> i) {
        total = 0;
        this.order_id = id;
        this.dt = LocalDateTime.now();
        this.orders = i;
    }

    public String toString() {
        String temp ="";
        for(int i =0 ; i < orders.size(); i++) {
            temp += orders.get(i).toString();
            total += (orders.get(i).price * orders.get(i).quantity);
        }
        temp += "\n\n Total : " + total;
        return "ID : " + order_id + " Date and Time : " + dt + "\n" + temp;
    }

}
