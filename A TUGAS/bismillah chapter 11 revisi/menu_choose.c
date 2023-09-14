#include "library.h"

/*
 * Displays a lettered menu with the current values of search parameters.
 * Returns the letter the user enters. A letter in the range a..h selects
 * a parameter to change; q quits, accepting search parameters shown.
 * Post: first nonwhitespace character entered is returned
 */
char
menu_choose(search_params_t params) /* input - current search parameter
 bounds */
{
 char choice;
 
 printf("Select by letter a search parameter to set or enter");
 printf("q to\naccept parameters shown.\n\n");
 printf("     Search parameter ");
 printf("Current value\n\n");
 printf("[a] Low bound for stock number 			%4d\n",  params.low_stock);
 printf("[b] High bound for stock number			%4d\n", params.high_stock);
 printf("[c] Low bound for category 			%s\n", params.low_category);
 printf("[d] High bound for category 			%s\n", params.high_category);
 printf("[e] Low bound for technical description 	%s\n", params.low_tech_descript);
 printf("[f] High bound for technical description 	%s\n", params.high_tech_descript);
 printf("[g] Low bound for price 			$%7.2f\n", params.low_price);
 printf("[h] High bound for price 			$%7.2f\n\n", params.high_price);

 printf("Selection> ");
 scanf(" %c", &choice);

 return (choice);
} 
