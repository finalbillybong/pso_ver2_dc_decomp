typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
    char unknown28[0x8];
    Arg0_30 *f30;
    char unknown34[0x18c];
    int f1c0;
};
extern void call_8c1886f0(Object *);
extern void call_8c1888dc(Object *);
extern void call_8c188c4c(Object *);
extern void operation_8c188a30(void *);
extern void operation_8c188aa0(void *);
extern void call_8c188b10(Object *);
void operation_8c188640(Object *o)
{
    switch (o->f24) {
    case 0:
        call_8c1886f0(o);
        o->f24 = 1;
        return;
    case 1:
        call_8c1888dc(o);
        return;
    case 2:
        call_8c188c4c(o);
        return;
    case 3:
    case 8:
        if (o->f1c0 != 0) {
            ((void (*)(void *))(o->f1c0))((void *)(o->f30));
        }
        o->f04 |= 1;
        return;
    case 5:
        operation_8c188a30((void *)o);
        return;
    case 6:
        operation_8c188aa0((void *)o);
        return;
    case 7:
        call_8c188b10(o);
        return;
    case 4:
        break;
    }
}
