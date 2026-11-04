#include "src/include/classes/TObjCity_Season_Board.h"
void TObjCity_Season_Board_update_8c1d9384(TObjCity_Season_Board *o)
{
    o->f94 += 2;
    if (o->f94 >= 0x100) {
        o->f94 -= 0x100;
    }
}
