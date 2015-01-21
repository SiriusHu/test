#ifndef _DATETIME_H

#define _DATETIME_H

typedef struct{
	int year;
	int month;
	int day;
}DATETYPE;

typedef struct{
	int hour;
	int minute;
	int second;
}TIMETYPE;

int getdate(DATETYPE *date);
int gettime(TIMETYPE *time);

#endif
