typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv11 S_vv11;
struct Object {
    char unknown0[0xc4];
    float fc4;
    float fc8;
    float fcc;
};
struct S_vv11 {
    char unknown0[0x14];
    int f14;
};
void operation_8c107f34(Object *o)
{
    float v1;
    float v6;
    S_vv11 *v11;
    int v10;
    int v12;
    v1 = (float)o->fc8;
    if (!(v1 > o->fc4)) {
        o->fc8 = v1 + 0.2f;
        if (!(o->fc8 > 0.0f)) {
            return;
        }
    }
    v6 = (float)o->fcc;
    if (1.0f > v6) {
        o->fcc = v6 + 0.05f;
        if (o->fcc > 1.0f) {
            o->fcc = 1.0f;
        }
        if ((o->fcc * 255.0f) > 2147483648.0f) {
        }
        v10 = (int)(unsigned int)(o->fcc * 255.0f);
        v11 = (S_vv11 *)((char *)o + 0x5c);
        v12 = (int)0;
        while (4 > v12) {
            v11->f14 = v10 << 0x18 | 0xffffff;
            v12 = (int)(v12 + 1);
            v11 = (S_vv11 *)((char *)v11 + 24);
        }
    }
}
