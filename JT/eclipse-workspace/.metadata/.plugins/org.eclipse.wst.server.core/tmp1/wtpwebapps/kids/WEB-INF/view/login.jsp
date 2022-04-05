<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<%@ taglib uri = "http://java.sun.com/jsp/jstl/core" prefix = "c" %>
<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width,initial-scale=1">
	<title>Login Page</title>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta2/dist/css/bootstrap.min.css" rel="stylesheet"
		integrity="sha384-BmbxuPwQa2lc/FVzBcNJ7UAyJxM6wuqIj61tLrc4wSX0szH/Ev+nYRRuWlolflfl" crossorigin="anonymous">
</head>

<body background="C:\Users\meetr\OneDrive\Desktop\html pages\image\bg.gif">
	<section class="h-100">
		<div class="container h-100">
			<div class="row justify-content-sm-center h-100">
				<div class="col-xxl-4 col-xl-5 col-lg-5 col-md-7 col-sm-9">
					<div class="text-center my-5">
						<img src="C:\Users\meetr\OneDrive\Desktop\html pages\image\user.png" alt="logo" width="75">
					</div>
					<div class="card shadow-lg">
						<div class="card-body p-5">
							<center>
								<h1 class="fs-4 card-title fw-bold mb-4 text-danger">Login</h1>
							</center>
							
				
						
						
							<form action="validate" method="POST" class="needs-validation" autocomplete="off">
								<div class="mb-3">
									<label class="mb-2 text-dark" for="email">Email Address</label>
									<input id="email" type="email" class="form-control" name="email" value="" required>
								</div>

								<div class="mb-3">
									<label class="mb-2 text-dark" for="email">Password</label>
									<input id="password" type="password" class="form-control" name="password" required>
								</div>
								<center>
									<div class="md-3">
										<button type="submit" class="btn btn-danger ms-auto">
											Login
										</button>
									</div>
								</center>
							</form>
						</div>
						<div class="card-footer py-3 border-0">
							<div class="text-center">
								Don't have an account? <a href="register" class="text-dark">Create One</a>
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</section>

</body>

</html>