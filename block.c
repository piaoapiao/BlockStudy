#include <stdio.h>


void (^myBlock1)(void);
int main()
{

	^{printf("Hello,World!\n");}();
	
	myBlock1 =   ^(){printf("Hello,World!\n");};
	myBlock1();
	return 0;
}