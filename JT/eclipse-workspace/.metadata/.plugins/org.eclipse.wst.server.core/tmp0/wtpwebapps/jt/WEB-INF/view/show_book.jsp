<%@page import="java.util.List"%>
<%@page import="org.hibernate.cfg.Configuration"%>
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<%@ page
	import="java.io.*,javax.servlet.*,org.hibernate.*, Entity_classes.*, Dao.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Books</title>
</head>
<body>
	
	<%
		if(session.getAttribute("email") == null){
			response.sendRedirect("login.jsp");
		}
		//String type = (String) session.getAttribute("type");
		
		Configuration con = new Configuration().configure("Dao/hibernate.cfg.xml").addAnnotatedClass(Entity_classes.book.class);
		SessionFactory sf = con.buildSessionFactory();
		
		Session ses = sf.openSession();
		
		ses.getTransaction().begin();	
		Query query = ses.createQuery("from book WHERE type = :type");
		query.setParameter("type",session.getAttribute("type"));
		List<book> results = query.list();
	%>
	<table border='1'>
	<tr>
		<th>Title</th>
		<th>Author Name</th>
	<%
		if(session.getAttribute("email").equals("priteshparmar19273@gmail.com")){
	%>
		<th>Content</th>
	<%
		}
	%>
		<th>Image</th>
		<th>Price</th>
	</tr>
	<%
		for(book b: results){
	%>
			<tr>
				<td><%= b.getTitle() %></td>
				<td><%= b.getAuthname() %></td>
	<%
		if(session.getAttribute("email").equals("priteshparmar19273@gmail.com")){
	%>
				<td><%= b.getContent() %></td>
	<%
		}
	%>
				<td><img src="<%= b.getUrl()%>"></td>
				<td><%= b.getPrice()%></td>
	<%
		if(session.getAttribute("email").equals("priteshparmar19273@gmail.com")){
	%>
				<td><a href="delete?value=<%=b.getTitle() %>">Delete </a></td>
	<%
		}
	%>
			</tr>
	<%
		}
	%>
	</table>
</body>
</html>