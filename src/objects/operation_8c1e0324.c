typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41ccec S_L8c41ccec;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct S_L8c41ccec {
    char unknown0[0x2];
    unsigned char f02;
    unsigned char f03;
    char unknown4[0x4];
    unsigned char f08;
};
struct Object {
    char unknown0[0x6c];
    int f6c;
    char unknown70[0xc];
    Arg0_7c *f7c;
};
struct Arg0_7c {
    char unknown0[0x68];
    unsigned short f68;
};
extern S_L8c41ccec g_8c41ccec;
extern void call_8c1e03ec(Object *, char);
void operation_8c1e0324(Object *o)
{
    int v1;
    float v4;
    unsigned char c;
    if ((unsigned int)3 >= (unsigned int)(&g_8c41ccec)->f02) {
        o->f6c = 0;
        return;
    }
    if ((unsigned int)(&g_8c41ccec)->f08 > (unsigned int)3) {
        o->f6c = 0;
        v1 = (int)0;
        while (6 > v1) {
            c = *(unsigned char *)((char *)&g_8c41ccec.f08 + (v1));
            if (3 >= (unsigned char)c) {
                break;
            }
            call_8c1e03ec(o, c);
            if (((o->f7c->f68 & 1)) != 0) {
                break;
            }
            v1 = (int)(v1 + 1);
        }
        return;
    }
    if ((&g_8c41ccec)->f03 != 0) {
        o->f6c = 0;
        return;
    }
    o->f6c += 1;
    v4 = (float)(float)(unsigned int)o->f6c;
    if (!(7.2f > v4)) {
        o->f6c -= 1;
        call_8c1e03ec(o, (&g_8c41ccec)->f02);
    }
}
