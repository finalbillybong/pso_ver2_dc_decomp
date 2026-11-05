#include "src/include/classes/TOKey.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x8];
    short f08;
    char f0a;
    char f0b;
};
extern int g_8c44be04;
extern "C" char g_8c30ff14[];
extern "C" void game_ADXT_StartFname_wrapper_8c1005bc(int);
extern "C" void operation_03cf50(unsigned short);
extern "C" void operation_03cfe4(unsigned short);
extern "C" void TOKey_vslot24_8c1136b0(TOKey *o, Arg1 *a1)
{
    if (((a1->f0b & 2)) != 0 && a1->f0a == g_8c44be04) {
        game_ADXT_StartFname_wrapper_8c1005bc((int)(g_8c30ff14 + 0x15));
    }
    if (((a1->f0b & 1)) != 0) {
        operation_03cf50((unsigned short)(a1->f08));
    } else {
        operation_03cfe4((unsigned short)(a1->f08));
    }
    switch (o->f10c) {
    case 0:
        o->v19();
        o->f10c = 1;
        return;
    case 1:
        o->v20();
        o->f10c = 0;
    }
}
