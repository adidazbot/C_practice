#include <stdio.h>
int main(void)
{
	int n;
	int *u;
	int m;
	int *ptr;

	n = 98;
	m = 500;
	u = &n;
	ptr = &m;
       	// remember that " & " is use to point the address of a variable and we already declare varibale u as a pointer 

	printf(" the value of the 'p' is : %p\n", u);// this prints the value of P
	// while 
	printf(" the address of the address of 'n' is : %p\n", &n);// this will print the address of n 
	*u = 300;
	printf(" value of n is: %d\n", n);
       	*ptr = 700;
	printf(" the value of m is : %d\n", m);	
	return (0);



	// this is the output of my code 
	// vagrant@ubuntu-focal:~$ ./play2
// the size of pointer on this device is : 8
// since the pointer hold address of variables lets check this out now we will declare int n as 98 and then point at n to see the output.
}
