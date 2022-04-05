package customer;

import java.io.Serializable;

public class Address implements Serializable{
    private String st1;
    private String st2;
    private String city;
    private String state;
    private int pin;

    public Address(String s1, String s2, String city, String state, int pin){
        this.st1 = s1;
        this.st2 = s2;
        this.city = city;
        this.state = state;
        this.pin = pin;
    }

    public String toString() {
        return "Street 1: "+ st1+"\nStreet 2: "+st2+"\nCity : "+city+"\nState : " +state +"\nPin : "+pin;
    }
}
