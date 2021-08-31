#include "main.h"
/** 
* main - Prints the first 98 fibonacci numbers
* * Return: Nothing! 
*/int main(void){
int i = 0;
int j=1, k=2;
while (i < 96)	{		
if (i == 0)			
_putchar(j);		
else if (i == 1)			
_putchar(k);		
else {			
k += j;	
j = k - j;			
_putchar(k);		
} 		
++i;	
} 	
_putchar(' ');
return (0);
}
