typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv2 S_vv2;
struct S_vv2 {
    char f00;
};
struct Object {
    char unknown0[0x3a4];
    int f3a4;
    char unknown3a8[0x60];
    char f408;
};
extern void operation_8c027d3c(int);
void operation_8c027cfc(Object *o)
{
    int v1;
    char m;
    S_vv2 *v2;
    v2 = (S_vv2 *)&o->f408;
    v1 = (int)0;
    m = -1;
    while (0x13 > v1) {
        v2->f00 = m;
        v1 = (int)(v1 + 1);
        v2 = (S_vv2 *)((char *)v2 + 1);
    }
    if (((o->f3a4 & 0x80)) != 0) {
        o->f408 = 0;
    }
    operation_8c027d3c((int)o);
}
