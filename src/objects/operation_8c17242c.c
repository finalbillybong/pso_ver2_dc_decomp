typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_vv3 S_vv3;
typedef struct S_x57968 S_x57968;
typedef struct S_x69152 S_x69152;
typedef struct S_x86352 S_x86352;
typedef struct S_x90048 S_x90048;
typedef struct S_x95216 S_x95216;
struct S_vv3 {
    int f00;
};
struct S_x69152 {
    int f00;
};
struct S_x86352 {
    int f00;
};
struct S_x95216 {
    int f00;
};
struct S_x90048 {
    int f00;
};
struct S_c8c021ef8 {
    char unknown0[0x3b0];
    int f3b0;
};
struct S_x57968 {
    int f00;
};
extern int call_8c25fd44(int, int, S_vv3 *);
extern int operation_8c25fec4(void);
extern S_c8c021ef8 *lookup_low_id(int);
void operation_8c17242c(int a0)
{
    int v1;
    int v2;
    S_vv3 *v3;
    int t1;
    int t2;
    S_c8c021ef8 *t3;
    v1 = (int)((unsigned char)a0 << 2);
    *(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + (v1)) = 0;
    v2 = (int)0;
    v3 = (S_vv3 *)(void *)0x8c004000;
    while ((unsigned int)0x1000 > (unsigned int)(short)v2) {
        if ((v3++)->f00 != 0) {
            ((S_x69152 *)(*(int *)0x8c4db408 + v1))->f00 |= 1;
        }
        v2 = (int)(v2 + 1);
    }
    t1 = call_8c25fd44(v2, 0x1000, v3);
    if (t1 == 1) {
        ((S_x86352 *)(*(int *)0x8c4db408 + v1))->f00 |= 2;
    }
    t2 = operation_8c25fec4();
    if (t2 == 1) {
        ((S_x95216 *)(*(int *)0x8c4db408 + v1))->f00 |= 4;
    }
    if (*(int *)0x8c4db254 == 1) {
        ((S_x90048 *)(*(int *)0x8c4db408 + v1))->f00 |= 8;
    }
    t3 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t3 != 0 && t3->f3b0 != 0) {
        ((S_x57968 *)(*(int *)0x8c4db408 + v1))->f00 |= 0x10;
    }
}
