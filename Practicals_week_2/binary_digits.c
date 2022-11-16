#include <stdio.h>
#include <math.h>

int main(void) {

// variable Declaration
   int i, x, temp, digits;
   float y;
   char z[60];

   x = 33554431; // 4-byte integer
   y = (float) x; // Convert to 4-byte float


// Convert to binary number (string)
   i = 0; temp = x;
   while (temp > 0) {
     sprintf(&z[i], "%1d", temp%2);
     temp = temp / 2;
     i++;
   }

   z[i] = '\0'; // Terminating the string with null
       

// ceiling the values to get the number of binary digits 
   digits = ceil(logf(y) / logf(2));
   printf("The number of digits is %d\n", digits);



   printf("x = %d,  y = %f, x in binary = %s\n", x, y, z);

}