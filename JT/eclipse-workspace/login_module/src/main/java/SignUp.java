

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

public class SignUp extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public SignUp() {
        super();
        // TODO Auto-generated constructor stub
    }

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		long number = 0;
		number = Long.parseLong(request.getParameter("number"));
		String username = request.getParameter("username");
		String password = request.getParameter("password");
		String email = request.getParameter("email");
		
		Customer c = new Customer(number,username, email, password);

		Configuration con = new Configuration().configure().addAnnotatedClass(Entity_classes.Customer.class);
		SessionFactory sf = con.buildSessionFactory();
		
		Session session = sf.openSession();
		
		session.getTransaction().begin();	
		PrintWriter out = response.getWriter();
		
		Object temp1 = session.get(Entity_classes.Customer.class, email);
		Customer temp2 = (Customer)temp1;
		if(temp2 == null) {
			session.save(c);
			session.getTransaction().commit();			
			
			out.print("Account added");
			
		}
		else {
			out.print("Sorry!!! the email is already registered!!!");
		}
	}
	public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		PrintWriter out = response.getWriter();
		out.print("Please resubmit form using post method only!!!");
	}

}
