package product;

public class Articles extends Product {
    /**
     *
     */
    private static final long serialVersionUID = 1L;
    String writer;
    String publisher;

    public Articles() {
    }

    public Articles(String id, String name, String des, String writer, String publisher) {
        super(id, name, des);
        this.writer = writer;
        this.publisher = publisher;
    }

    public void set_writer(String w) {
        this.writer = w;
    }

    public void set_publisher(String p) {
        this.publisher = p;
    }

    public String get_writer() {
        return this.writer;
    }

    public String get_publisher() {
        return this.publisher;
    }

    public String toString() {
        String var10000 = super.toString();
        return var10000 + ", writer: " + this.writer + ", publisher: " + this.publisher;
    }
}
