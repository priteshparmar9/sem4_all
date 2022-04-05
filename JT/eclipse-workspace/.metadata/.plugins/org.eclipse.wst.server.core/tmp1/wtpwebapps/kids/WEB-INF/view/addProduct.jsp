<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>

<head>
    <meta charset="ISO-8859-1">
    <title>ADD PRODUCT PAGE</title>
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css" rel="stylesheet"
        integrity="sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3" crossorigin="anonymous">
</head>
<!-- background-color:#ADEFD1FF -->

<body style="background-color: #ADEFD1FF;">
    <section>
        <div class="mask d-flex align-items-center h-100 gradient-custom-3">
            <div class="container h-100">
                <div class="row d-flex justify-content-center align-items-center h-100">
                    <div class="col-12 col-md-9 col-lg-7 col-xl-6">
                        <div class="card" style="border-radius: 15px;">
                            <div class="card-body p-5">
                                <h2 class="text-uppercase text-center mb-5" style="color: #00203FFF;">Add Product
                                    Details</h2>

                                <form action="save_product" method="POST">

                                    <div class="form-outline mb-4">
                                        Product ID<input type="number" name='pId' id="id"
                                            class="form-control form-control-sm" required />
                                    </div>
                                    <div class="form-outline mb-4">
                                        Product Name<input type="text" name='pName' id="name"
                                            class="form-control form-control-sm" required />
                                    </div>
                                    <div class="form-outline mb-4">
                                        Description<textarea id="desc" name="pDesc" class="form-control form-control-xxl"
                                            required />
                                        </textarea>
                                    </div>
                                    <div class="form-outline mb-4">
                                        Product Price<input type="number" name='pPrice' id="price"
                                            class="form-control form-control-sm" required />
                                    </div>
                                    <div class="form-outline mb-4">
                                        Quantity<input type="number" name='pQuantity' id="qty"
                                            class="form-control form-control-sm" required />
                                    </div>
                                    <div class="form-outline mb-4">
                                        Category :<select name="pCategory" id="pet-select"
                                            class="form-control form-control-sm" required>
                                            <option value="">--Please choose a category--</option>
                                            <option value="Babyfood">Baby Food</option>
                                            <option value="Cloths">Cloths</option>
                                            <option value="toy">Toy</option>
                                        </select>
                                    </div>
                                   
                                    <div class="d-flex justify-content-center">
                                        <button type="submit"
                                            class="btn btn-danger btn-block btn-lg gradient-custom-4 text-body">Add
                                            Product</button>
                                </form>
                            </div>
                        </div>
                    </div>
                </div>
                <center>
                    <h4>Return to Admin Page <b><a href="adminpage.jsp">Click Here</a></b>.</h4>
                </center>
            </div>
        </div>
    </section>


</body>

</html>