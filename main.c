#include <stdio.h>
#include "datetime.h"

int main(){
	DATETYPE d;
	TIMETYPE tt;

	getdate(&d);
	gettime(&tt);

	printf("date: %04d-%02d-%02d\n", d.year, d.month, d.day);
	printf("time: %02d:%02d:%02d\n", tt.hour, tt.minute, tt.second);
	return 0;
}
