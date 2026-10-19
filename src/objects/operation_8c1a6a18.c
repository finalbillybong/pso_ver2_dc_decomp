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
    char unknown28[0x38];
    int f60;
    int f64;
};
extern void operation_8c1a6acc(void *);
extern void operation_8c1a6cb8(void *);
extern void operation_8c1a6de0(void *);
extern void operation_8c1a6e78(void *);
extern void operation_8c1a6f8c(void *);
void operation_8c1a6a18(Object *o)
{
    switch (o->f24) {
    case 0:
        operation_8c1a6acc((void *)o);
        return;
    case 1:
        operation_8c1a6cb8((void *)o);
        return;
    case 2:
        operation_8c1a6de0((void *)o);
        return;
    case 3:
        operation_8c1a6e78((void *)o);
        return;
    case 4:
        operation_8c1a6f8c((void *)o);
        return;
    case 6:
        if (o->f64 != 0) {
            ((void (*)(void))(o->f64))();
        }
        o->f04 |= 1;
        return;
    case 7:
        if (o->f60 != 0) {
            ((void (*)(void))(o->f60))();
        }
        o->f04 |= 1;
        return;
    case 5:
        break;
    }
}
