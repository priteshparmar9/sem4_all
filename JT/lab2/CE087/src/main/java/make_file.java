import product.*;
import customer.*;

import java.sql.*;

public class make_file{

    public static void main(String []args) throws Exception {
        Customer c1 = new Customer("Jack", "99999", "00000", "abc@xyz.com", "01-01-2000");
        Address t1 = new Address("Sopan Heights", "Raiya", "Rajkot", "Gujarat", 360007);
        c1.add_address(t1);

        Customer c2 = new Customer("Johney", "9995345", "4650000", "a5fsc@xyz.com", "1-01-1980");
        Address t2 = new Address("Sopan Luxuria", "Raiya", "Rajkot", "Gujarat", 360007);
        c2.add_address(t2);

        Customer c3 = new Customer("Jonsan", "999445", "0006450", "a56c@xyz.com", "21-01-1990");
        Address t3 = new Address("Swastik Highlands", "Raiya", "Rajkot", "Gujarat", 360007);
        c3.add_address(t3);

//        Book p = new Book(12322, 99, "R.D.", "12P03A", "Maths", "12th Standard book");
//        Book q = new Book(12324, 110, "H.C.", "123OPA", "Physics", "JEE PREP");
//
//        Articles a = new Articles("ADSDS", "Chessbase India", "Chess Super League Rule Book", "Sagar Shah", "Chessbase India");
//        Articles b = new Articles("FRGFFD", "Sports XYZ", "Dwejb Sbfsdu", "Mdsds Sds", "FDCSDd");
//
//        Magazine z = new Magazine("4536", "F1 - The Racing Car", "Racing News", "ABC Publishers", "Sports", 199);
//        Magazine y = new Magazine("1443", "Sports XYZ", "Dwejb Sbfsdu", "Mdsds Sds", "FDCSDd", 343);
//
//        Newspaper n = new Newspaper("354AD", "The Times Of India", "Newspaper", 4.5F, 20, "Morning");
//        Newspaper m = new Newspaper("4244A", "Gujarat Samachar", "Newspaper", 4.25F, 18, "Morning");

        String url = "jdbc:mysql://localhost/project";
        try(Connection con = DriverManager.getConnection(url,"root", "")){
            try(Statement stmt = con.createStatement()){
                if(stmt.execute("CREATE TABLE IF NOT EXISTS customer(primary_num varchar(30) NOT NULL PRIMARY KEY, sec_num varchar(30), name varchar(30), email varchar(30), dob varchar(15))")){
                    System.out.println("Error in creation of table.");
                    System.exit(-1);
                }
            }
            try(PreparedStatement pstmt = con.prepareStatement("INSERT INTO customer values(?, ?, ?, ?, ?)")){
                pstmt.setString(1,c1.get_p_n());
                pstmt.setString(2, c1.get_s_n());
                pstmt.setString(3,c1.get_name());
                pstmt.setString(4, c1.get_email());
                pstmt.setString(5, c1.get_dob());
                pstmt.addBatch();
                pstmt.executeBatch();
            }
        }catch (SQLException ex) {
            System.err.println("SQLException: " + ex.getMessage());
        }

    }
}
