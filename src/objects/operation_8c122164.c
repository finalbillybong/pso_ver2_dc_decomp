typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d878c S_g8c4d878c;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_4 S_vv1_4;
typedef struct S_vv1_54 S_vv1_54;
struct S_vv1 {
    char unknown0[0x4];
    S_vv1_4 *f04;
    float f08;
    char unknownc[0x38];
    float f44;
    char unknown48[0xc];
    S_vv1_54 *f54;
};
extern int g_8c4d87a0;
extern float g_8c4d87a4;
extern void *g_8c4d87a8;
extern float call_8c12b570(void *, float);
void operation_8c122164(int a0)
{
    S_vv1 *v1;
    float t1;
    S_vv1_4 *v2;
    int v3;
    v1 = (S_vv1 *)*(S_g8c4d878c **)((char *)0x8c4d878c + (a0 << 2));
    v2 = v1->f04;
    g_8c4d87a0 = (int)v2;
    g_8c4d87a4 = v1->f08;
    t1 = call_8c12b570((void *)v2, v1->f44);
    v3 = (int)t1;
    g_8c4d87a8 = (char *)v1->f54 + (v3 << 2);
}
