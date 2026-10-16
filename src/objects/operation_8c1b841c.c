typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv3 S_vv3;
typedef struct S_vv3_0 S_vv3_0;
struct S_vv3 {
    S_vv3_0 *f00;
};
extern void mark_effect_for_release(void *);
void operation_8c1b841c(int a0)
{
    int v2;
    int v1;
    S_vv3 *v3;
    v2 = (int)8;
    v1 = (int)0x400;
    while (0xd > v2) {
        v3 = (S_vv3 *)((char *)(&*(int *)((char *)((char *)a0 + 0x0) + (v2 << 2))) + v1);
        if (v3->f00 != 0) {
            mark_effect_for_release((void *)(v3->f00));
            v3->f00 = (S_vv3_0 *)0;
        }
        v2 = (int)(v2 + 1);
    }
}
