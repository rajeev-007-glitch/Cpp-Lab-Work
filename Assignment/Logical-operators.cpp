#include<iostream>
using namespace std;
int main() {

   int a = 5;
   int b = 20;
   int c ;

   if ( a && b ) {
      cout<<"Line 1 - Condition is true\n";
   }
	
   if ( a || b ) {
      cout<<"Line 2 - Condition is true\n";
   }
   
   /* lets change the value of  a and b */
   a = 0;
   b = 10;
	
   if ( a && b ) {
      cout<<"Line 3 - Condition is true\n";
   } else {
      cout<<"Line 3 - Condition is not true\n";
   }
	
   if ( !(a && b) ) {
      cout<<"Line 4 - Condition is true\n";
   }
	
}