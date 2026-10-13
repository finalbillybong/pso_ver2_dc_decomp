typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
    char unknown2c[0x8];
    int f34;
    Arg0_38 *f38;
    char unknown3c[0x28];
    Arg0_64 *f64;
    char unknown68[0x310];
    int f378;
};
extern void call_8c3827d8(void *);
extern void call_8c38ae68(void);
extern void call_8c382a40(void *);
extern void call_8c37df90(int, void *);
extern void call_8c37e3d0(int, void *);
extern int operation_8c03d338(void);
extern void call_8c3a944a(void *);
extern void call_8c01cd20(Object *);
extern void call_8c38ad10(void);
void operation_8c129328(Object *o)
{
    int t1;
    if (((o->f34 & 0x8000000)) == 0) {
        call_8c3827d8((void *)(o->f28));
        call_8c38ae68();
        call_8c382a40((void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        if (o->f378 != 0) {
            call_8c37e3d0(0, (void *)(((char *)o + 0x37c)));
        }
        t1 = operation_8c03d338();
        if (t1 == 1) {
            call_8c3a944a((void *)(o->f38));
        } else {
            call_8c01cd20(o);
        }
        call_8c38ad10();
    }
}
