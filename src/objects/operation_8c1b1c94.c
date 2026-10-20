typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_394 Arg0_394;
struct Object {
    char unknown0[0x394];
    Arg0_394 *f394;
    char unknown398[0x10];
    int f3a8;
    char unknown3ac[0x8];
    int f3b4;
    int f3b8;
    char unknown3bc[0x10];
    unsigned short f3cc;
    char unknown3ce[0x1a];
    int f3e8;
    char unknown3ec[0x38];
    int f424;
};
void operation_8c1b1c94(Object *o)
{
    int v6;
    int v7;
    int v8;
    int v9;
    int v10;
    int a;
    int k;
    float t1;
    float t2;
    float t3;
    if (3 > o->f3e8) {
        t1 = ((float (*)(Object *))0x8c04aa9c)(o);
        if (0.1f > t1) {
            t2 = ((float (*)(Object *))0x8c04aa9c)(o);
            a = o->f3a8;
            k = a + ((int)(t2 * 49152.0f) + 0x2000);
            if (o->f394 == 0) {
                return;
            }
            ((void (*)(void *, int))0x8c1ae0d8)(o->f394, (k >> 0xc & 0xf) << 8 | ((a >> 0xc & 0xf) << 4 | 4) | (o->f3b4 & 0xf) << 0xc | (o->f3b8 & 0xf) << 0x10 | (o->f3cc & 0xffff & 0xf) << 0x14);
            return;
        }
    }
    t3 = ((float (*)(Object *))0x8c04aa9c)(o);
    if (0.1f > t3) {
        v6 = (int)((int)o->f424 + 1);
        v7 = (int)o->f424;
        v8 = (int)v6;
        if (o->f424 > v6) {
            v7 = (int)v6;
            v8 = (int)o->f424;
        }
        v9 = (int)v7;
        if (9 > v7) {
            v9 = (int)9;
        }
        v10 = (int)v8;
        if (v8 > 0xc) {
            v10 = (int)0xc;
        }
        ((void (*)(Object *, int, int))0x8c1b19d8)(o, v9, v10);
        return;
    }
    ((void (*)(Object *))0x8c1b1ab0)(o);
}
