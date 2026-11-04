#include "src/include/classes/TOHealGeneral.h"
typedef struct Frame Frame;
typedef struct TOHealGeneral_p30 TOHealGeneral_p30;
typedef struct Arg0_30_0 Arg0_30_0;
struct Frame {
    unsigned char f00;
    unsigned char f01;
    char unknown2[0x2];
};
extern void call_8c1cdd60(int, void *, Frame *);
extern void call_8c19f268(void *, unsigned char, unsigned char, int, int, int);
void operation_8c1cda9c(TOHealGeneral *o, int a1, int a2, int a3, int a4)
{
    Frame frame;
    if (!(o->f82 >= o->f86)) {
        call_8c1cdd60(a1, (void *)(&(&frame)->f01), (Frame *)((&frame)));
        call_8c19f268((void *)(*(Arg0_30_0 **)((char *)((char *)o->f30 + 0x0) + (o->f82 << 2))), (&frame)->f01, (&frame)->f00, a2, a3, a4);
        o->f82 += 1;
    }
}
