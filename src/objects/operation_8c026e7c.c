typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_338 Arg0_338;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_3b8_s468 Arg0_3b8_s468;
typedef struct Arg0_64 Arg0_64;
typedef struct S_vv40 S_vv40;
typedef struct S_vv40_s458 S_vv40_s458;
typedef struct S_vv41_s430 S_vv41_s430;
typedef struct S_vv41_s440 S_vv41_s440;
typedef struct S_vv41_s448 S_vv41_s448;
typedef struct S_x80240 S_x80240;
typedef struct S_x82352 S_x82352;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x42];
    Arg0_64 *f64;
    char unknown68[0x2d0];
    Arg0_338 *f338;
    char unknown33c[0x68];
    float f3a4;
    float f3a8;
    float f3ac;
    char unknown3b0[0x8];
    Arg0_3b8 *f3b8;
    char unknown3bc[0x98];
    unsigned short f454;
    char unknown456[0x6a];
    int f4c0;
    char unknown4c4[0x20];
    int f4e4;
};
struct Arg0_338 {
    int f00;
};
struct S_x80240 {
    char unknown0[0x48];
    int f48;
};
struct S_x82352 {
    char unknown0[0x48];
    int f48;
};
struct S_vv40 {
    char unknown0[0x458];
    int f458;
};
struct S_vv40_s458 {
    char unknown0[0x4];
    unsigned short f04;
    short f06;
    float f08;
    float f0c;
};
struct S_vv41_s430 {
    char unknown0[0x10];
    short f10;
    char unknown12[0x6];
    short f18;
};
struct S_vv41_s448 {
    char unknown0[0x2];
    short f02;
    short f04;
    short f06;
};
struct S_vv41_s440 {
    char unknown0[0x2];
    short f02;
    short f04;
    short f06;
};
struct Arg0_3b8 {
    char unknown0[0x440];
    unsigned short f440;
};
struct Arg0_3b8_s468 {
    char unknown0[0x4];
    int f04;
};
extern int g_8c418248;
extern float call_8c37eb0c(void *);
extern float call_8c38c154(void *);
extern int operation_8c2097a8(int);
extern int operation_8c027070(void *);
extern int mask_any(void *, unsigned int);
extern void operation_8c1acbfc(void *, int);
extern void operation_8c0d9e70(int);
extern void call_8c0d9d10(Arg0_3b8 *);
typedef struct Short4 {
    short a;
    short b;
    short c;
    short d;
} Short4;
void operation_8c026e7c(Object *o)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v13;
    int v15;
    S_vv40 *v40;
    char *v41;
    S_vv40_s458 *ps;
    float t1;
    float t2;
    int t3;
    int t4;
    int t5;
    t1 = call_8c37eb0c((void *)(o->f64));
    o->f3a4 = t1;
    o->f3a8 = 0.0f;
    t2 = call_8c38c154((void *)(o->f64));
    o->f3ac = t2;
    v1 = (int)(o->f20 == g_8c418248);
    if (v1 != 0) {
        t3 = operation_8c2097a8(2);
        if (t3 != 0) {
            v2 = (int)0x20000;
        } else {
            v2 = (int)0x10000;
        }
        v3 = (int)(((o->f338->f00 & v2)) != 0);
        if (v3 != 0) {
            o->f4c0 = 1;
            v4 = (int)(((((S_x80240 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)))->f48 & 1)) != 0);
            if (v4 == 0) {
                goto L_8c026f4a;
            }
            o->f4e4 = 1;
        } else {
            o->f4c0 = 0;
            v5 = (int)(((((S_x82352 *)((char *)(int *)((char *)o + 0x418) + ((o->f454 & 0xffff) << 2)))->f48 & 1)) != 0);
            if (v5 != 0) {
                o->f4e4 = 0;
            }
        }
L_8c026f4a:;
        t4 = operation_8c027070((void *)o);
        t5 = mask_any((void *)t4, (unsigned int)1);
        if (t5 != 0) {
            v13 = (int)(o->f4e4 == 0);
            if (v13 != 0) {
                v15 = (int)&o->f4c0;
            } else {
                v15 = (int)&o->f4e4;
            }
        } else {
            v15 = (int)&o->f4c0;
        }
        operation_8c1acbfc((void *)v15, (int)o);
    }
    v40 = (S_vv40 *)o->f3b8;
    if (v40 != 0) {
        ps = (S_vv40_s458 *)((char *)v40 + 0x458);
        *(int *)ps = 0;
        ps->f06 = ps->f04 = 0xffff;
        ps->f08 = 0.0f;
        ps->f0c = 640000.0f;
        v41 = (char *)o->f3b8 + 0x430;
        *(Short4 *)(v41 + 0x18) = *(Short4 *)(v41 + 0x10);
        o->f3b8->f440 = 0xffff;
        operation_8c0d9e70((int)(o->f3b8));
        call_8c0d9d10((Arg0_3b8 *)(o->f3b8));
        ((Arg0_3b8_s468 *)((char *)o->f3b8 + 0x468))->f04 = 0;
    }
}
