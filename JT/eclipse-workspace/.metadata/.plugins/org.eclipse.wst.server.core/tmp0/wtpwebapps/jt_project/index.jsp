<html>
<%@ page import="javax.*"%>
<body>
	<h2>Hello World!</h2>
	<%
	if (session.getAttribute("email") == null) {
		response.sendRedirect("login.jsp");
		out.print("Redirect to login page");
	} else {
		out.print("Continue on this page");
	%>
	<br>
	<a href="LogOut">log out</a>
	<a href="edit.jsp">Edit</a>
	<br>
	<a href="show_book.jsp?type=article"><button>Articles</button></a>
	<br>
	<a href="show_book.jsp?type=magazine">
		<button>Magazine</button>
	</a>
	<br>
	<a href="show_book.jsp?type=novel">
		<button>Novels</button>
	</a>


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
