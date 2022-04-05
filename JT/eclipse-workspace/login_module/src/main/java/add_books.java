

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import Entity_classes.Customer;
import Entity_classes.book;

/**
 * Servlet implementation class add_books
 */
public class add_books extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public add_books() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//response.getWriter().append("Served at: ").append(request.getContextPath());
		
		PrintWriter out = response.getWriter();
		out.print("Please resubmit form using post method only!!!");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		//doGet(request, response);
		
		book b = new book(request.getParameter("title"),request.getParameter("content"),request.getParameter("authname"),request.getParameter("book_type"),Integer.parseInt(request.getParameter("price")));

		Configuration con = new Configuration().configure().addAnnotatedClass(Entity_classes.Customer.class);
		SessionFactory sf = con.buildSessionFactory();
		
		Session session = sf.openSession();
		
		session.getTransaction().begin();	
		PrintWriter out = response.getWriter();
		
		
		Object temp1 = session.get(Entity_classes.book.class, request.getParameter("title"));
		book temp2 = (book)temp1;
		if(temp2 == null) {
			session.save(c);
			session.getTransaction().commit();			
			
			out.print("Redirect to customer book page");
//			
		}
		else {
			out.print("Sorry!!! book title is already added!!!");
		}
		
	}

}
