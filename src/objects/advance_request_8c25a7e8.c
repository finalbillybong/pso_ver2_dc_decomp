#include "src/include/classes/TObjCityMainWarpChallenge.h"
extern unsigned char operation_03d080(int);
void advance_request_8c25a7e8(TObjCityMainWarpChallenge *o)
{
    switch (o->f110) {
    case -1:
        break;
    case 0:
        o->f100 = 0;
        o->f110 = 1;
        break;
    case 1:
        if (o->f19c >= 0 && operation_03d080(o->f19c) == 1) o->f10c = 0;
        break;
    }
}
