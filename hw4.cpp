/////////////////////////////////////// 
//             Cpp homework 4        //    
//              made by Lurk         //     
//              gedit + gcc          //      
/////////////////////////////////////// 
#include <stdio.h>
#include <stdlib.h>
# include <math.h>
int main () {
////////////////////part 1////////////////////
int i, j, k, x1, x2, year;
printf("\nPart1\n");
printf("Please enter first positive integer number:\n");
scanf("%d", &x1);
printf("Please enter second positive integer number:\n");
scanf("%d", &x2);
printf("10 <= x1 + x2 <= 20: %s\n", (((x1 + x2) >= 10) && ((x1 + x2) <= 20)) ? "true" : "false");
////////////////////part 2////////////////////
float x3;
printf("\nPart2\n");
printf("Please enter positive number:\n");
scanf("%f", &x3);
printf("you have entered %f\n", x3);
if (x3 != (int)round(x3)) {
  printf("it's not a natural number\n");
}  
else {
  printf("it's a natural number: "); 
  printf("%d\n",(int)round(x3));
  for (k = 2; k < x3; k++)
     if ((int)round(x3)%k == 0) {
     printf("it's not a prime number\n"); break;
     }
     else if (k == x3 - 1) {
     printf("it's a prime number\n"); 
     };    
}                
////////////////////part 3////////////////////
const int a = 8, b = 2;
printf("\nPart3\n");
printf("a=%d, b=%d, %s\n", a, b, (a == 10 || b == 10)||(a + b == 10) ? "true" : "false");
////////////////////part 4////////////////////
printf("\nPart4\n");
int size = 8;
int arr[size][size];
for (i = 0; i < size; i++) {
   for (j = 0; j < size; j++) {
   arr[i][j] = ((j == i) || (j == (size - i - 1))) ? 1 : 0; printf("%d ", arr[i][j]);
   };
printf("\n");
};
////////////////////part 5////////////////////
printf("\nPart5\n");
printf("Please enter a year number: ");
scanf("%d", &year);
printf("It's%sa leap year\n", (year%400 == 0)||((year%100 != 0)&&(year%4 == 0)) ? " " : " not ");
//////////////////////////////////////////////
return 0;
};
