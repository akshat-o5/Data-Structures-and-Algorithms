public static void main(String[] args) {

    Scanner sc=new Scanner(System.in);
    String A=sc.next();
    /* Enter your code here. Print output to STDOUT. */

    String reverse = new StringBuffer(A).reverse().toString();

    if(reverse.equals(A))
    System.out.println("Yes");
    else
    System.out.println("No");
    sc.close();
