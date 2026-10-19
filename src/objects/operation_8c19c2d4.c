typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_384 Arg0_384;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
    char unknown28[0x35c];
    Arg0_384 *f384;
    char unknown388[0x10];
    int f398;
    int f39c;
};
extern void call_8c19c3a0(Object *);
extern void call_8c19c5e4(Object *);
extern void operation_8c19c8bc(void *);
extern void operation_8c19c9f4(void *);
extern void operation_8c19c804(void *);
extern void operation_8c15b9a4(void);
void operation_8c19c2d4(Object *o)
{
    switch (o->f24) {
    case 0:
        call_8c19c3a0(o);
        return;
    case 1:
        call_8c19c5e4(o);
        return;
    case 2:
        operation_8c19c8bc((void *)o);
        return;
    case 3:
        operation_8c19c9f4((void *)o);
        return;
    case 4:
        operation_8c19c804((void *)o);
        return;
    case 5:
        if (o->f398 != 0) {
            ((void (*)(void *))(o->f398))((void *)(o->f384));
        }
        operation_8c15b9a4();
        o->f04 |= 1;
        return;
    case 7:
        if (o->f39c != 0) {
            ((void (*)(void))(o->f39c))();
        }
        operation_8c15b9a4();
        o->f04 |= 1;
        return;
    case 6:
        break;
    }
}
