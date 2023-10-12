/*
 * File: 6-size.c
 * Auth: Brennan D Baraban
 */
#include<stdio.h>                                                                                                                  
/**                                                                                                                                 
* main Cette operation va donner la taille des différents types                                                                                                                
* Return: Always Zero                                                                                                       
*/                                                                                                                                 
int main(void)
{                                                                                                                                   
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
