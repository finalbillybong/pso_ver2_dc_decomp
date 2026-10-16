typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_90 Arg0_90;
typedef struct Arg0_94 Arg0_94;
typedef struct S_vv2 S_vv2;
typedef struct S_vv2_2c S_vv2_2c;
typedef struct S_vv2_30 S_vv2_30;
typedef struct S_vv3 S_vv3;
struct Object {
    char unknown0[0x8c];
    int f8c;
    Arg0_90 *f90;
    Arg0_94 *f94;
};
struct Arg0_90 {
    int f00;
};
struct S_vv2 {
    int f00;
    char unknown4[0x10];
    int f14;
    int f18;
    int f1c;
    char unknown20[0xc];
    S_vv2_2c *f2c;
    S_vv2_30 *f30;
};
struct Arg0_94 {
    int f00;
    int f04;
};
struct S_vv3 {
    char unknown0[0x8];
    int f08;
};
extern void call_8c08b3cc(Object *, void *);
void operation_8c08b3cc(Object *o, S_vv2 *a1)
{
    int v1;
    S_vv3 *v3;
    v1 = (int)-3;
    do {
        if (!(o->f90->f00 >= 0)) {
            break;
        }
        if (o->f90->f00 == o->f8c) {
            a1->f00 &= v1;
            o->f94->f00 = (int)(a1->f14);
            o->f94->f04 = (int)(a1->f18);
            v3 = (S_vv3 *)o->f94;
            v3->f08 = (int)(a1->f1c);
            o->f94 = (Arg0_94 *)((int)o->f94 + 0xc);
            o->f90 = (Arg0_90 *)((int)o->f90 + 0x10);
            if (!(o->f90->f00 >= 0)) {
                return;
            }
        }
        o->f8c += 1;
        if (a1->f2c != 0) {
            call_8c08b3cc(o, (void *)(a1->f2c));
        }
        a1 = (S_vv2 *)a1->f30;
    } while (a1 != 0);
}
