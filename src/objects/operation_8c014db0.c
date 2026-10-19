typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    float f00;
    float f04;
    float f08;
};
extern char g_8c418280[];
extern void call_8c39986a(float, float, float);
extern void call_8c3998c4(float, float, float);
extern void operation_8c014edc(void *);
extern void operation_8c014f58(void *);
extern void operation_8c014ef8(void *);
extern void call_8c399912(void);
void operation_8c014db0(void)
{
    S_vv1 *v1;
    int v2;
    char *v3;
    call_8c39986a(*(float *)(g_8c418280 + 0x38), *(float *)(g_8c418280 + 0x3c), *(float *)(g_8c418280 + 0x40));
    v1 = (S_vv1 *)(g_8c418280 + 0xc);
    call_8c3998c4(v1->f00, -v1->f04, v1->f08);
    v2 = (int)0;
    while (3 > v2) {
        v3 = (char *)*(int *)((char *)0x8c4182f0 + (v2 << 2));
        if (v3 != 0) {
            operation_8c014edc((void *)v3);
            operation_8c014f58((void *)v3);
            operation_8c014ef8((void *)v3);
        }
        v2 = (int)(v2 + 1);
    }
    call_8c399912();
}
