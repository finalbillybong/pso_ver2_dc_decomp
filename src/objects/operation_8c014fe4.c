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
extern void call_8c3c1500(float, float, float);
void operation_8c014fe4(void)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)(g_8c418280 + 0xc);
    call_8c3c1500(v1->f00, v1->f04, v1->f08);
}
