#include "src/include/types/TimerRecord.h"
typedef struct TimerRecord_p34 TimerRecord_p34;
extern int operation_8c051d18(void *);
extern void operator_delete_8c18de08(int);
void operation_8c1e6a58(TimerRecord *o)
{
    int t1;
    if (o->f20 != 1 && o->f20 != 3) {
        return;
    }
    t1 = operation_8c051d18((void *)(o->f34));
    o->f28 = 0;
    while (*(char *)((char *)((char *)t1 + 0x0) + (o->f28)) != 0) {
        o->f28 += 1;
    }
    operator_delete_8c18de08(t1);
}
