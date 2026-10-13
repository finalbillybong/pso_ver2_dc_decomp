typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c051d18 S_c8c051d18;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
typedef struct Arg0_30 Arg0_30;
struct Object {
    char unknown0[0x20];
    int f20;
    char unknown24[0x4];
    Arg0_28 *f28;
    Arg0_2c *f2c;
    Arg0_30 *f30;
};
struct S_c8c051d18 {
    char f00;
};
struct Arg0_30 {
    char unknown0[0x4];
    short f04;
};
extern S_c8c051d18 *operation_8c051d18(void *);
extern void call_8c05fbf8(int, int, int, int);
extern void call_8c051ce4(Arg0_30 *);
extern void request_resource_release(void *);
extern void call_8c18de08(S_c8c051d18 *);
void operation_8c260688(Object *o)
{
    S_c8c051d18 *t1;
    t1 = operation_8c051d18((void *)(o->f30));
    if (t1->f00 == 0) {
        call_8c05fbf8(0x50006, 0, 0, 0);
        call_8c051ce4((Arg0_30 *)(o->f30));
    } else {
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (Arg0_28 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (Arg0_2c *)0;
        }
        if (o->f30 != 0) {
            o->f30->f04 |= 1;
            o->f30 = (Arg0_30 *)0;
        }
        o->f20 = 2;
    }
    call_8c18de08(t1);
}
