typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
typedef struct Arg0_90 Arg0_90;
struct Object {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x4];
    float f74;
    char unknown78[0x10];
    Arg0_88 *f88;
    int f8c;
    Arg0_90 *f90;
    char unknown94[0x4];
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
};
struct S_c8c021ef8 {
    char unknown0[0x20];
    short f20;
    char unknown22[0x30e];
    short f330;
};
extern S_g8c418248 *g_8c418248;
extern int operation_03d080(unsigned short);
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void call_8c1373a0(void *, int);
extern int active_unflagged_8c05b258(void *);
extern void call_8c02a5a8(int, short, short);
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c05fd7c(int, Object *, void *, int, int);
void operation_8c137050(Object *o)
{
    int v1;
    float v2;
    int v9;
    int v12;
    int v16;
    short v17;
    char *v64;
    int t1;
    S_c8c021ef8 *t2;
    float t3;
    S_c8c021ef8 *t4;
    int t5;
    v1 = (int)(1.0f <= o->f74);
    t1 = operation_03d080((unsigned short)(o->f90));
    if (v1 == (unsigned char)t1) {
        if (o->f98 > 0) {
            o->f98 -= 1;
            v9 = (int)0;
        } else {
            t2 = lookup_low_id((int)g_8c418248);
            if (t2 != 0) {
                v2 = (float)o->f6c;
                v2 = (float)(v2 * v2);
                t3 = squared_distance_xz((void *)(((char *)o + 0x3c)), (void *)(((char *)t2 + 0x3c)));
                if (v2 > t3) {
                    v12 = (int)1;
                    goto L_8c1370c2;
                }
                if (t3 > (v2 + 2500.0f)) {
                    o->f98 = 0x3c;
                }
            }
            v9 = (int)0;
        }
        v12 = (int)v9;
L_8c1370c2:;
        if (v12 != 0) {
            v16 = (int)(o->f8c == 0);
            call_8c1373a0((void *)(o->f88), v16);
            o->fa4 += 1;
            if (o->fa4 >= o->f9c) {
                t4 = lookup_low_id((int)g_8c418248);
                o->fa4 = 0;
                o->f9c = 0x1e;
                t5 = active_unflagged_8c05b258((void *)t4);
                if (t5 != 0) {
                    v17 = t4->f330 - o->fa0;
                    if (!(v17 >= 0)) {
                        v17 = (int)0;
                    }
                    call_8c02a5a8(0xffff, t4->f20, v17);
                }
            }
            o->fa8 += 1;
        } else {
            o->f9c = 0x96;
            o->fa8 = 0;
        }
        v64 = (char *)o->fa8;
        if ((int)(v64) == 1) {
            call_8c05fbf8(0x4001b, (void *)(((char *)o + 0x3c)), 0, 0);
            return;
        }
        if ((int)(v64) > 0x3c) {
            call_8c05fd7c(0x4001c, o, (void *)(((char *)o + 0x3c)), 0, 0);
        }
    }
}
