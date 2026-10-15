typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
extern void request_resource_release(void *);
void operation_8c25ee08(int a0)
{
    S_vv1 *v1;
    v1 = (S_vv1 *)(a0 + 0x34);
    if (v1->f00 != 0) {
        request_resource_release((void *)(v1->f00));
        v1->f00 = (S_vv1_0 *)0;
    }
}
