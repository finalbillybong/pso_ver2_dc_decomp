typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c3268ec S_L8c3268ec;
typedef struct S_c8c1794c8 S_c8c1794c8;
typedef struct S_c8c1794c8_18 S_c8c1794c8_18;
typedef struct S_c8c1794c8_1c S_c8c1794c8_1c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
typedef struct S_vv62 S_vv62;
typedef struct S_vv62_0 S_vv62_0;
typedef struct S_x47856 S_x47856;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0xc];
    int f3a0;
    char unknown3a4[0x34];
    int f3d8;
    char unknown3dc[0x8];
    int f3e4;
    float f3e8;
    char unknown3ec[0x4];
    int f3f0;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_c8c1794c8 {
    char unknown0[0x18];
    S_c8c1794c8_18 *f18;
    S_c8c1794c8_1c *f1c;
};
struct S_vv62 {
    S_vv62_0 *f00;
};
struct S_L8c3268ec {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
};
struct S_x47856 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern S_L8c3268ec g_8c3268ec;
extern "C" void mark_effect_for_release(void *);
extern "C" int create_effect_769c(void *, int);
extern "C" void set_effect_bits(void *, unsigned short);
extern "C" void call_8c05fd7c(int, Object *, void *, int, int);
extern "C" int create_effect_777c(void *, int);
extern "C" void call_8c05fbf8(int, void *, int, int);
extern "C" S_c8c1794c8 *record30_8c1794c8(int);
extern "C" void create_effect_b7684(void *, void *, void *, void *);
extern "C" void create_effect_b7cf0(void *, void *, void *, void *);
extern "C" void operation_8c191504(int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c1b5f70(Object *o)
{
    Frame frame;
    S_vv3 *v3;
    S_vv62 *v62;
    int v1;
    float v41;
    int v60;
    int v2;
    int v61;
    int v67;
    int t1;
    int t2;
    S_c8c1794c8 *t3;
    S_c8c1794c8 *t4;
    int t5;
    char *p;
    v1 = (int)((int)o->f390 + -8);
    v2 = (int)((int)o + v1 * 0xc + 0x484);
    v3 = (S_vv3 *)((char *)o + 0x418);
    if (o->f3e8 > 17.0f) {
        if (v3->f00 == 0) {
            goto L_8c1b5fe0;
        }
        mark_effect_for_release((void *)(v3->f00));
        v3->f00 = (S_vv3_0 *)0;
    } else {
        if (!(8.0f > o->f3e8) && v3->f00 == 0) {
            t1 = create_effect_769c((void *)v2, 0xf7);
            v3->f00 = (S_vv3_0 *)(int)t1;
            if (t1 != 0) {
                set_effect_bits((void *)(v3->f00), (unsigned short)0x40);
            }
        }
    }
L_8c1b5fe0:;
    v41 = (float)o->f3e8;
    if (!(8.0f > v41) && !(v41 > 17.0f)) {
        call_8c05fd7c(0x30012, o, (void *)(((char *)o + 0x3c)), 0, 1);
    }
    if (o->f3a0 == 0x26) {
        t2 = create_effect_777c((void *)v2, 0xfd);
        if (t2 != 0) {
            set_effect_bits((void *)t2, (unsigned short)0x40);
        }
        call_8c05fbf8(0x30013, (void *)(((char *)o + 0x3c)), 0, 1);
        if (v1 == 0) {
            p = (char *)o + 0x3c0;
            t3 = record30_8c1794c8(0x36);
            create_effect_b7684((void *)o, (void *)p, (void *)p, (void *)(t3->f1c));
        } else {
            p = (char *)o + 0x3c0;
            t4 = record30_8c1794c8(0x36);
            create_effect_b7cf0((void *)o, (void *)p, (void *)p, (void *)(t4->f18));
        }
        operation_8c191504(1);
    }
    if (!(--o->f3a0 >= 0)) {
        o->f390 = 1;
        v61 = (int)8;
        v60 = (int)0x3f8;
        while (0xd > v61) {
            v62 = (S_vv62 *)((char *)(&*(int *)((char *)((char *)o + 0x0) + (v61 << 2))) + v60);
            if (v62->f00 != 0) {
                mark_effect_for_release((void *)(v62->f00));
                v62->f00 = (S_vv62_0 *)0;
            }
            v61 = (int)(v61 + 1);
        }
        o->f3d8 = 5;
        v67 = (int)*(int *)((char *)&g_8c3268ec.f04 + (o->f390 * 0x2c));
        if (v67 != -1) {
            o->f3e4 = (int)v67;
            o->f3e8 = 0.0f;
            o->f3f0 = (int)(*(int *)((char *)0x8c326b6c + (v67 << 5)));
        }
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x47856 *)((char *)&g_8c3268ec.f08 + o->f390 * 0x2c))->f00;
        t5 = call_8c18e6fc((Frame *)((&frame)));
        if (t5 != 0) {
            (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
        }
    }
}
