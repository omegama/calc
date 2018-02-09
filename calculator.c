#include <stdio.h>
#include <unistd.h>
int main(int argc, char const *argv[])
{
	int var1,var2,var3;
	char input1[1024];
	char input2[1024];

	fgets(input1, 1024, stdin);
	if(input1[0]=='-'){
		var1 = (input1[1] - '0')*-1;
	}else{
		var1 = input1[0] - '0';
	}

	fgets(input2, 1024, stdin);

	if(input2[0]=='-'){
		var2 = (input2[1] - '0')*-1;
	}else{
		var2 = input1[0] - '0';
	}

	var3 = var1 + var2;
	printf("%d\n", var3);
	return 0;
}