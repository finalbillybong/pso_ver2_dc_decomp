typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b0 Arg0_3b0;
typedef struct S_vv65 S_vv65;
struct Object {
    char unknown0[0x39c];
    int f39c;
    char unknown3a0[0x10];
    Arg0_3b0 *f3b0;
};
struct Arg0_3b0 {
    char unknown0[0x94];
    int f94;
};
struct S_vv65 {
    char unknown0[0x4];
    short f04;
};
extern char g_8c327480[];
extern void call_8c1adcfc(Object *, int, float);
extern void operation_8c228e2c(int);
extern void call_8c1003d0(void *);
extern void operation_8c177748(int);
extern void call_8c1ae010(Object *, int);
void operation_8c1b6910(Object *o)
{
    S_vv65 *v65;
    if (4 > o->f39c) {
        call_8c1adcfc(o, 0xffffff, (float)(4 - (int)o->f39c) / 4.0f);
    }
    if (o->f39c == 0x2d) {
        if (o->f3b0 != 0) {
            o->f3b0->f94 = 1;
        }
        operation_8c228e2c((int)o);
    }
    if (o->f39c == 0xb9) {
        if (o->f3b0 != 0) {
            o->f3b0->f94 = 2;
        }
        call_8c1003d0((void *)((g_8c327480 + 0x91)));
    }
    if (o->f39c > 0x145) {
        if (o->f3b0 != 0) {
            v65 = (S_vv65 *)o->f3b0;
            v65->f04 |= 1;
            o->f3b0 = (Arg0_3b0 *)0;
        }
        operation_8c177748(0x32);
        call_8c1ae010(o, 6);
        return;
    }
    o->f39c += 1;
}
