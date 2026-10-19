typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_40 S_g8c4daaa4_40;
typedef struct S_g8c4daaa4_8 S_g8c4daaa4_8;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
struct S_g8c4daaa4 {
    char unknown0[0x8];
    S_g8c4daaa4_8 *f08;
    char unknownc[0x34];
    S_g8c4daaa4_40 *f40;
};
struct S_g8c4daaa4_8 {
    char unknown0[0x8];
    int f08;
};
struct S_vv1 {
    S_vv1_0 *f00;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
extern int call_8c05fbf8(void *, int, int, int);
extern void emit_control_60320(int, void *, int);
void operation_8c158738(int a0, int a1)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int t1;
    int v0;
    v0 = (unsigned char)a0;
    if (v0 < (*(S_g8c4daaa4 **)0x8c4daaa4)->f08->f08) {
        v1 = (S_vv1 *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f40;
        v1 = (S_vv1 *)((int)v1 + ((unsigned char)(v0 << 1) << 2));
        v2 = (S_vv2 *)&*(int *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f40 + 0x0) + ((unsigned char)(v0 << 1) + 1 << 2));
        if ((int)(v1->f00) != 0xf0001) {
            t1 = call_8c05fbf8((void *)(v1->f00), a1, 0, 0);
            if (v2->f00 != 0) {
                emit_control_60320(t1, (void *)(v2->f00), 0);
            }
        }
    }
}
