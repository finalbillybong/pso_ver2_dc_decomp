typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
    int f24;
    int f28;
    char unknown2c[0x10];
    float f3c;
    float f40;
    Arg0_44 *f44;
};
extern void operation_8c014f1c(void *);
extern void copy_pair_8c014f10(void *, void *);
extern void call_8c014ebc(void *, void *);
extern void operation_8c014f28(void *);
void operation_8c185c08(Object *o)
{
    float v3;
    float v5;
    float v6;
    float v7;
    switch (o->f24) {
    case 0:
    case 3:
        if (o->f28 != 1) {
            goto L_8c185c52;
        }
        o->f28 = 0;
        o->f24 = 1;
        operation_8c014f1c((void *)(o->f44));
        break;
    case 1:
    case 2:
        if (o->f28 == 2) {
            o->f28 = 0;
            o->f24 = 3;
        }
    }
L_8c185c52:;
    switch (o->f24) {
    case 0:
        break;
    case 1:
        v3 = (float)(o->f3c + 3.0f);
        v5 = (float)v3;
        if (!(60.0f > v3)) {
            o->f24 = 2;
            v5 = (float)60.0f;
        }
        o->f3c = v5;
        o->f40 = v5 + 40.0f;
        copy_pair_8c014f10((void *)(o->f44), (void *)(&o->f3c));
        call_8c014ebc((void *)(o->f44), (void *)(o->f20));
        return;
    case 2:
        call_8c014ebc((void *)(o->f44), (void *)(o->f20));
        return;
    case 3:
        v6 = (float)(o->f3c - 3.0f);
        v7 = (float)v6;
        if (!(v6 > 0.0f)) {
            o->f24 = 0;
            v7 = (float)0.0f;
            operation_8c014f28((void *)(o->f44));
        }
        o->f3c = v7;
        o->f40 = v7 + 40.0f;
        copy_pair_8c014f10((void *)(o->f44), (void *)(&o->f3c));
        call_8c014ebc((void *)(o->f44), (void *)(o->f20));
    }
}
