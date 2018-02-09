#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int var1,var2,var3;
	char input1[1024];
	char input2[1024];

	fgets(input1, 1024, stdin);

	printf("%c", input1[0]);

	fgets(input2, 1024, stdin);

	printf("%c", input2[0]);
	var1 = input1[0] - '0';
	var2 = input2[0] - '0';
	var3 = var1 + var2;
	printf("%d\n", var3);
	return var3;
}