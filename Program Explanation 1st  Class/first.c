#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    c = a+b;
    printf("sum is: %d", c);
    printf("\n");
    return 0;
}   

// Program explanation: 
// #include complier bolta hai yeah file include kar program ke start mein. 
// stdio.h ka fullform hai Standard Input Outpur Header File. 
// ismein likhe hote hein input output functions jaise ki 
// printf() screen pe output dikkhane ke liye 
// scanf keyboard se input lene ke liye. 
// Without including stdio.h, compiler printf aur scanf ko pehchaan nahi paata.

/**
 * int main() 
 * yeah program ke main entry point hai , jab program run hota hai sabse pehle 
 * main() function execute hota hai.
 * in ka matlab hai ye function integer return karega usually 0;
 */


 /**
  * { 
  * yeah openinga nd cur;y braces hai iska matlab hai ki main() function yahan se 
  * start ho raha hai. 
  * iske andar likha har line main() ke under execute hoga
  */

  /**
   * int a,b,c;
   * ye variable declaration hai. 
   * int ka matlab integer type(whole numbers jaise 2,5,-3)
   * Yahan a,b aur c teen variables declare kiye gaye hain 
   * a -> pehla number store karega. 
   * b -> dusra number store karega.
   * c -> dono ka sum stote hoga 
   */

   /**
    * scanf("%d%d", &a, &b);
    * Ye line user se do integer numbers input leti hai.
    * " %d%d " — iska matlab hai 2 integers input karne hain.
    * &a aur &b ka matlab hai :
    * & -> address-of-operator matlab input value store karni hai a ur b ke memory address pe. 
    */

    /**
     * "sum is: %d" =>  %d ek format specifier hai jo integer value print karne ke
     * liye hota hai.
     * c ki value %d ke jagah substitute ho jaati hai.
     */

     /**
      * return 0;
      * Ye main() function ko successfully terminate karta hai.
      * 0 ka matlab hota hai “program successfully execute ho gaya”.
      */