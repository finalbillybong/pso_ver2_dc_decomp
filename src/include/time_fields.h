#ifndef PSO_TIME_FIELDS_H
#define PSO_TIME_FIELDS_H
/* Provisional accessed layouts; names do not assert original declarations. */
typedef struct TimeFields {unsigned short year;unsigned char month,day,hour,minute,second,weekday;} TimeFields;
typedef struct SystemTimeFields {unsigned short year;unsigned char month,day,hour,minute,second,weekday,extra;} SystemTimeFields;
typedef char check_TimeFields_year[(unsigned long)&((TimeFields *)0)->year==0?1:-1];
typedef char check_TimeFields_month[(unsigned long)&((TimeFields *)0)->month==2?1:-1];
typedef char check_TimeFields_day[(unsigned long)&((TimeFields *)0)->day==3?1:-1];
typedef char check_TimeFields_hour[(unsigned long)&((TimeFields *)0)->hour==4?1:-1];
typedef char check_TimeFields_minute[(unsigned long)&((TimeFields *)0)->minute==5?1:-1];
typedef char check_TimeFields_second[(unsigned long)&((TimeFields *)0)->second==6?1:-1];
typedef char check_TimeFields_weekday[(unsigned long)&((TimeFields *)0)->weekday==7?1:-1];
typedef char check_TimeFields_size[sizeof(TimeFields)==8?1:-1];
typedef char check_SystemTimeFields_year[(unsigned long)&((SystemTimeFields *)0)->year==0?1:-1];
typedef char check_SystemTimeFields_month[(unsigned long)&((SystemTimeFields *)0)->month==2?1:-1];
typedef char check_SystemTimeFields_day[(unsigned long)&((SystemTimeFields *)0)->day==3?1:-1];
typedef char check_SystemTimeFields_hour[(unsigned long)&((SystemTimeFields *)0)->hour==4?1:-1];
typedef char check_SystemTimeFields_minute[(unsigned long)&((SystemTimeFields *)0)->minute==5?1:-1];
typedef char check_SystemTimeFields_second[(unsigned long)&((SystemTimeFields *)0)->second==6?1:-1];
typedef char check_SystemTimeFields_weekday[(unsigned long)&((SystemTimeFields *)0)->weekday==7?1:-1];
typedef char check_SystemTimeFields_extra[(unsigned long)&((SystemTimeFields *)0)->extra==8?1:-1];
typedef char check_SystemTimeFields_size[sizeof(SystemTimeFields)==10?1:-1];
#endif
