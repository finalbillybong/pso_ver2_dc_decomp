typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c053d84 S_c8c053d84;
typedef struct Object Object;
typedef struct S_x94592 S_x94592;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    short f28;
    char unknown2a[0x1a];
    Vector3 f44;
    char unknown50[0x10];
    short f60;
};
struct S_c8c053d84 {
    char unknown0[0xdc];
    int fdc;
};
struct S_x94592 {
    char unknown0[0x1c];
    Vector3 f1c;
};
extern int call_8c0dac90(Object *);
extern void call_8c0daabc(Object *);
extern S_c8c053d84 *lookup_object_by_id(unsigned short);
void operation_8c0daa28(Object *o)
{
    int t1;
    S_c8c053d84 *t2;
    if (o->f20 != 0 && o->f20 != 1) {
        if (o->f20 == 2) {
            goto L_8c0daa9e;
        }
        return;
    }
    t1 = call_8c0dac90(o);
    if (t1 == 1) {
        o->f20 = 2;
        call_8c0daabc(o);
        return;
    }
    if (t1 != 2) {
        t2 = lookup_object_by_id((unsigned short)(o->f60));
        if (t2 != 0) {
            o->f44 = ((S_x94592 *)(t2->fdc + o->f28 * 0x2c))->f1c;
            call_8c0daabc(o);
            return;
L_8c0daa9e:;
            ((void (*)(void))call_8c0daabc)();
        }
    }
}
