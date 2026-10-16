typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_28 Arg1_28;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv4_0_4 S_vv4_0_4;
typedef struct S_vv4_0_4_4 S_vv4_0_4_4;
typedef struct S_vv4_4 S_vv4_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_4 S_vv7_4;
typedef struct S_vv7_4_4 S_vv7_4_4;
struct Arg1 {
    char unknown0[0x28];
    Arg1_28 *f28;
    char unknown2c[0x8];
    int f34;
};
struct S_vv4 {
    S_vv4_0 *f00;
    S_vv4_4 *f04;
    char unknown8[0x4];
    float f0c;
    char unknown10[0x6];
    short f16;
    short f18;
    short f1a;
    char unknown1c[0x1c];
    int f38;
};
struct S_vv7 {
    char unknown0[0x4];
    S_vv7_4 *f04;
};
struct S_vv7_4 {
    char unknown0[0x4];
    S_vv7_4_4 *f04;
};
struct S_vv4_0 {
    char unknown0[0x4];
    S_vv4_0_4 *f04;
};
struct S_vv4_0_4 {
    char unknown0[0x4];
    S_vv4_0_4_4 *f04;
};
extern void call_8c0344f0(void *, short, short, short);
extern void call_8c391c94(void);
extern void call_8c3ac53a(S_vv4_0 *, void *, float);
extern void call_8c3addea(S_vv4_0 *, void *, float);
extern void call_8c3acd98(S_vv4_0 *, void *, float);
extern void call_8c391cc4(void);
void operation_8c031b80(int a0, Arg1 *a1, int a2)
{
    S_vv4 *v4;
    int v5;
    int v1;
    int v2;
    S_vv7 *v7;
    v1 = (int)0x1000;
    v4 = (S_vv4 *)a1->f28;
    v5 = (int)0;
    v2 = (int)0x400;
    while (a1->f34 > v5) {
        if (a2 != 0 && ((v4->f38 & v1)) == 0) {
        } else {
            v7 = (S_vv7 *)v4->f00;
            if (v7 != 0 && v4->f04 != 0) {
                if (((v4->f38 & v2)) != 0 && v7->f04 != 0) {
                    call_8c0344f0((void *)(v7->f04->f04), v4->f18, v4->f1a, v4->f16);
                }
                if (((v4->f38 & 0x10)) != 0) {
                    call_8c391c94();
                }
                if (((v4->f38 & 1)) != 0) {
                    call_8c3ac53a((S_vv4_0 *)(v4->f00), (void *)(v4->f04), v4->f0c);
                } else {
                    if (((v4->f38 & 2)) != 0) {
                        call_8c3addea((S_vv4_0 *)(v4->f00), (void *)(v4->f04), v4->f0c);
                    } else {
                        if (((v4->f38 & 4)) != 0) {
                            call_8c3acd98((S_vv4_0 *)(v4->f00), (void *)(v4->f04), v4->f0c);
                        }
                    }
                }
                if (((v4->f38 & 0x10)) != 0) {
                    call_8c391cc4();
                }
                if (((v4->f38 & v2)) != 0 && v4->f00->f04 != 0) {
                    call_8c0344f0((void *)(v4->f00->f04->f04), (short)(-v4->f18), (short)(-v4->f1a), v4->f16);
                }
            }
        }
        v5 = (int)(v5 + 1);
        v4 = (S_vv4 *)((char *)v4 + 60);
    }
}
