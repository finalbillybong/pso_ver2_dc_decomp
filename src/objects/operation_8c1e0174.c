typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c41ccec S_L8c41ccec;
typedef struct Object Object;
typedef struct Arg0_7c Arg0_7c;
struct Object {
    char unknown0[0x68];
    int f68;
    char unknown6c[0x10];
    Arg0_7c *f7c;
};
struct S_L8c41ccec {
    char unknown0[0xe];
    unsigned char f0e;
};
struct Arg0_7c {
    char unknown0[0xbc];
    int fbc;
};
extern S_L8c41ccec g_8c41ccec;
void operation_8c1e0174(Object *o, int a1)
{
    int v19;
    int v24;
    char m;
    int b;
    int pm3;
    int t;
    m = g_8c41ccec.f0e;
    b = (unsigned char)a1;
    if ((b & 0x10) != 0 || 0 != (b & 1)) {
        o->f68 |= 2;
    } else {
        o->f68 &= -3;
    }
    if ((unsigned char)m == 1) {
        if ((b & 0x40) != 0 || (b & 4) != 0) {
            o->f68 |= 4;
        } else {
            o->f68 &= -5;
        }
    } else {
        if ((b & 0x40) != 0 || ((b & 4) != 0 && (o->f68 & 2) != 0)) {
            o->f68 |= 8;
        } else {
            pm3 = -9 & o->f68;
            o->f68 = pm3;
        }
    }
    if ((unsigned int)1 >= (unsigned int)(unsigned char)(m + -4)) {
        o->f68 |= 1;
    } else {
        o->f68 = (unsigned int)o->f68 >> 1 << 1;
    }
    if ((b & 0x20) != 0 || (b & 2) != 0) {
        o->f68 |= 0x80;
    } else {
        o->f68 &= -0x81;
    }
    v19 = o->f68;
    if ((v19 & 0x80) != 0 && (v19 & 1) != 0) {
        o->f68 = v19 & -0x11;
    }
    v24 = o->f68;
    t = v24 & 0x80;
    if ((t != 0 && (v24 & 0x10) == 0) || ((v24 & 0x10) != 0 && t == 0)) {
        o->f68 |= 0x20;
    } else {
        o->f68 &= -0x21;
    }
    if ((o->f68 & 0x80) != 0) {
        o->f7c->fbc |= 0x20;
        return;
    }
    o->f7c->fbc &= -0x21;
}
