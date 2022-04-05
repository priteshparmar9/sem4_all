/*
 * Generated by the Jasper component of Apache Tomcat
 * Version: Apache Tomcat/9.0.55
 * Generated at: 2022-03-17 04:19:35 UTC
 * Note: The last modified time of this file was set to
 *       the last modified time of the source file after
 *       generation to assist with modification tracking.
 */
package org.apache.jsp.WEB_002dINF.view;

import javax.servlet.*;
import javax.servlet.http.*;
import javax.servlet.jsp.*;

public final class login_jsp extends org.apache.jasper.runtime.HttpJspBase
    implements org.apache.jasper.runtime.JspSourceDependent,
                 org.apache.jasper.runtime.JspSourceImports {

  private static final javax.servlet.jsp.JspFactory _jspxFactory =
          javax.servlet.jsp.JspFactory.getDefaultFactory();

  private static java.util.Map<java.lang.String,java.lang.Long> _jspx_dependants;

  private static final java.util.Set<java.lang.String> _jspx_imports_packages;

  private static final java.util.Set<java.lang.String> _jspx_imports_classes;

  static {
    _jspx_imports_packages = new java.util.HashSet<>();
    _jspx_imports_packages.add("javax.servlet");
    _jspx_imports_packages.add("javax.servlet.http");
    _jspx_imports_packages.add("javax.servlet.jsp");
    _jspx_imports_classes = null;
  }

  private volatile javax.el.ExpressionFactory _el_expressionfactory;
  private volatile org.apache.tomcat.InstanceManager _jsp_instancemanager;

  public java.util.Map<java.lang.String,java.lang.Long> getDependants() {
    return _jspx_dependants;
  }

  public java.util.Set<java.lang.String> getPackageImports() {
    return _jspx_imports_packages;
  }

  public java.util.Set<java.lang.String> getClassImports() {
    return _jspx_imports_classes;
  }

  public javax.el.ExpressionFactory _jsp_getExpressionFactory() {
    if (_el_expressionfactory == null) {
      synchronized (this) {
        if (_el_expressionfactory == null) {
          _el_expressionfactory = _jspxFactory.getJspApplicationContext(getServletConfig().getServletContext()).getExpressionFactory();
        }
      }
    }
    return _el_expressionfactory;
  }

  public org.apache.tomcat.InstanceManager _jsp_getInstanceManager() {
    if (_jsp_instancemanager == null) {
      synchronized (this) {
        if (_jsp_instancemanager == null) {
          _jsp_instancemanager = org.apache.jasper.runtime.InstanceManagerFactory.getInstanceManager(getServletConfig());
        }
      }
    }
    return _jsp_instancemanager;
  }

  public void _jspInit() {
  }

  public void _jspDestroy() {
  }

  public void _jspService(final javax.servlet.http.HttpServletRequest request, final javax.servlet.http.HttpServletResponse response)
      throws java.io.IOException, javax.servlet.ServletException {

    if (!javax.servlet.DispatcherType.ERROR.equals(request.getDispatcherType())) {
      final java.lang.String _jspx_method = request.getMethod();
      if ("OPTIONS".equals(_jspx_method)) {
        response.setHeader("Allow","GET, HEAD, POST, OPTIONS");
        return;
      }
      if (!"GET".equals(_jspx_method) && !"POST".equals(_jspx_method) && !"HEAD".equals(_jspx_method)) {
        response.setHeader("Allow","GET, HEAD, POST, OPTIONS");
        response.sendError(HttpServletResponse.SC_METHOD_NOT_ALLOWED, "JSPs only permit GET, POST or HEAD. Jasper also permits OPTIONS");
        return;
      }
    }

    final javax.servlet.jsp.PageContext pageContext;
    javax.servlet.http.HttpSession session = null;
    final javax.servlet.ServletContext application;
    final javax.servlet.ServletConfig config;
    javax.servlet.jsp.JspWriter out = null;
    final java.lang.Object page = this;
    javax.servlet.jsp.JspWriter _jspx_out = null;
    javax.servlet.jsp.PageContext _jspx_page_context = null;


    try {
      response.setContentType("text/html; charset=UTF-8");
      pageContext = _jspxFactory.getPageContext(this, request, response,
      			null, true, 8192, true);
      _jspx_page_context = pageContext;
      application = pageContext.getServletContext();
      config = pageContext.getServletConfig();
      session = pageContext.getSession();
      out = pageContext.getOut();
      _jspx_out = out;

      out.write("\n");
      out.write("<!DOCTYPE html>\n");
      out.write("<html>\n");
      out.write("<head>\n");
      out.write("<link href=\"https://cdn.jsdelivr.net/npm/bootstrap@5.1.3/dist/css/bootstrap.min.css\" rel=\"stylesheet\" integrity=\"sha384-1BmE4kWBq78iYhFldvKuhfTAU6auU8tT94WrHftjDbrCEXSU1oBoqyl2QvZ6jIW3\" crossorigin=\"anonymous\">\n");
      out.write("<style>\n");
      out.write("	.gradient-custom {\n");
      out.write("  /* fallback for old browsers */\n");
      out.write("  background: #6a11cb;\n");
      out.write("\n");
      out.write("  /* Chrome 10-25, Safari 5.1-6 */\n");
      out.write("  background: -webkit-linear-gradient(to right, rgba(106, 17, 203, 1), rgba(37, 117, 252, 1));\n");
      out.write("\n");
      out.write("  /* W3C, IE 10+/ Edge, Firefox 16+, Chrome 26+, Opera 12+, Safari 7+ */\n");
      out.write("  background: linear-gradient(to right, rgba(106, 17, 203, 1), rgba(37, 117, 252, 1))\n");
      out.write("}\n");
      out.write("</style>\n");
      out.write("<meta charset=\"UTF-8\">\n");
      out.write("<title>Login</title>\n");
      out.write("</head>\n");
      out.write("<body>\n");
      out.write("\n");
      out.write("	");

		
		if (session.getAttribute("email") == null) {
			if(session.getAttribute("error") != null){
				
	
      out.write("\n");
      out.write("		<script>\n");
      out.write("			alert('");
      out.print(session.getAttribute("error"));
      out.write("');\n");
      out.write("		</script>\n");
      out.write("	");

			}
				session.setAttribute("error", null);
	
      out.write("\n");
      out.write("\n");
      out.write("	<section class=\"vh-100 gradient-custom\">\n");
      out.write("		<div class=\"container py-5 h-100\">\n");
      out.write("			<div\n");
      out.write("				class=\"row d-flex justify-content-center align-items-center h-100\">\n");
      out.write("				<div class=\"col-12 col-md-8 col-lg-6 col-xl-5\">\n");
      out.write("					<div class=\"card bg-dark text-white\" style=\"border-radius: 1rem;\">\n");
      out.write("						<div class=\"card-body p-5 text-center\">\n");
      out.write("\n");
      out.write("							<form action=\"validateLogin\" method=\"post\">\n");
      out.write("								<div class=\"mb-md-5 mt-md-4 pb-5\">\n");
      out.write("\n");
      out.write("									<h2 class=\"fw-bold mb-2 text-uppercase\">Login</h2>\n");
      out.write("									<p class=\"text-white-50 mb-5\">Please enter your email and\n");
      out.write("										password!</p>\n");
      out.write("									<div class=\"form-outline form-white mb-4\">\n");
      out.write("										<input type=\"email\" id=\"typeEmailX\"\n");
      out.write("											class=\"form-control form-control-lg\" name=\"email\" /> <label\n");
      out.write("											class=\"form-label\" for=\"typeEmailX\">Email</label>\n");
      out.write("									</div>\n");
      out.write("\n");
      out.write("									<div class=\"form-outline form-white mb-4\">\n");
      out.write("										<input type=\"password\" id=\"typePasswordX\"\n");
      out.write("											class=\"form-control form-control-lg\" name=\"password\"/> <label\n");
      out.write("											class=\"form-label\" for=\"typePasswordX\">Password</label>\n");
      out.write("									</div>\n");
      out.write("							<p class=\"small mb-5 pb-lg-2\">\n");
      out.write("								<a class=\"text-white-50\" href=\"#!\">Forgot password?</a>\n");
      out.write("							</p>\n");
      out.write("\n");
      out.write("							<button class=\"btn btn-outline-light btn-lg px-5\" type=\"submit\">Login</button>\n");
      out.write("							</form>\n");
      out.write("\n");
      out.write("						</div>\n");
      out.write("						<div>\n");
      out.write("							<p class=\"mb-0\">\n");
      out.write("								Don't have an account? <a href=\"signup\"\n");
      out.write("									class=\"text-white-50 fw-bold\">Sign Up</a>\n");
      out.write("							</p>\n");
      out.write("						</div>\n");
      out.write("\n");
      out.write("					</div>\n");
      out.write("				</div>\n");
      out.write("			</div>\n");
      out.write("		</div>\n");
      out.write("	</section>\n");
      out.write("	");

		} else {
			//response.sendRedirect("index");
			
      out.write("\n");
      out.write("			");
      if (true) {
        _jspx_page_context.forward("/index");
        return;
      }
      out.write("\n");
      out.write("			");

		}
	
      out.write("\n");
      out.write("</body>\n");
      out.write("</html>\n");
      out.write("\n");
      out.write("\n");
    } catch (java.lang.Throwable t) {
      if (!(t instanceof javax.servlet.jsp.SkipPageException)){
        out = _jspx_out;
        if (out != null && out.getBufferSize() != 0)
          try {
            if (response.isCommitted()) {
              out.flush();
            } else {
              out.clearBuffer();
            }
          } catch (java.io.IOException e) {}
        if (_jspx_page_context != null) _jspx_page_context.handlePageException(t);
        else throw new ServletException(t);
      }
    } finally {
      _jspxFactory.releasePageContext(_jspx_page_context);
    }
  }
}