#include <stdio.h>
int main(void)
{
	int *u;
	//char k;
	//we are printing the address of the variable i in the computer storage 
	//printf("the address od variable 'i' is %p\n", &i);
	//printf("the address of variable 'j' is %p\n", &k);
	//return (0);
	//on the other hand pointers are basically variable use to locate another variable address.
	//and pointers are denoted with " * " which in a code might look liks this int *u; we are declaring u as a pointer which 8 bytes will be allocated in the memory
	//now this code will prove that a pointer is u
	printf(" the size of pointer on this device is : %lu\n", sizeof(u));
	return (0);
	// this is the output of my code 
	// vagrant@ubuntu-focal:~$ ./play2
// the size of pointer on this device is : 8
}
