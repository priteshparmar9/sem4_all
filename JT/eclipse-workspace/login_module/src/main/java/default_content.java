

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import Entity_classes.book;
import Entity_classes.books;

/**
 * Servlet implementation class default_content
 */
public class default_content extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void service(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		HttpSession session = request.getSession();
		if(session.getAttribute("email").equals("priteshparmar19273@gmail.com")) {
			book book1 = new book("Philosopher's Stone","This is first book of Harry Potter series. The whole series is of 7 books. In this book, it is exlained what is magical world of Hogwarts and contains Harry, Hermione and Ron's first year of school's experience.", "JK Rowling", "novel",380);
			book book2 = new book("Chamber of Secrets", "This is second book of Harry Potter series. This book contains Harry's journey to his second year at Hogwarts. And in this part, Harry destroys the first Horcrux which is Tom Riddle's Diary.","JK Rowling","novel",400);
			
			Configuration con = new Configuration().configure().addAnnotatedClass(Entity_classes.book.class);
			SessionFactory sf = con.buildSessionFactory();
			
			Session ses = sf.openSession();
			
			ses.getTransaction().begin();
			ses.save(book1);
			ses.save(book2);
			ses.getTransaction().commit();
			response.sendRedirect("admin_page.jsp");
			
		}
		else {
			response.sendRedirect("index.jsp");
		}
		
	}

}
