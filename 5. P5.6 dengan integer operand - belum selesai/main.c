/* nomor 5 : memodifikasi program P5.6 untuk menerima input lebih dari 1 angka */

#include <stdio.h>
#include <ctype.h>
typedef struct {
	char ch;
} StackData;

#include "stack P5.6.h"

int main() {
	int readConvert(char[]);
	void printPostfix(char[], int);
	char post[50];

	int n = readConvert(post);
	printPostfix(post, n);
} //end main

int readConvert(char post[]) {
	char getToken(void), token, c;
	int precedence(char);
	int tanda = 0;
	StackData temp;
	int h = 0;
	Stack S = initStack();
	printf("Type an infix expression and press Enter\n");
	token = getToken();
	while (token != '\n') {
		if (isdigit(token)){
            post[h++] = token;
		}
		else if (token == '(') {
			temp.ch = token;
			push(S, temp);
		}
		else if (token == ')')
			while ((c = pop(S).ch) != '(') post[h++] = c;
		else {
            // '#' sebagai penanda bahwa karakter selanjutnya yang diinput user adalah operator.
            // hal itu menjadi tanda berakhirnya bilangan sebelumnya.
            // '#' nantinya tidak akan di print. jika program menemukan '#' maka dia akan mencetak spasi (agar memisahkan 2 bilangan)
            post[h++] = '#';
			while (!empty(S) &&
						 precedence(peek(S).ch) >= precedence(token))
				post[h++] = pop(S).ch;
			temp.ch = token;
			push(S, temp);
		}
		token = getToken();
	} //end while
	while (!empty(S)) post[h++] = pop(S).ch;
	return h; //the size of the expression
} //end readConvert

void printPostfix(char post[], int n) {
	printf("\nThe postfix form is \n");
	int h;
	for (h = 0; h < n; h++){
        if(post[h] != '#'){
            printf("%c", post[h]);
        }
		if(!isdigit(post[h+1])){
			//untuk memisahkan antar bilangan serta operator
			printf(" ");
		}
	}
	printf("\n");
} //end printPostfix

char getToken() {
	char ch;
	while ((ch = getchar()) == ' ') ; //empty body
	return ch;
} //end getToken


int precedence(char c) {
   switch (c) {
      case '(': return 0;
      case '+':
      case '-': return 3;
      case '*':
      case '/': return 5;
   }//end switch
} //end precedence

