<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>SignUp</title>
</head>
<body>
	<form action="SignUp" method = "post">
		<lable>Contact Number</lable>
		<input type="number" max="9999999999" min="1000000000" name="number"/><br>
		<lable>Username</lable>
		<input type="text" name="username" required/>
		<br>
		<label>Password</label>
		<input type="password" name="password"/>
		<br>
		<label>Email</label>
		<input type="email" name="email" />
		<br>
		<input type="submit"/>
	</form>
</body>
</html>