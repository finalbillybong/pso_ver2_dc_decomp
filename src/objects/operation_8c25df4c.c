typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
    char unknown24[0x4];
    int f28;
    int f2c;
    int f30;
    int f34;
};
void operation_8c25df4c(Object *o)
{
    char *v11;
    int v1;
    int v3;
    o->f20 += 1;
    v11 = (char *)o->f28;
    if ((int)(v11) > 0) {
        v1 = (int)(v11 + -1);
        o->f28 = (int)(v1);
        if (30.0f > (float)v1) {
            o->f28 = 0x1e;
        }
        v3 = (int)((int)o->f30 + 1);
        o->f30 = (int)(v3);
        if (!(30.0f > (float)v3)) {
            o->f2c = (int)(o->f28);
            o->f30 = 0;
        }
    }
    if (((int)o->f20 - (int)o->f34) >= 0x1c2) {
        o->f04 |= 1;
    }
}
