

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import Entity_classes.Customer;

/**
 * Servlet implementation class edit
 */
public class edit extends HttpServlet {
	private static final long serialVersionUID = 1L;
     
    public edit() {
        super();
        // TODO Auto-generated constructor stub
    }
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		PrintWriter out = response.getWriter();
		out.print("Please do not edit source code!!! submit using post method only!!");
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		HttpSession ses = request.getSession();
		long number = Long.parseLong(request.getParameter("edit_number"));
		String name = request.getParameter("edit_name");
		System.out.println(name);
		String password = request.getParameter("edit_password");
		String email = (String) ses.getAttribute("email"); 
		
		Configuration con = new Configuration().configure().addAnnotatedClass(Entity_classes.Customer.class);
		SessionFactory sf = con.buildSessionFactory();

		Session session = sf.openSession();
		session.getTransaction().begin();
		
		
		Customer temp1 = (Customer) session.get(Entity_classes.Customer.class, email);
		temp1.setname(name);
		temp1.setnumber(number);
		temp1.setpassword(password);
		session.update(temp1);
		session.getTransaction().commit();
		response.sendRedirect("LogOut");
	}

}
