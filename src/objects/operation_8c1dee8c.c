typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_70 Arg0_70;
typedef struct S_vv8 S_vv8;
typedef struct S_vv8_70 S_vv8_70;
struct Object {
    char unknown0[0x68];
    int f68;
    char f6c;
    char f6d;
    char unknown6e[0x2];
    Arg0_70 *f70;
};
struct Arg0_70 {
    char unknown0[0xbc];
    int fbc;
};
struct S_vv8 {
    char unknown0[0x70];
    S_vv8_70 *f70;
};
struct S_vv8_70 {
    char unknown0[0xbc];
    int fbc;
};
void operation_8c1dee8c(Object *o)
{
    S_vv8 *v8;
    int v14;
    switch (*(int *)0x8c467188) {
    case 0:
        if (((o->f68 & 0x10)) == 0) {
            o->f6c = o->f6d;
        } else {
            if (o->f6d == 3) {
                o->f6c = 5;
            } else {
                o->f6c = 4;
            }
        }
        v8 = (S_vv8 *)o;
        if (o->f6c == 0) {
            o->f70->fbc |= 1;
            o->f70->fbc &= -0x41;
            return;
        }
        v8->f70->fbc = (unsigned int)v8->f70->fbc >> 1 << 1;
        v8->f70->fbc |= 0x40;
        return;
    case 1:
        if (((o->f68 & 0x10)) != 0) {
            o->f6c = 1;
            return;
        }
        o->f6c = 0;
        return;
    case 2:
    case 3:
    case 4:
        v14 = (int)o->f68;
        if (((o->f68 & 0x10)) != 0) {
            o->f6c = 1;
            return;
        }
        if (((v14 & 0x20)) != 0) {
            o->f6c = 2;
            return;
        }
        o->f6c = 0;
    }
}
