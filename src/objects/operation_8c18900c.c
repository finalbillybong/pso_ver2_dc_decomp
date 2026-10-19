typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
    char unknown28[0x4];
    Arg0_2c *f2c;
    char unknown30[0x1c4];
    int f1f4;
};
extern void call_8c1890e0(Object *);
extern void operation_8c18935c(void *);
extern void call_8c18983c(Object *);
extern void operation_8c189480(void *);
extern void operation_8c1894f0(void *);
extern void call_8c189560(Object *);
extern void call_8c189568(Object *);
extern void call_8c1895f4(Object *);
void operation_8c18900c(Object *o)
{
    switch (o->f24) {
    case 0:
        call_8c1890e0(o);
        o->f24 = 1;
        return;
    case 1:
        operation_8c18935c((void *)o);
        return;
    case 2:
        call_8c18983c(o);
        return;
    case 3:
    case 10:
        if (o->f1f4 != 0) {
            ((void (*)(void *))(o->f1f4))((void *)(o->f2c));
        }
        o->f04 |= 1;
        return;
    case 5:
        operation_8c189480((void *)o);
        return;
    case 6:
        operation_8c1894f0((void *)o);
        return;
    case 7:
        call_8c189560(o);
        return;
    case 8:
        call_8c189568(o);
        return;
    case 9:
        call_8c1895f4(o);
        return;
    case 4:
        break;
    }
}
