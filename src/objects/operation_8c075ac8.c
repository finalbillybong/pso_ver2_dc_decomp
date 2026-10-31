typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_x25776 S_x25776;
struct Object {
    char unknown0[0x13c];
    int f13c;
};
struct S_x25776 {
    char f00;
    char f01;
};
extern void operation_8c07711c(void *);
void operation_8c075ac8(Object *o)
{
    int v2;
    char *v5;
    int v1;
    int k1;
    int k2;
    int idx;
    S_x25776 *src;
    operation_8c07711c((void *)o);
    k1 = 0x13c;
    k2 = 0x2fc;
    v2 = 0;
    while (v2 != 3) {
        v5 = *(char **)((char *)o + k1);
        if (3 > v2) {
            idx = v2 << 1;
            src = (S_x25776 *)((char *)(int *)((char *)o + 0x1e8) + idx);
            v5 = v5 + k2 + idx;
            ((S_x25776 *)v5)->f00 = src->f00;
            ((S_x25776 *)v5)->f01 = src->f01;
        }
        v2 = v2 + 1;
    }
}
