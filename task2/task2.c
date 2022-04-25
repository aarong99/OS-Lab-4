#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exit_program (int a, int b);

typedef int (*Op) (int a, int b);

int main (void)
{
  int a = 6;
  int b = 3;
  Op ops[5] = {&add, &subtract, &multiply, &divide, &exit_program};
  char opchar[3];
  
	while(1){
    printf("Operand 'a' : %d | Operand 'b' : %d\nSpecify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit): ", a, b);
    fgets(opchar, 3, stdin);
    printf("X = %d\n", ops[(int)opchar[0]-48](a,b));
  }

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b){
	printf("Adding 'a' and 'b'\n");
	return a + b;
}
int subtract (int a, int b){
	printf("Subtracting 'a' and 'b'\n");
	return a-b;
}
int multiply (int a, int b){
	printf("Multipling 'a' and 'b'\n");
	return a*b;
}
int divide (int a, int b){
	printf("Dividing 'a' and 'b'\n");
	return a/b;
}
int exit_program (int a, int b){
	exit(0);
}