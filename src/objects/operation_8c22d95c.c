typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c506350 S_L8c506350;
typedef struct S_L8c506350_34 S_L8c506350_34;
typedef struct S_L8c50638c S_L8c50638c;
typedef struct S_L8c50638c_34 S_L8c50638c_34;
typedef struct S_L8c5063c8 S_L8c5063c8;
typedef struct S_L8c5063c8_34 S_L8c5063c8_34;
typedef struct Object Object;
struct Object {
    char unknown0[0x28];
    int f28;
    char unknown2c[0x30];
    int f5c;
    int f60;
    int f64;
    char unknown68[0x2c];
    int f94;
};
struct S_L8c506350 {
    char unknown0[0x34];
    S_L8c506350_34 *f34;
};
struct S_L8c50638c {
    char unknown0[0x34];
    S_L8c50638c_34 *f34;
};
struct S_L8c5063c8 {
    char unknown0[0x34];
    S_L8c5063c8_34 *f34;
};
extern S_L8c506350 g_8c506350;
extern S_L8c50638c g_8c50638c;
extern S_L8c5063c8 g_8c5063c8;
extern int call_8c377f7c(int, int, void *);
void operation_8c22d95c(Object *o)
{
    int t1;
    int t2;
    int t3;
    o->f28 = 0;
    o->f5c = 0;
    o->f60 = 0;
    o->f64 = 0;
    if ((int)((&g_8c506350)->f34) > 0) {
        t1 = call_8c377f7c(1, 0, (void *)((&g_8c506350)->f34));
        if (t1 != -0x100) {
            o->f28 += t1;
            o->f60 = (int)(t1);
        } else {
            o->f94 = 0x15;
            return;
        }
    }
    if ((int)((&g_8c50638c)->f34) > 0) {
        t2 = call_8c377f7c(1, 0, (void *)((&g_8c50638c)->f34));
        if (t2 != -0x100) {
            o->f28 += t2;
            o->f5c = (int)(t2);
        } else {
            o->f94 = 0x15;
            return;
        }
    }
    if ((int)((&g_8c5063c8)->f34) > 0) {
        t3 = call_8c377f7c(1, 0, (void *)((&g_8c5063c8)->f34));
        if (t3 != -0x100) {
            o->f28 += t3;
            o->f64 = (int)(t3);
        } else {
            o->f94 = 0x15;
            return;
        }
    }
    if (o->f28 > 0) {
        o->f94 = 1;
        return;
    }
    o->f94 = 0x15;
}
