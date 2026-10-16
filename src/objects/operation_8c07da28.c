typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x13c];
    int f13c;
    char unknown140[0xd8];
    int f218;
    int f21c;
    char unknown220[0x4];
    int f224;
};
struct S_vv3 {
    int f00;
};
void operation_8c07da28(Object *o)
{
    int v1;
    int v2;
    S_vv3 *v3;
    v1 = (int)o->f13c;
    if (v1 != 0 && ((o->f224 & 0x100)) != 0) {
        v2 = (int)((int)o->f21c - (int)o->f218);
        if (v2 > 0) {
            v3 = (S_vv3 *)(v1 + 0x5c8);
            v3->f00 -= v2;
            if (!(v3->f00 >= 0)) {
                v3->f00 = 0;
            }
        }
        o->f224 &= -0x101;
    }
}
