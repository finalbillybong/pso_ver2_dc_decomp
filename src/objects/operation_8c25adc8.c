#include "src/include/classes/TAdPSOPlay.h"
extern void operation_8c25ae10(void);
extern void call_8c25ae24(void);
void operation_8c25adc8(TAdPSOPlay *o)
{
    char *v1;
    v1 = (char *)o->f24;
    o->f24 += 1;
    if ((float)(int)v1 > 4.5f) {
        if (o->f30 != 0) {
            if (o->f30 != 1) {
                return;
            }
        } else {
            operation_8c25ae10();
            return;
        }
        call_8c25ae24();
    }
}
