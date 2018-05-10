#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DESTLEN 8
int main(int argc, char** argv)
{
	char dest[DESTLEN];
	if (argc == 2)
		{
			printf(">>> 在可能發生的緩衝區溢出前 >>>\n");
			strcpy(dest, argv[1]);
			printf("<<< 在可能發生的緩衝區溢出後 <<<\n");
		}
	else
		{
			fprintf(stderr,"使用方式：%s 〈命令參數〉\n", argv[0]);
			fprintf(stderr,"\t字元長度（〈命令參數〉） < %i bytes\n", DESTLEN);
			exit(1);
		}
	return 0;
}