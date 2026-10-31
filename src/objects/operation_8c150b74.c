typedef struct Sub {
    char unknown0[0x18];
    int f18;
} Sub;
typedef struct Object {
    char unknown0[0x3c];
    int f3c;
    float f40;
    char unknown44[0x98];
    Sub *fdc;
    char unknowne0[0x10];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    float ffc;
    char unknown100[0x21c];
    float f31c;
    char unknown320[0x78];
    int f398;
    char unknown39c[0xc];
    int f3a8;
} Object;
extern void operation_8c01c5f0(Object *);
extern int call_8c05fbf8(int, int, int, int);
extern void refresh_follow_effect_8c052180(void *);
void operation_8c150b74(Object *o)
{
    switch (o->f398) {
    case 0:
        o->ff0 = 4;
        o->f31c = -2.27f;
        o->f398 = 1;
        o->f3a8 = 0;
        break;
    case 1:
        operation_8c01c5f0(o);
        o->f40 += o->f31c;
        if (!(o->f40 > 4.6f)) {
            o->f40 = 4.6f;
            o->f398 = 2;
            o->fdc->f18 &= ~4;
            o->fdc->f18 |= 2;
            call_8c05fbf8(0x30008, (int)&o->f3c, 0, 0);
        }
        break;
    case 2:
        operation_8c01c5f0(o);
        if (!(o->ff8 < o->ffc - 1.5f)) {
            o->f398 = 3;
        }
        break;
    case -1:
        return;
    case 3:
        break;
    }
    refresh_follow_effect_8c052180(o);
}
