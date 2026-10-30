typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_a7c Arg0_a7c;
typedef struct Arg1 Arg1;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0xa7c];
    Arg0_a7c *fa7c;
};
struct Arg1 {
    char unknown0[0x1];
    unsigned char f01;
};
struct S_vv1 {
    int f00;
};
struct S_vv2 {
    char f00;
};
void operation_8c09ca5c(Object *o, Arg1 *a1)
{
    char *v4;
    int *v1;
    Arg0_a7c *pm1;
    char *v2;
    pm1 = o->fa7c;
    if (!(((int)pm1 + (a1->f01 << 2)) > 0x5b4)) {
        int v3;
        v2 = (char *)a1;
        v3 = 0;
        v1 = (int *)&o->fa7c;
        v4 = (char *)o + 0xa80;
        while (((int)(int)(int)a1->f01 << 2) > v3) {
            v4[(*v1)++] = *v2++;
            ++v3;
        }
    }
}
