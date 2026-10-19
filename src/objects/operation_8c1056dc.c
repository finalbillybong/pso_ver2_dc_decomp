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
    char unknown30[0x160];
    int f190;
};
extern void call_8c1057b4(Object *);
extern void call_8c105968(Object *);
extern void call_8c105ee0(Object *);
extern void operation_8c105b04(void *);
extern void operation_8c105b74(void *);
extern void call_8c105be4(Object *);
extern void call_8c105bec(Object *);
extern void call_8c105c78(Object *);
void operation_8c1056dc(Object *o)
{
    switch (o->f24) {
    case 0:
        call_8c1057b4(o);
        o->f24 = 1;
        return;
    case 1:
        call_8c105968(o);
        return;
    case 2:
        call_8c105ee0(o);
        return;
    case 5:
        operation_8c105b04((void *)o);
        return;
    case 6:
        operation_8c105b74((void *)o);
        return;
    case 7:
        call_8c105be4(o);
        return;
    case 8:
        call_8c105bec(o);
        return;
    case 9:
        call_8c105c78(o);
        return;
    case 3:
    case 10:
        if (o->f190 != 0) {
            ((void (*)(void *))(o->f190))((void *)(o->f2c));
        }
        o->f04 |= 1;
        return;
    case 4:
        break;
    }
}
