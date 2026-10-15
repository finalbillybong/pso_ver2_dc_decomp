typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_vv1 S_vv1;
typedef struct S_vv1_0 S_vv1_0;
struct S_vv1 {
    S_vv1_0 *f00;
};
extern int call_8c18e768(void *, int);
void operation_8c16ccc8(int a0, int a1)
{
    S_vv1 *v1;
    int t1;
    v1 = (S_vv1 *)&*(int *)((char *)((char *)*(S_g8c4db408 **)0x8c4db408 + 0x0) + ((unsigned char)a0 << 2));
    t1 = call_8c18e768((void *)(v1->f00), a1);
    v1->f00 = (S_vv1_0 *)t1;
}
