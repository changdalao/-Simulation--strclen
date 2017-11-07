//strclenº¯Êı
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strlen(const char *p)
{
	int count=0;
	assert(p!=NULL);
	while(*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}
int main()
{
	char arr[]="123456";
	printf("%u\n",(unsigned)my_strlen(arr));
	return 0;
}
