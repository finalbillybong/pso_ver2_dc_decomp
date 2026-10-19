typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x88];
    Arg0_88 *f88;
    char unknown8c[0x4];
    Arg0_90 *f90;
    int f94;
};
struct Arg0_88 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_90 {
    char unknown0[0x4];
    short f04;
};
extern int g_8c41bd10;
extern void operation_8c22e858(void *);
extern void operation_8c22d95c(void *);
extern void operation_8c22da28(void *);
extern void create_object_8c22dc70(void *);
extern void operation_8c22db2c(void *);
extern void operation_8c22dd38(void *);
extern void operation_8c22dd9c(void *);
extern void operation_8c22de98(void *);
extern void operation_8c22dfc8(void *);
extern void call_8c22e0c4(Object *);
extern void call_8c22e20c(Object *);
extern void operation_8c22e27c(void *);
extern void call_8c22e2cc(Object *);
extern void call_8c22e414(Object *);
extern void operation_8c22e47c(void *);
extern void call_8c22e4fc(Object *);
extern void operation_8c22e684(void *);
extern void operation_8c22e6ec(void *);
extern void operation_8c22ea28(void *);
extern void operation_8c22eb20(void *);
extern void operation_8c22e7c8(void *);
extern void operation_8c22e978(void *);
extern void operation_8c22e78c(void *);
void operation_8c22d748(Object *o)
{
    operation_8c22e858((void *)o);
    switch (o->f94) {
    case 0:
        operation_8c22d95c((void *)o);
        return;
    case 1:
        operation_8c22da28((void *)o);
        return;
    case 2:
        create_object_8c22dc70((void *)o);
        return;
    case 3:
        operation_8c22db2c((void *)o);
        return;
    case 4:
        if (g_8c41bd10 != 0) {
            if (o->f88 != 0) {
                o->f88->f04 |= 4;
            }
            if (o->f90 == 0) {
                return;
            }
            o->f90->f04 |= 4;
            return;
        }
        if (o->f88 != 0) {
            o->f88->f04 &= -5;
        }
        if (o->f90 != 0) {
            o->f90->f04 &= -5;
        }
        operation_8c22dd38((void *)o);
        return;
    case 5:
        operation_8c22dd9c((void *)o);
        return;
    case 6:
        operation_8c22de98((void *)o);
        return;
    case 7:
        operation_8c22dfc8((void *)o);
        return;
    case 8:
        call_8c22e0c4(o);
        return;
    case 9:
        call_8c22e20c(o);
        return;
    case 10:
        operation_8c22e27c((void *)o);
        return;
    case 11:
        call_8c22e2cc(o);
        return;
    case 12:
        call_8c22e414(o);
        return;
    case 13:
        operation_8c22e47c((void *)o);
        return;
    case 14:
        call_8c22e4fc(o);
        return;
    case 15:
        operation_8c22e684((void *)o);
        return;
    case 16:
        operation_8c22e6ec((void *)o);
        return;
    case 19:
        operation_8c22ea28((void *)o);
        return;
    case 20:
        operation_8c22eb20((void *)o);
        return;
    case 17:
        operation_8c22e7c8((void *)o);
        return;
    case 18:
        operation_8c22e978((void *)o);
        return;
    case 21:
        operation_8c22e78c((void *)o);
        return;
    }
}
