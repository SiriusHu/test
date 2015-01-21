#include "time.h"
#include "datetime.h"

int gettime(TIMETYPE *t){
	long ti;
	struct tm *tm;

	time(&ti);
	tm = localtime(&ti);

	t->hour = tm->tm_hour;
	t->minute = tm->tm_min;
	t->second = tm->tm_sec;

}
