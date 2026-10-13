typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
    char unknown68[0x2a4];
    short f30c;
};
extern void call_8c1e9240(Object *, void *, void *);
extern void call_8c1f0ab8(Object *);
extern void call_8c1f0bc8(Object *);
extern void call_8c1f0764(Object *);
extern void operation_8c05426c(void *, int, int);
extern void call_8c03bdb0(void *);
void operation_8c1f0a00(Object *o, int a1)
{
    switch ((short)a1) {
    case 3:
        if (o->f30c != 4) {
            return;
        }
        call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
        return;
    case 5:
        call_8c1f0ab8(o);
        return;
    case 0:
        call_8c1f0bc8(o);
        return;
    case 1:
        call_8c1f0764(o);
        return;
    case 6:
        operation_8c05426c((void *)o, 0, 1);
        call_8c03bdb0((void *)(((char *)o + 0x58c)));
        return;
    case 2:
    case 4:
    case 7:
    case 8:
        break;
    }
}
