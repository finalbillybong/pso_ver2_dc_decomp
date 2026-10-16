typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Arg1 Arg1;
typedef struct Arg1_20 Arg1_20;
typedef struct S_vv4 S_vv4;
typedef struct S_vv4_0 S_vv4_0;
typedef struct S_vv4_0_4 S_vv4_0_4;
typedef struct S_vv4_0_4_4 S_vv4_0_4_4;
typedef struct S_vv7 S_vv7;
typedef struct S_vv7_4 S_vv7_4;
typedef struct S_vv7_4_4 S_vv7_4_4;
struct Arg1 {
    char unknown0[0x20];
    Arg1_20 *f20;
    char unknown24[0x8];
    int f2c;
};
struct S_vv4 {
    S_vv4_0 *f00;
    char unknown4[0x6];
    short f0a;
    short f0c;
    short f0e;
    char unknown10[0x1c];
    int f2c;
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
extern void call_8c3a9436(S_vv4_0_4 *);
extern void call_8c3a944a(S_vv4_0 *);
extern void call_8c3aa716(S_vv4_0 *);
extern void call_8c3a9c12(S_vv4_0 *);
extern void call_8c391cc4(void);
void operation_8c031a68(int a0, Arg1 *a1, int a2)
{
    S_vv4 *v4;
    int v5;
    int v1;
    int v2;
    S_vv7 *v7;
    v1 = (int)0x1000;
    v4 = (S_vv4 *)a1->f20;
    v5 = (int)0;
    v2 = (int)0x400;
    while (a1->f2c > v5) {
        if (a2 != 0 && ((v4->f2c & v1)) == 0) {
        } else {
            v7 = (S_vv7 *)v4->f00;
            if (v7 != 0) {
                if (((v4->f2c & v2)) != 0 && v7->f04 != 0) {
                    call_8c0344f0((void *)(v7->f04->f04), v4->f0c, v4->f0e, v4->f0a);
                }
                if (((v4->f2c & 0x10)) != 0) {
                    call_8c391c94();
                }
                if (((v4->f2c & 0x80)) != 0) {
                    call_8c3a9436((S_vv4_0_4 *)(v4->f00->f04));
                } else {
                    if (((v4->f2c & 1)) != 0) {
                        call_8c3a944a((S_vv4_0 *)(v4->f00));
                    } else {
                        if (((v4->f2c & 2)) != 0) {
                            call_8c3aa716((S_vv4_0 *)(v4->f00));
                        } else {
                            if (((v4->f2c & 4)) != 0) {
                                call_8c3a9c12((S_vv4_0 *)(v4->f00));
                            }
                        }
                    }
                }
                if (((v4->f2c & 0x10)) != 0) {
                    call_8c391cc4();
                }
                if (((v4->f2c & v2)) != 0 && v4->f00->f04 != 0) {
                    call_8c0344f0((void *)(v4->f00->f04->f04), (short)(-v4->f0c), (short)(-v4->f0e), v4->f0a);
                }
            }
        }
        v5 = (int)(v5 + 1);
        v4 = (S_vv4 *)((char *)v4 + 48);
    }
}
