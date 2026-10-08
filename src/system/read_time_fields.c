#include "src/include/time_fields.h"
/* Provisional field names. Callee writes through byte8 of the local record. */
void read_time_fields(TimeFields *output){SystemTimeFields value;((void (*)(SystemTimeFields *))0x8c36d3ca)(&value);output->year=value.year;output->month=value.month;output->day=value.day;output->hour=value.hour;output->minute=value.minute;output->second=value.second;output->weekday=value.weekday;}
