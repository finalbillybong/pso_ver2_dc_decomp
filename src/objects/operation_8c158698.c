typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
typedef struct S_g8c4daaa4_38 S_g8c4daaa4_38;
typedef struct S_vv10 S_vv10;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv11 S_vv11;
typedef struct S_vv11_0 S_vv11_0;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_0 S_vv2_0;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
struct S_g8c4daaa4 {
    char unknown0[0x38];
    S_g8c4daaa4_38 *f38;
};
struct S_vv2 {
    S_vv2_0 *f00;
};
struct S_vv3 {
    S_vv3_0 *f00;
};
struct S_vv10 {
    S_vv10_0 *f00;
};
struct S_vv11 {
    S_vv11_0 *f00;
};
extern int call_8c05fbf8(void *, int, int, int);
extern void emit_control_60320(int, void *, int);
void operation_8c158698(int a0, int a1)
{
    S_vv2 *v2;
    S_vv3 *v3;
    S_vv11 *v11;
    S_vv10 *v10;
    int v1;
    int t1;
    int t2;
    if ((unsigned int)0x89 > (unsigned int)(unsigned char)a0) {
        v1 = (int)((unsigned char)a0 << 3);
        v2 = (S_vv2 *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f38;
        v2 = (S_vv2 *)((int)v2 + (v1 + 4 << 2));
        v3 = (S_vv3 *)&*(int *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f38 + 0x0) + (v1 + 5 << 2));
        if ((int)(v2->f00) != 0xf0001) {
            t1 = call_8c05fbf8((void *)(v2->f00), a1, 0, 0);
            if (v3->f00 != 0) {
                emit_control_60320(t1, (void *)(v3->f00), 0);
            }
        }
        v10 = (S_vv10 *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f38;
        v10 = (S_vv10 *)((int)v10 + (v1 + 6 << 2));
        v11 = (S_vv11 *)&*(int *)((char *)((char *)(*(S_g8c4daaa4 **)0x8c4daaa4)->f38 + 0x0) + (v1 + 7 << 2));
        if ((int)(v10->f00) != 0xf0001) {
            t2 = call_8c05fbf8((void *)(v10->f00), a1, 0, 0);
            if (v11->f00 != 0) {
                emit_control_60320(t2, (void *)(v11->f00), 0);
            }
        }
    }
}
