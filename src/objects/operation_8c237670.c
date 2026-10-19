typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c510b80 S_L8c510b80;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x26];
    int f2c;
    int f30;
    int f34;
    int f38;
    char unknown3c[0x4];
    int f40;
    int f44;
};
struct S_L8c510b80 {
    char unknown0[0x10];
    short f10;
};
extern S_L8c510b80 g_8c510b80;
extern void call_8c237348(Object *);
void operation_8c237670(Object *o)
{
    int v1;
    int v2;
    int v19;
    if (o->f2c != 0) {
        if (o->f44 != 0) {
            v1 = (int)0x10;
        } else {
            v1 = (int)1;
        }
        if ((((&g_8c510b80)->f10 & v1)) != 0) {
            o->f40 = 1;
            call_8c237348(o);
            goto L_8c2376e6;
        }
        o->f40 = 0;
        o->f34 = 0;
    } else {
        if (o->f44 != 0) {
            v2 = (int)0x20;
        } else {
            v2 = (int)2;
        }
        if ((((&g_8c510b80)->f10 & v2)) != 0) {
            o->f40 = 1;
            call_8c237348(o);
        } else {
            o->f40 = 0;
            o->f34 = 0;
        }
    }
L_8c2376e6:;
    v19 = (int)o->f30;
    o->f30 = v19 + 1;
    if (v19 >= o->f38) {
        o->f04 |= 1;
    }
}
