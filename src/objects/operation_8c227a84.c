typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x30];
    float f30;
    char unknown34[0xc];
    float f40;
    char unknown44[0x1c];
    float f60;
};
struct S_vv3 {
    float f00;
};
void operation_8c227a84(Object *o, float f0)
{
    int v2;
    int v1;
    S_vv3 *v3;
    float q;
    if (f0 != 0.0f) {
        q = -1.0f / f0;
        o->f30 = q;
        o->f40 = q;
        o->f60 = 0.0f;
        v1 = (int)((char *)o + 0x70);
        for (v2 = 0; v2 != 4; v2++) {
            v3 = (S_vv3 *)v1;
            v3 = (S_vv3 *)((int)v3 + (v2 << 4));
            v3->f00 = q;
        }
    }
}
