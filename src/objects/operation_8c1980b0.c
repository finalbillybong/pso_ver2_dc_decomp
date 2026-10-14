typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc420 S_g8c4dc420;
typedef struct S_g8c4dc420_42c S_g8c4dc420_42c;
typedef struct S_g8c4dc420_42c_18 S_g8c4dc420_42c_18;
typedef struct S_g8c4dc420_42c_28 S_g8c4dc420_42c_28;
typedef struct S_g8c4dc420_42c_38 S_g8c4dc420_42c_38;
typedef struct S_g8c4dc420_42c_48 S_g8c4dc420_42c_48;
typedef struct S_g8c4dc420_42c_8 S_g8c4dc420_42c_8;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
struct S_g8c4dc420 {
    char unknown0[0x42c];
    S_g8c4dc420_42c *f42c;
};
struct S_g8c4dc420_42c {
    char unknown0[0x8];
    S_g8c4dc420_42c_8 *f08;
    char unknownc[0xc];
    S_g8c4dc420_42c_18 *f18;
    char unknown1c[0xc];
    S_g8c4dc420_42c_28 *f28;
    char unknown2c[0xc];
    S_g8c4dc420_42c_38 *f38;
    char unknown3c[0xc];
    S_g8c4dc420_42c_48 *f48;
};
extern char g_8c31c898[];
extern int call_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c0cd588(int, void *, int);
extern void load_resource_small(void *, void *);
void operation_8c1980b0(void)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
    t1 = call_8c011ecc(0x440);
    if (t1 != 0) {
        call_8c03d610(t1, 1, (void *)((void *)0x8c31c67c), 0, 0, 0);
    }
    *(int *)0x8c4dc420 = (int)(t1);
    t2 = call_8c011ecc(0x14);
    if (t2 != 0) {
        call_8c0cd588(t2, (void *)((*(S_g8c4dc420 **)0x8c4dc420)->f42c->f38), 0);
    }
    *(int *)0x8c4dc42c = (int)(t2);
    t3 = call_8c011ecc(0x14);
    if (t3 != 0) {
        call_8c0cd588(t3, (void *)((*(S_g8c4dc420 **)0x8c4dc420)->f42c->f48), 0);
    }
    *(int *)0x8c4dc430 = (int)(t3);
    t4 = call_8c011ecc(0x14);
    if (t4 != 0) {
        call_8c0cd588(t4, (void *)((*(S_g8c4dc420 **)0x8c4dc420)->f42c->f08), 0);
    }
    *(int *)0x8c4dc434 = (int)(t4);
    t5 = call_8c011ecc(0x14);
    if (t5 != 0) {
        call_8c0cd588(t5, (void *)((*(S_g8c4dc420 **)0x8c4dc420)->f42c->f18), 0);
    }
    *(int *)0x8c4dc438 = (int)(t5);
    t6 = call_8c011ecc(0x14);
    if (t6 != 0) {
        call_8c0cd588(t6, (void *)((*(S_g8c4dc420 **)0x8c4dc420)->f42c->f28), 0);
    }
    *(int *)0x8c4dc43c = (int)(t6);
    load_resource_small((void *)((g_8c31c898 + 0xda)), (void *)((void *)0x8c31c6ec));
}
