<html>
<%@ page import="javax.*" %>
<body>
<h2>Hello World!</h2>
<%
	if(session.getAttribute("email") == null){
		response.sendRedirect("login.jsp");
		out.print("Redirect to login page");
	}
	else{
		out.print("Continue on this page");
		%>	
		<a href="LogOut">log out</a> <br>
		<a href="edit.jsp">Edit</a><br>
		<a href="articles.jsp">Articles</a><br>
		<a href="edit.jsp">Magazines</a><br>
		<a href="edit.jsp">Novels</a> 
		
		<%
		if (session.getAttribute("email").equals("priteshparmar19273@gmail.com")) {
			%>
				<a href="admin_page.jsp">Admin</a>
			<%
		}
	}
%>
</body>
</html>
