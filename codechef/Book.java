public class Book {
    int pages=2;
    static String publisher = "Self";
    static {
        System.out.println("in static block");
        // pages=4;
        // non-static variable pages cannot be
        // referenced from static context
        publisher = "ABC";
    }
    {
        System.out.println("in initializerblock");
        this.pages = 4;
    }

    public Book() {
        System.out.println("in no argconstructor");
        this.pages = 6;
    }


public Book(int pages) {
//this();
System.out.println("in one argconstructor");
this.pages= pages;
}

    @Override
    public String toString() {
        return "Book{" + "pages=" + pages + '}';
    }

    public static void main(String args[]) {
        System.out.println("1st object of Book: b1");
        Book b1 = new Book();
        System.out.println(b1);
        System.out.println("2nd object of Book: b2");
        Book b2 = new Book();
        System.out.println(b2);
        System.out.println("3rd object of Book: b3");
        Book b3 = new Book(100);
        System.out.println(b3);
    }
}