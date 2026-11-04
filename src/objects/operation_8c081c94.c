#include "src/include/classes/TObjDoorKey.h"
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjDoorKey_v19_8c081c94(TObjDoorKey *o)
{
    play_se_8c05fbf8(0x4000a, (void *)(((char *)o + 0x3c)), 0, 0);
    o->f11c = 1;
}
