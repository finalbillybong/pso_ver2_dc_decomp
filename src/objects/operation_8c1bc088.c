#include "src/include/classes/TBoss4Uro.h"
typedef struct TBoss4Zako_p394 TBoss4Zako_p394;
struct TBoss4Zako_p394 {
    char unknown0[0x3a8];
    int f3a8;
};
extern void call_8c012884(TBoss4Uro *);
void TBoss4Uro_v71_8c1bc088(TBoss4Uro *o)
{
    if (o->f390 != 3) {
        call_8c012884(o);
        o->f394->f3a8 += 1;
        o->f390 = 3;
    }
}
