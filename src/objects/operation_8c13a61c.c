typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d9bdc S_g8c4d9bdc;
typedef struct S_vv10 S_vv10;
typedef struct S_vv4 S_vv4;
struct S_vv4 {
    char unknown0[0x330];
    short f330;
};
struct S_vv10 {
    char unknown0[0x20];
    short f20;
};
extern int call_8c13a528(void);
unsigned short operation_8c13a61c(void)
{
    int v2;
    char *v10;
    int v3;
    int off;
    int v1;
    char *v4;
    int v5;
    int t1;
    t1 = call_8c13a528();
    if (t1 == 0) {
        return 0xffff;
    }
    v2 = 0;
    off = 0x330;
    v10 = 0;
    v1 = *(int *)0x8c4d9bec;
    for (v3 = 0; v1 > v3; v3++) {
        v4 = *(char **)((char *)0x8c4d9bdc + (v3 << 2));
        if (v4 != 0) {
            v5 = *(short *)(v4 + off);
            if (v5 > v2) {
                v2 = v5;
                v10 = v4;
            }
        }
    }
    if (v10 != 0) {
        return *(short *)(v10 + 0x20);
    }
    return 0xffff;
}
