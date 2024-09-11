#include <stdio.h>

int main(){
	float result;
	float curr;
	float next;
	char operator;

	scanf("%f %c %f", &curr, &operator, &next);

	switch (operator){
		case '+': result = curr+next; 
		  break;
		case '-': result = curr-next; 
		  break;
		case '/': 
			if (next != 0){
				result = curr/next;
			} else {
				puts("ZeroDivision error!");
				return 1;
			}
			break;
		case '*': result = curr*next; 
		  break;
	}
	printf("%f\n", result);
	return 0;
}