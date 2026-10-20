typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct Object Object;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x3c];
    Arg0_3c *f3c;
};
struct Arg0_3c {
    char unknown0[0x1aa];
    short f1aa;
    char unknown1ac[0x2];
    short f1ae;
    char unknown1b0[0x2];
    short f1b2;
};
struct S_c8c03b55c {
    char unknown0[0x1e4];
    short f1e4;
    short f1e6;
};
extern S_c8c03b55c *call_8c03b55c(void *, int);
float operation_8c169320(Object *o, unsigned int a1, float f0)
{
    float v2;
    float v3;
    float v1;
    S_c8c03b55c *t1;
    v1 = (float)0.0f;
    if (o->f3c == 0) {
    } else {
        t1 = call_8c03b55c((void *)(((char *)o->f3c + 0xbcc)), 1);
        if (t1 == 0) {
        } else {
            switch ((int)a1) {
            case 0:
                v1 = (float)((float)(o->f3c->f1aa * t1->f1e6) * 0.025f + (float)t1->f1e4 * 2.5f + f0);
                break;
            case 1:
                v1 = (float)((float)(o->f3c->f1ae * t1->f1e6) * 0.15f + (float)t1->f1e4 * 15.0f + f0);
                break;
            case 2:
                v1 = (float)((float)(o->f3c->f1aa * t1->f1e6) * 0.075f + (float)t1->f1e4 * 7.5f + f0);
                break;
            case 3:
                v1 = (float)((float)(o->f3c->f1b2 * t1->f1e6) * 0.075f + (float)t1->f1e4 * 7.5f + f0);
                break;
            case 4:
                v1 = (float)(f0 + (float)t1->f1e4 * 0.5f);
                break;
            case 5:
                v2 = (float)((float)t1->f1e4 * 0.1f);
                v3 = (float)v2;
                if (!(20.0f > v2)) {
                    v3 = (float)20.0f;
                }
                v1 = (float)v3;
            }
        }
    }
    return v1;
}
