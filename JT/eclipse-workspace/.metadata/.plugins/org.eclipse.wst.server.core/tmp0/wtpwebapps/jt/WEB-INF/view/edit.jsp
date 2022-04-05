<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import="javax.servlet.*,org.hibernate.*,Entity_classes.*" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Edit Profile</title>
</head>
<body>
	<%
		if(session.getAttribute("email") == null){
			response.sendRedirect("login.jsp");
		}
		else{
	%>
		<h1>Edit Profile</h1>
		<form action="edit_profile" method="post">
			Name: <input type="text" name="name" value=<%=(String)(session.getAttribute("name")) %>>
			Password: <input type="password" name="password" value=<%=session.getAttribute("password") %>>
			Number: <input type="number" max="9999999999" min="1000000000" name="number" value=<%=session.getAttribute("number") %>>
			<input type="submit">
 		</form>
	<%		
		}
	
	%>
</body>
</html>