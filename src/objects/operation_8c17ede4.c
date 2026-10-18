typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db9e0 S_g8c4db9e0;
typedef struct S_g8c4db9e0_364 S_g8c4db9e0_364;
typedef struct S_g8c4db9e4 S_g8c4db9e4;
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    char f00;
    char f01;
    char unknown2[0x2];
    int f04;
};
struct S_g8c4db9e0 {
    char f00;
    char unknown1[0x363];
    S_g8c4db9e0_364 *f364;
    char unknown368[0x4];
    int f36c;
    char unknown370[0x31];
    char f3a1;
};
struct S_g8c4db9e4 {
    char unknown0[0x244];
    int f244;
    int f248;
};
extern void operation_1c7dd4(void *);
extern void call_8c027ab8(S_g8c4db9e0 *);
extern void call_8c027b60(char, S_g8c4db9e0 *, void *);
extern void call_8c027cfc(S_g8c4db9e0 *);
extern void call_8c12b880(void *, int, int);
void operation_8c17ede4(void)
{
    int v2;
    S_vv3 *v3;
    int v1;
    if (*(int *)0x8c4db9e0 != 0) {
        v2 = (int)0;
        v1 = (int)-1;
        v3 = (S_vv3 *)(*(int *)0x8c4db9ec + 8);
        while (0x1e > v2) {
            v3->f00 = 0;
            v3->f01 = v1;
            v3->f04 = 0;
            operation_1c7dd4((void *)((int)v3 + 8));
            v3 = (S_vv3 *)((char *)v3 + 28);
            v2 = (int)(v2 + 1);
        }
        (*(S_g8c4db9e0 **)0x8c4db9e0)->f00 = 0;
        call_8c027ab8((S_g8c4db9e0 *)(*(S_g8c4db9e0 **)0x8c4db9e0));
        call_8c027b60((*(S_g8c4db9e0 **)0x8c4db9e0)->f3a1, (S_g8c4db9e0 *)(*(S_g8c4db9e0 **)0x8c4db9e0), (void *)((*(S_g8c4db9e0 **)0x8c4db9e0)->f364));
        call_8c027cfc((S_g8c4db9e0 *)(*(S_g8c4db9e0 **)0x8c4db9e0));
        (*(S_g8c4db9e0 **)0x8c4db9e0)->f36c = 0;
    }
    if (*(int *)0x8c4db9e4 != 0) {
        call_8c12b880((void *)(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x24c)), 0, 0x5a0);
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f244 = 0;
        (*(S_g8c4db9e4 **)0x8c4db9e4)->f248 = 0;
        call_8c12b880((void *)(((char *)*(S_g8c4db9e4 **)0x8c4db9e4 + 0x11c4)), 0, 0xa0);
    }
}
