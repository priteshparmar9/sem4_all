<%@page import="org.hibernate.Session"%>
<%@page import="Entity_classes.Customer"%>
<%@page import="org.hibernate.SessionFactory"%>
<%@page import="org.hibernate.cfg.Configuration,Entity_classes.*"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
		Configuration con = new Configuration().configure("/Dao/hibernate.cfg.xml").addAnnotatedClass(Entity_classes.Customer.class);
		SessionFactory sf = con.buildSessionFactory();
		Session ses = sf.openSession();
		
		ses.getTransaction().begin();
		String email = request.getParameter("email");
		Object temp1 = ses.get(Entity_classes.Customer.class, email);
		Customer temp2 = (Customer)temp1;
		if(temp2 != null) {
			out.print("false");
		}
		else{
			out.print("true");
		}
	%>
</body>
</html>