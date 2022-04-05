<%@ page import="java.sql.Date"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="java.io.*,javax.servlet.*,org.hibernate.*,Entity_classes.Customer"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Admin Page</title>
</head>
<body>
	<%
		if(session.getAttribute("email") == null){
			response.sendRedirect("login.jsp");
		}
		else if(session.getAttribute("email").equals("priteshparmar19273@gmail.com")){
			if(session.getAttribute("error") != null){
				
				%>
					<script>
						alert('<%=session.getAttribute("error")%>');
					</script>
				<%
						}
							session.setAttribute("error", null);
				%>
				
				<h1>Admin Page</h1>
				<a href="logout">Logout</a>
				<br>
				<a href="edit">Edit Profile</a>
				<br>
				<a href="index">Index</a>
				<br>
				<a href="add_content">Add default books</a>
				<a href="addBook">Add books</a>
				
			<%
		}
		else{
			out.print("You are not allowed to visit this page!! stay away!!");
		}
	
	%>
</body>
</html>