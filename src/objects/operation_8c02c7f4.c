typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_vv2 {
    unsigned short f00;
    short f02;
};
int operation_8c02c7f4(Object *o)
{
    int v3;
    S_vv2 *v2;
    unsigned short v1;
    v1 = (unsigned short)o->f20;
    v2 = (S_vv2 *)(void *)0x8c510c9c;
    v3 = (int)0;
    while (4 > v3) {
        if (v1 == v2->f00) {
            return v2->f02;
        }
        v2 = (S_vv2 *)((char *)v2 + 8);
        v3 = (int)(v3 + 1);
    }
    return -1;
}
