typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d59d8 S_g8c4d59d8;
typedef struct Object Object;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x28];
    Arg0_28 *f28;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct S_g8c4d59d8 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c024720(void *);
extern int lookup_low_id(int);
extern void call_8c02aff0(int);
void operation_8c10664c(Object *o)
{
    int v21;
    int t1;
    if (o->f28 != 0) {
        operation_8c024720(o->f28);
        o->f28 = (Arg0_28 *)0;
    }
    v21 = (int)0;
    while (4 > v21) {
        t1 = lookup_low_id(v21);
        if (t1 != 0) {
            call_8c02aff0(t1);
        }
        v21 = (int)(v21 + 1);
    }
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 = (unsigned int)(*(S_g8c46fe20 **)0x8c46fe20)->f20 >> 1 << 1;
        if (*(int *)0x8c4d59d8 != 0) {
            (*(S_g8c4d59d8 **)0x8c4d59d8)->f04 &= -0x11;
        }
    }
}
