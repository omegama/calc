#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int var1,var2,var3;
	char input1[1024];
	char input2[1024];

	fgets(input1, 1024, stdin);
	var1=atoi(input1);
	fgets(input2, 1024, stdin);
	var2=atoi(input2);

	var3 = var1 + var2;
	printf("%d\n", var3);
	return 0;
}