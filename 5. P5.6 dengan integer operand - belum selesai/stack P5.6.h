#include <stdlib.h>

typedef struct node {
	StackData num;
	struct node *next;
} Node, *NodePtr;

typedef struct stackType {
	NodePtr top;
} StackType, *Stack;

Stack initStack() {
	Stack sp = (Stack) malloc(sizeof(StackType));
	sp -> top = NULL;
	return sp;
}

int empty(Stack S) {
	return (S -> top == NULL);
} //end empty

void push(Stack S, StackData n) {
	NodePtr np = (NodePtr) malloc(sizeof(Node));
	np -> num = n;
	np -> next = S -> top;
	S -> top = np;
} //end push

StackData pop(Stack S) {
	StackData RogueValue;
	RogueValue.ch = NULL;
	if (empty(S)) return RogueValue;
	StackData hold = S -> top -> num;
	NodePtr temp = S -> top;
	S -> top = S -> top -> next;
	free(temp);
	return hold;
} //end pop

StackData peek(Stack S){
	if(!empty(S))
		return S->top->num;
		
	StackData RogueValue;
	RogueValue.ch = NULL;
	return RogueValue;
}
