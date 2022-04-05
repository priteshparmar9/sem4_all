package Entity_classes;

import javax.persistence.Entity;
import javax.persistence.Id;

@Entity
public class book {
	@Id
	private String title;
	private String content;
	private String authname;
	private String type;
	private int price;
	
	
	
	public book(String title, String content, String authname, String type, int price) {
		super();
		this.title = title;
		this.content = content;
		this.authname = authname;
		this.type = type;
		this.price = price;
	}
	
	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public String getContent() {
		return content;
	}
	public void setContent(String content) {
		this.content = content;
	}
	public String getAuthname() {
		return authname;
	}
	public void setAuthname(String authname) {
		this.authname = authname;
	}
	public String getType() {
		return type;
	}
	public void setType(String type) {
		this.type = type;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	
	@Override
	public String toString() {
		return "book [title=" + title + ", content=" + content + ", authname=" + authname + ", type=" + type
				+ ", price=" + price + "]";
	}
	
	
}
