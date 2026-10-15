typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv6 S_vv6;
struct Object {
    char unknown0[0x3c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x2c0];
    short f308;
    char unknown30a[0x2f6];
    float f600;
    float f604;
    float f608;
    float f60c;
    float f610;
    int f614;
    int f618;
    float f61c;
    float f620;
    float f624;
    float f628;
    char unknown62c[0x184];
    int f7b0;
};
struct S_vv6 {
    int f00;
};
extern void transform_with_8c05214c(void *, int, int);
void operation_8c020bd0(Object *o)
{
    o->f600 = 0.0f;
    o->f604 = 0.0f;
    o->f608 = 0.0f;
    o->f60c = 5.0f;
    o->f610 = 5.0f;
    o->f614 = 0;
    if (o->f308 != 1 && o->f308 != 2) {
        if (o->f308 == 3) {
            goto L_8c020c38;
        }
        if (o->f308 == 6) {
            goto L_8c020c50;
        }
        goto L_8c020c56;
    }
    if (o->f7b0 == 0) {
        o->f618 = 0x4013;
    } else {
        o->f618 = 0x4003;
        goto L_8c020c56;
L_8c020c38:;
        if (o->f7b0 == 0) {
            o->f618 = 0xc093;
        } else {
            o->f618 = 0xc083;
            goto L_8c020c56;
L_8c020c50:;
            o->f618 = 0x2c083;
        }
    }
L_8c020c56:;
    o->f61c = o->f3c;
    o->f620 = o->f40;
    o->f624 = o->f44;
    o->f628 = 0.0f;
    transform_with_8c05214c((void *)o, (int)(&o->f600), 1);
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
