typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    char unknown0[0x3e4];
    int f3e4;
};
struct S_vv4 {
    int f00;
};
extern void operation_8c059ea4(void *, int);
int operation_8c0956fc(Object *o)
{
    int v3;
    int v1;
    int v2;
    S_vv4 *v4;
    if (((o->f3e4 & 0x40)) != 0) {
        o->f3e4 &= -0x41;
        operation_8c059ea4((void *)o, 0xb);
        v3 = (int)0;
        v1 = (int)0x3e4;
        v2 = (int)0x4ec;
        while (*(int *)((char *)((char *)o + 0x0) + (v2)) > v3) {
            v4 = (S_vv4 *)((int)*(int *)((char *)((char *)o + 0x4f0) + (v3 << 2)) + v1);
            v4->f00 |= 0x40;
            v3 = (int)(v3 + 1);
        }
        return 1;
    }
    return 0;
}
