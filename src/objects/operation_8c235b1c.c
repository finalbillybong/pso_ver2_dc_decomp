typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b20 S_L8c510b20;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
typedef struct Arg0_36c Arg0_36c;
struct S_L8c510b80 {
    char unknown0[0x10];
    short f10;
};
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x4];
    float f3c;
    char unknown40[0x4];
    float f44;
    char unknown48[0x324];
    Arg0_36c *f36c;
    char unknown370[0x4];
    int f374;
    int f378;
    int f37c;
};
struct S_L8c510b20 {
    int f00;
    int f04;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    float f3c;
    char unknown40[0x4];
    float f44;
};
extern S_L8c510b20 g_8c510b20;
extern S_L8c510b80 g_8c510b80;
extern char g_8c339668[];
extern char g_8c510b2c[];
extern S_c8c021ef8 *lookup_low_id(int);
extern float call_8c38d7d8(void *, void *);
extern float call_8c37e480(void *);
extern void operation_8c0ddbd0(short, int, int);
extern float call_8c130334(float, float);
extern void call_8c236e64(void *, int, void *);
extern void call_8c235da8(Object *);
void operation_8c235b1c(Object *o, int a1)
{
    int v77;
    S_c8c021ef8 *t1;
    float t2;
    float t3;
    float t4;
    float t5;
    float t6;
    float t7;
    float t8;
    float t9;
    float t10;
    float t11;
    float t12;
    t1 = lookup_low_id((int)((unsigned short)a1));
    if (t1 == 0) {
        return;
    }
    t2 = call_8c38d7d8((void *)((g_8c510b2c + 0x2c)), (void *)(&o->f3c));
    if (!(t2 > *(float *)(g_8c510b2c + 0x44))) {
        t3 = call_8c37e480((void *)(((char *)o + 0x360)));
        if (t3 == 0.0f) {
            (&g_8c510b80)->f10 |= 2;
            if (o->f37c == 0) {
                (&g_8c510b20)->f04 += 1;
                o->f37c = 1;
            }
        }
    }
    t4 = call_8c38d7d8((void *)((g_8c510b2c + 0x38)), (void *)(&o->f3c));
    if (!(t4 > *(float *)(g_8c510b2c + 0x44))) {
        t5 = call_8c37e480((void *)(((char *)o + 0x360)));
        if (t5 == 0.0f) {
            (&g_8c510b80)->f10 |= 1;
            if (o->f37c == 0) {
                (&g_8c510b20)->f00 += 1;
                o->f37c = 1;
            }
        }
    }
    t6 = call_8c38d7d8((void *)((void *)0x8c339610), (void *)(&o->f3c));
    if (!(t6 > *(float *)(g_8c510b2c + 0x44))) {
        t7 = call_8c37e480((void *)(((char *)o + 0x360)));
        if (t7 == 0.0f) {
            (&g_8c510b80)->f10 |= 0x10;
            if (o->f37c == 0) {
                (&g_8c510b20)->f00 += 3;
                o->f37c = 1;
            }
        }
    }
    t8 = call_8c38d7d8((void *)((void *)0x8c33961c), (void *)(&o->f3c));
    if (!(t8 > *(float *)(g_8c510b2c + 0x44))) {
        t9 = call_8c37e480((void *)(((char *)o + 0x360)));
        if (t9 == 0.0f) {
            (&g_8c510b80)->f10 |= 0x20;
            if (o->f37c == 0) {
                (&g_8c510b20)->f04 += 3;
                o->f37c = 1;
            }
        }
    }
    v77 = (int)(&g_8c510b80)->f10;
    if (((v77 & 2)) == 0 && ((v77 & 1)) == 0 && ((v77 & 0x20)) == 0 && ((v77 & 0x10)) == 0) {
    } else {
        if (((v77 & 8)) == 0 && ((v77 & 4)) == 0) {
            operation_8c0ddbd0(o->f20, (int)(g_8c339668 + 0x63), 0x1b);
        }
    }
    if ((((&g_8c510b80)->f10 & 0x33)) == 0 && o->f37c != 0) {
        o->f37c = 0;
    }
    t10 = call_8c37e480((void *)(((char *)o + 0x360)));
    if (t10 == 0.0f) {
        if (o->f374 == 0) {
            o->f378 += 1;
            operation_8c0ddbd0(o->f20, (int)(g_8c339668 + 0x6b), 0x1b);
        }
        o->f374 = 1;
    } else {
        o->f374 = 0;
    }
    t11 = call_8c38d7d8((void *)(&o->f3c), (void *)(&t1->f3c));
    if (t11 > *(float *)(g_8c510b2c + 0x1c)) {
        o->f34 = 0;
        return;
    }
    if (o->f34 != 1) {
        o->f34 = 1;
        t12 = call_8c130334(o->f3c - t1->f3c, o->f44 - t1->f44);
        v77 = (int)(t12 * 65536.0f / 6.28318405f);
        if (t10 == 0.0f) {
            call_8c236e64((void *)(&o->f3c), v77, (void *)(o->f36c));
            call_8c235da8(o);
        }
    }
}
