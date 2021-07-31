// 3-Des test

#include "Des.h"
#include "stdio.h"
#include "string.h"
#include "memory.h"

void main()
{
	int a;
	char key[]={0,2,0,0,9,3,5,1,9,8,0,0,9,1,7},buf[255];
	char str[100]="";
	gets(str);

	memset(buf, 0, sizeof(buf));
	strcpy(buf, str);
	puts("\nBefore encrypting");
	puts(buf);

	Des_Go(buf, buf, sizeof(str), key, sizeof(key), ENCRYPT);
	puts("\nAfter encrypting");
	puts(buf);

	Des_Go(buf, buf, sizeof(str), key, sizeof(key), DECRYPT);
	puts("\nAfter decrypting");
	puts(buf);

	//puts("\nAfter 1-dncrypting");
	//puts(buf);

	getchar();
}
