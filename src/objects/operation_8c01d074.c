typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    int f00;
};
extern void call_8c01d09c(void);
void operation_8c01d074(int a0, int a1)
{
    S_vv1 *v1;
    *(int *)0x8c41cb74 = a1;
    call_8c01d09c();
    v1 = (S_vv1 *)(*(int *)0x8c41cb74 + 8);
    *(S_vv1 **)0x8c41cb74 = v1;
    v1->f00 = 0;
}
