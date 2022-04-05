
import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import org.hibernate.Session;
import org.hibernate.SessionFactory;
import org.hibernate.cfg.Configuration;

import Entity_classes.Customer;

/**
 * Servlet implementation class login
 */

public class login extends HttpServlet {
	private static final long serialVersionUID = 1L;

	protected void doPost(HttpServletRequest request, HttpServletResponse response)
			throws ServletException, IOException {
		// TODO Auto-generated method stub
		PrintWriter out = response.getWriter();
		String email = request.getParameter("email");
		String password = request.getParameter("password");

		Configuration con = new Configuration().configure().addAnnotatedClass(Entity_classes.Customer.class);
		SessionFactory sf = con.buildSessionFactory();

		Session session = sf.openSession();
		session.getTransaction().begin();

		Object temp1 = session.get(Entity_classes.Customer.class, email);
		Customer temp2 = (Customer) temp1;
		if (temp2 == null) {

			out.print("Invalid email!!!");

		} else {
			if (temp2.getpassword().equals(password)) {

				HttpSession ses = request.getSession();
				ses.setAttribute("email", email);
				ses.setAttribute("name", temp2.getname());
				ses.setAttribute("password", temp2.getpassword());
				ses.setAttribute("number", temp2.getnumber());
				out.print("You are logged in!!!");
//				out.println(ses.getAttribute("name"));
				if (ses.getAttribute("email").equals("priteshparmar19273@gmail.com")) {
					response.sendRedirect("admin_page.jsp");
				} else {
					response.sendRedirect("index.jsp");
				}

			} else {
				out.print("Wrong password!!!");
			}
		}

	}

}
