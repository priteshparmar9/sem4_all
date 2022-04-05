<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<%@ page
	import="java.io.*,javax.servlet.*,org.hibernate.*"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
	<%
	if (session.getAttribute("email") == null) {
		response.sendRedirect("login.jsp");
	}

	else if (session.getAttribute("email").equals("priteshparmar19273@gmail.com")) {
	%>
	<!-- <button> Novel </button>
<button> Magazine </button>
<button> Article </button> -->

	<form action="add_books" method="post">
		<label>Add title</label> <input type="text" name="title" required /> <br>
		<br> <label>Content</label>
		<textarea rows="4" cols="50" name="content">
Enter your text here...</textarea>
		<br>
		<br> <label>Author name</label> <input type="text"
			name="authname" required /> <br>
		<br> <label>Choose a Book Type</label> <select id="book_type"
			name="book_type" required>
			<option value="magazine">magazine</option>
			<option value="novel">novel</option>
			<option value="article">article</option>
		</select> <br>
		<br> <label>Price</label> <input type="number" min=1 name="price"
			required /> <br> <input type="submit" />
	</form>
	<%
	} else {
	out.print("You are not allowed to visit this site!! stay away!!");
	}
	%>


	Hiiii Options novel magazine or article Add Title Content Author name
	Price Submit button
</body>
</html>