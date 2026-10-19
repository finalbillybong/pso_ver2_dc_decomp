typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
void operation_8c126aa4(Object *o)
{
    int v1;
    int v2;
    short v4;
    int v3;
    v1 = (int)o->f3a4;
    v2 = (int)(((v1 & 0x1000000)) != 0);
    if (v2 != 0) {
        v3 = (int)9;
    } else {
        v3 = (int)2;
    }
    if (((v1 & 1)) == 0) {
        v4 = (short)o->f30a;
        if (v4 != v3) {
            o->f39c = (int)(v4);
            o->f390 = (int)(v3);
        }
    }
}
