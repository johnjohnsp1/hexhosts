#define _GNU_SOURCE 
#include <stdio.h> 
#include <stdlib.h>

int main(void)	{

	FILE *fp;
	char *line = NULL;
	char *pch = NULL;
	char *pch2 = NULL;
	unsigned char b64[24];
	size_t len = 0;
	ssize_t read;
	
	fp = fopen("known_hosts", "r");
	
	if (fp == NULL)
	return 1;

	while ((read = getline(&line, &len, fp)) != -1)	{
		pch=strtok(line+3," ");
		pch=strtok(pch,"|");
		pch2=strtok(NULL,"|");
		__b64_pton(pch2,b64,sizeof(b64));
		
		for (int i=0; i<20; i++)	{
			printf("%02x", b64[i]);
		}
		
		printf(":");
		__b64_pton(pch,b64,sizeof(b64));
		
		for (int i=0; i<20; i++)	{
			printf("%02x", b64[i]);
		}
		
		printf("\n");
	}
	
	return 0;
}
