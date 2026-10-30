typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c011214 S_c8c011214;
typedef struct S_c8c011214_4 S_c8c011214_4;
typedef struct Frame Frame;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct S_g8c46ee80_ac S_g8c46ee80_ac;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_20_64 Arg0_20_64;
typedef struct S_vv10 S_vv10;
typedef struct S_vv14 S_vv14;
typedef struct Block_frame_c {
    char unknown0[0x4];
    float f04;
    char unknown8[0x4];
} Block_frame_c;
typedef struct Block_p0_64 {
    float f00;
    float f04;
    float f08;
} Block_p0_64;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    char unknown24[0x40];
    Block_p0_64 f64;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
};
struct Arg0_20 {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    float f48;
    float f4c;
    float f50;
    char unknown54[0x10];
    Arg0_20_64 *f64;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    S_g8c46ee80_ac *fac;
};
struct S_vv10 {
    char unknown0[0x90];
    float f90;
    float f94;
    float f98;
    float f9c;
    float fa0;
    float fa4;
};
struct S_vv14 {
    char unknown0[0xa0];
    float fa0;
    char unknowna4[0x3c];
    int fe0;
};
struct S_c8c011214 {
    char unknown0[0x4];
    S_c8c011214_4 *f04;
};
struct S_c8c011214_4 {
    Vector3 f00;
};
extern Vector3 g_8c3032a8;
extern Vector3 g_8c3032b4;
extern S_g8c46ee80 *g_8c46ee80;
extern float call_8c37e480(void *);
extern void call_8c38ade4(void *);
extern void call_8c37df90(int, void *);
extern void call_8c3be280(int, void *, void *);
extern void call_8c38accc(int);
extern float call_8c3845f0(void *, Vector3 *);
extern float call_8c12c714(float);
extern void call_8c37b630(void *);
extern S_c8c011214 *operation_8c011214(int, int, int);
int operation_8c0a0f08(Object *o)
{
    Vector3 dir;
    Vector3 q;
    Vector3 d;
    Vector3 b;
    Vector3 a;
    float v1;
    float v5;
    S_vv10 *v10;
    float v9;
    S_vv14 *v14;
    float t1;
    float t2;
    float t4;
    S_c8c011214 *t5;
    Arg0_20 *pa;
    Vector3 *pv;
    Vector3 *pb;
    pa = o->f20;
    if (pa == 0) {
        return 0;
    }
    pb = (Vector3 *)&pa->f48;
    pv = (Vector3 *)&pa->f3c;
    d.x = pv->x - pb->x;
    d.y = pv->y - pb->y;
    d.z = pv->z - pb->z;
    t1 = call_8c37e480((void *)&d);
    if (1.0f > t1) {
        b = *(Vector3 *)&g_8c3032a8;
        a = *(Vector3 *)&g_8c3032b4;
        call_8c38ade4((void *)((void *)0x8c400500));
        call_8c37df90(0, (void *)(g_8c46ee80->fac));
        call_8c3be280(0, (void *)&b, (void *)&b);
        call_8c38accc(1);
        b.y = 0.0f;
        call_8c38ade4((void *)((void *)0x8c400500));
        call_8c37df90(0, (void *)(o->f20->f64));
        call_8c3be280(0, (void *)&a, (void *)&a);
        call_8c38accc(1);
        t2 = call_8c3845f0((void *)&b, &a);
        if (call_8c12c714(t2) > 0.25f) {
            v9 = (float)0.0f;
            goto L_8c0a0ffe;
        }
        v5 = (float)(t1 * 13.0f);
    } else {
        v1 = (float)(t1 * 13.0f);
        v5 = (float)v1;
    }
    v9 = (float)v5;
L_8c0a0ffe:;
    v10 = (S_vv10 *)g_8c46ee80;
    dir.x = v10->f90 - v10->f9c;
    dir.y = v10->f94 - v10->fa0;
    dir.z = v10->f98 - v10->fa4;
    t4 = call_8c37e480((void *)&dir);
    if (t4 != 0.0f) {
        call_8c37b630((void *)&dir);
    }
    q.x = v9 * dir.x + o->f20->f3c;
    v14 = (S_vv14 *)g_8c46ee80;
    q.y = v14->fa0;
    q.z = v9 * dir.z + o->f20->f44;
    if (v14 == 0) {
        return 0;
    }
    if (v14->fe0 == 0) {
        return 0;
    }
    t5 = operation_8c011214((int)((int)v14 + 0x90), (int)&q, 0x100);
    if (t5 != 0) {
        *(Vector3 *)&o->f64 = *(Vector3 *)&t5->f04->f00;
        o->f64.f00 -= dir.x * 2.0f;
        o->f64.f04 -= dir.y * 2.0f;
        o->f64.f08 -= dir.z * 2.0f;
        return 1;
    }
    return 0;
}
