typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
struct Object {
    char unknown0[0x50];
    float f50;
    float f54;
    char unknown58[0x48];
    float fa0;
    float fa4;
};
struct Arg2 {
    float f00;
    float f04;
};
struct Arg1 {
    float f00;
    float f04;
};
extern float g_8c4e2ba8;
extern float g_8c4e2bac;
extern float g_8c4e2bb0;
extern float g_8c4e2bb4;
extern void call_8c0e0060(Object *, int, void *);
extern int operation_8c0dc92c(int, int, int);
int operation_8c0e0324(Object *o, Arg1 *a1, Arg2 *a2)
{
    float v1;
    float v2;
    int t1;
    v1 = (float)o->fa0;
    v2 = (float)o->fa4;
    call_8c0e0060(o, 0, (void *)(&o->fa0));
    a2->f00 = o->fa0 - v1 + a1->f00;
    a2->f04 = o->fa4 - v2 + a1->f04;
    {
        float lim;
        lim = g_8c4e2ba8 + 20.0f;
        if (lim > a2->f00) {
            a2->f00 = lim;
        }
        {
            float s;
            lim = g_8c4e2bb0 - 20.0f;
            v1 = o->f50;
            s = 1.0f;
            lim -= v1 * s;
        }
        if (a2->f00 > lim) {
            a2->f00 = lim;
        }
        lim = g_8c4e2bac + 40.0f;
        if (lim > a2->f04) {
            a2->f04 = lim;
        }
        {
            float s;
            lim = g_8c4e2bb4 - 40.0f;
            v1 = o->f54;
            s = 1.0f;
            lim -= v1 * s;
        }
        if (a2->f04 > lim) {
            a2->f04 = lim;
        }
    }
    t1 = operation_8c0dc92c((int)o, (int)a2, (int)(((char *)o + 0x40)));
    if (t1 == 0) {
        return 1;
    }
    return 0;
}
