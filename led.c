#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char name[100] ="/sys/class/leds/beaglebone:green:usr1/brightness";
		FILE *fp;
		fp = fopen(name, "w");
		if(fp == NULL)
		{
			exit(-1);
		}
fprintf(fp, "%s", "none"); 
int i=0; for (i=0; i<5; i++) {
	fprintf(fp, "%s", "0");
	fflush(fp);
	sleep(1);
	fprintf(fp, "%s", "1");
	fflush(fp);
	sleep(1);
	}
fclose(fp);
	return 0;
}
