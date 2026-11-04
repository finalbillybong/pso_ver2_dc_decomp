#include "src/include/classes/TBoss4Zako.h"
typedef struct TBoss4Zako_p394 TBoss4Zako_p394;
struct TBoss4Zako_p394 {
    char unknown0[0x3a8];
    int f3a8;
};
void set_fields_8c1bbd54(TBoss4Zako *o)
{
    o->f394->f3a8 += 1;
    o->f3c4 = 0;
    o->f390 = 3;
}
