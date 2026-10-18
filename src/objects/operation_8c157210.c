typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c1575ac S_c8c1575ac;
typedef struct Object Object;
struct Object {
    char unknown0[0x44];
    float f44;
    char unknown48[0xc];
    float f54;
    int f58;
    char unknown5c[0x20];
    float f7c;
    unsigned short f80;
};
struct S_c8c1575ac {
    char unknown0[0xc];
    float f0c;
};
extern S_c8c1575ac *operation_8c1575ac(void *);
void operation_8c157210(Object *o)
{
    int v7;
    float v8;
    float v6;
    S_c8c1575ac *t1;
    if (((o->f80 & 0xffff & 0x20)) != 0) {
        t1 = operation_8c1575ac((void *)o);
        v6 = (float)t1->f0c;
    } else {
        v6 = (float)0.0f;
    }
    v7 = (int)o->f58;
    if (v7 == 0) {
        o->f7c = v6;
        return;
    }
    v8 = (float)((o->f44 - o->f54) * 0.5f + v6 - o->f7c);
    o->f7c = v8 / (float)(unsigned int)v7 + o->f7c;
}
