typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1e];
    int f24;
    char unknown28[0x28];
    int f50;
    int f54;
    int f58;
};
extern void call_8c158d24(Object *);
extern void call_8c158ef8(Object *);
extern void operation_8c159080(void *);
void operation_8c158c7c(Object *o)
{
    switch (o->f24) {
    case 0:
        call_8c158d24(o);
        return;
    case 1:
        call_8c158ef8(o);
        return;
    case 2:
        operation_8c159080((void *)o);
        return;
    case 3:
        if (o->f54 != 0) {
            ((void (*)(void))(o->f54))();
        }
        o->f04 |= 1;
        return;
    case 5:
        if (o->f50 != 0) {
            ((void (*)(void))(o->f50))();
        }
        o->f04 |= 1;
        return;
    case 4:
        if (o->f58 != 0) {
            ((void (*)(void))(o->f58))();
        }
        o->f04 |= 1;
        return;
    case 6:
        break;
    }
}
