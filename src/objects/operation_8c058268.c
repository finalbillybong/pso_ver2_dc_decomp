typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
struct Object {
    char unknown0[0x3ac];
    Arg0_3ac *f3ac;
    int f3b0;
    char unknown3b4[0x10];
    int f3c4;
    char unknown3c8[0x4];
    int f3cc;
    int f3d0;
    char unknown3d4[0xa8];
    int f47c;
    int f480;
    int f484;
    int f488;
    int f48c;
};
extern int call_8c18e768(void *, int);
void operation_8c058268(Object *o)
{
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int t1;
    switch (o->f47c) {
    case 0:
        t1 = call_8c18e768((void *)(o->f3ac), 2);
        if (!(t1 >= o->f3cc)) {
            if (o->f3c4 == 0) {
                return;
            }
        }
        o->f47c = 1;
        o->f484 = 0;
        return;
    case 1:
        if (o->f488 > 0) {
            *(int *)((char *)o + 0x484) += 1;
            if (o->f484 > o->f48c) {
                o->f484 = 0;
                v2 = (int)o->f488;
                v3 = (int)(6 - (int)o->f3cc);
                v4 = (int)v2;
                if (v2 > v3) {
                    v4 = (int)v3;
                }
                v5 = (int)((int)o->f3b0 - (int)o->f3d0);
                v6 = (int)v4;
                if (v4 > v5) {
                    v6 = (int)v5;
                }
                o->f480 = (int)(v6);
            }
        }
    }
}
