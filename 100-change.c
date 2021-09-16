#include "main.h"
#include <stdio.h>
#include <stdlib.h> 
/** * main - Prints the multiplication of two args numbers
* @argc: argument count 
* @argv: argument vector 
* * Return: Always zero 
*/
int main(int argc, char *argv[]){	
int n1 = 0;
if (argc == 1)	{		
n1 = atoi(argv[1]);		
If (n1 < 0) {
printf("%d\n", 0);
}
else {
printf("%d\n", n1 * 100);
}	
}	
else	{		
printf("Error\n");		
return (1);	
} 	
return (0);
}
