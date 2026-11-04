#include "src/include/classes/TOKeyCave01.h"
typedef struct Frame Frame;
struct Frame {
    char f00;
    char f01;
    short f02;
    short f04;
    short f06;
    short f08;
    char f0a;
    char f0b;
};
extern void operation_8c0368a8(void *);
void operation_8c1354cc(TOKeyCave01 *o, int a1)
{
    Frame frame;
    (&frame)->f06 = 0;
    (&frame)->f00 = 4;
    (&frame)->f01 = 2;
    (&frame)->f00 = 5;
    (&frame)->f01 = 3;
    (&frame)->f02 = o->f20;
    (&frame)->f04 = *(int *)0x8c418248;
    (&frame)->f08 = o->f100;
    (&frame)->f0a = *(int *)0x8c44be04;
    (&frame)->f0b = a1;
    operation_8c0368a8((void *)(&frame));
}
