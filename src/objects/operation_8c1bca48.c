#include "src/include/classes/TBoss4Bishi.h"
typedef struct TBoss4Zako_p394 TBoss4Zako_p394;
struct TBoss4Zako_p394 {
    char unknown0[0x3a8];
    int f3a8;
};
void operation_8c1bca48(TBoss4Bishi *o)
{
    if (o->f390 != 3) {
        o->f394->f3a8 += 1;
        o->f390 = 3;
    }
}
