#include <stdio.h>
#include<string.h>
int main(void) {
	char s1[100],s2[200];
	int i,j;
	gets(s1);
	gets(s2);
	i=strlen(s1);
	for(j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];	
	}
	s1[i]='\0';
	puts(s1);
	return 0;
}
