typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
};
int operation_8c257e3c(int a0, unsigned int a1)
{
    S_vv2 *v2;
    unsigned int v1;
    if (a0 == 0) {
        return 0;
    }
    v1 = (unsigned int)0;
    v2 = (S_vv2 *)a0;
    while (v2->f00 != 0) {
        if (v1 >= a1) {
            return (int)(a1);
        }
        v2 = (S_vv2 *)((char *)v2 + 1);
        v1 = (unsigned int)(v1 + 1);
    }
    return (int)(v1);
}
