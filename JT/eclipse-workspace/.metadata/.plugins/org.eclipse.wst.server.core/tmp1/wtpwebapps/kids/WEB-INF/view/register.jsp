<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html lang="en">

<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width,initial-scale=1">
	<title>Registration Page</title>
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.0-beta2/dist/css/bootstrap.min.css" rel="stylesheet"
		integrity="sha384-BmbxuPwQa2lc/FVzBcNJ7UAyJxM6wuqIj61tLrc4wSX0szH/Ev+nYRRuWlolflfl" crossorigin="anonymous">
</head>

<body background="C:\Users\meetr\OneDrive\Desktop\html pages\image\bg.gif">
	<section class="h-100">
		<div class="container h-100">
			<div class="row justify-content-sm-center h-100">
				<div class="col-xxl-4 col-xl-5 col-lg-5 col-md-7 col-sm-9">
				<br>
					<div class="card shadow-lg">
						<div class="card-body p-5">
							<center>
								<h1 class="fs-4 card-title fw-bold mb-4 text-danger">Create An Account</h1>
							</center>
							
							
							<form action="save" method="POST" class="needs-validation" autocomplete="off">
								<div class="mb-3">
									<label class="mb-2 text-dark" for="name">Name</label>
									<input id="name" type="text" class="form-control" name="uname" required>
								</div>

								<div class="mb-3">
									<label class="mb-2 text-dark" for="email">Email Address</label>
									<input id="email" type="email" class="form-control" name="email" required>
								</div>

								<div class="mb-3">
									<label class="mb-2 text-dark" for="phone">Mobile Number</label>
									<input id="phone" type="tel" class="form-control" name="mobile_no"
										pattern="[0-9]{10}" required>
								</div>
								<div class="mb-3">
									Address<textarea id="desc" name="address" class="form-control form-control-xxl"
										required />
									</textarea>
								</div>
								<div class="mb-3">
									<label class="mb-2 text-dark" for="password">Password</label>
									<input id="password" type="password" class="form-control" name="password" required>
								</div>
								<center>
									<div class="mb-3">
										<button type="submit" class="btn btn-danger ms-auto">
											Register
										</button>
										<button type="reset" class="btn btn-danger ms-auto">
											Reset
										</button>
									</div>
								</center>

							</form>
						</div>
						<div class="card-footer py-3 border-0">
							<div class="text-center">
								Already have an account? <a href="/" class="text-dark">Login</a>
							</div>
						</div>
					</div>
				</div>
			</div>
		</div>
	</section>
</body>

</html>