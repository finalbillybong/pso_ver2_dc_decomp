#include "src/include/classes/TOMineTrap.h"
extern void create_effect_777c(void *, int);
void TOMineTrap_v98_8c0fe9e4(TOMineTrap *o)
{
    switch (o->f364) {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    default:
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8b);
        return;
    case 15:
    case 16:
    case 17:
    case 18:
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8e);
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8e);
        return;
    case 6:
    case 7:
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8d);
        create_effect_777c((void *)(((char *)o + 0x3c)), 0x8d);
        return;
    }
}
