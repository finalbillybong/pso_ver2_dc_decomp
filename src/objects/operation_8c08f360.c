typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block64 {
    int words[16];
} Block64;
typedef struct S_c8c08ff88 S_c8c08ff88;
typedef struct S_g8c469dc4 S_g8c469dc4;
typedef struct Object Object;
typedef struct S_vv1 S_vv1;
typedef struct Block_p0_bc {
    short f00;
    char unknown2[0x4];
    short f06;
    char unknown8[0x8];
    Vector3 f10;
    char unknown1c[0x24];
} Block_p0_bc;
typedef struct Block_c8c08ff88_4 {
    char unknown0[0x8];
    short f08;
    char unknowna[0x36];
} Block_c8c08ff88_4;
struct S_c8c08ff88 {
    short f00;
    char unknown2[0x2];
    Block_c8c08ff88_4 f04;
};
struct Object {
    char unknown0[0x20];
    Vector3 f20;
    char unknown2c[0x90];
    Block_p0_bc fbc;
    char unknownfc[0x4];
    int f100;
};
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_c8c08ff88 *call_8c08ff88(Object *, void *);
extern int call_8c0900a0(Object *, short);
extern int advance_counter_8c01d5e8(int);
extern void operation_8c090238(void *, int);
void operation_8c08f360(Object *o)
{
    S_vv1 *v1;
    S_c8c08ff88 *t1;
    int t2;
    int t3;
    t1 = call_8c08ff88(o, (void *)(&o->f20));
    if (t1 != 0) {
        t2 = call_8c0900a0(o, t1->f00);
        if (t2 != 0) {
            *(Block64 *)&o->fbc = *(Block64 *)&t1->f04;
            t3 = advance_counter_8c01d5e8(0);
            o->fbc.f06 = t3;
            o->fbc.f00 = -1;
            *(Vector3 *)&o->f20 = *(Vector3 *)&o->fbc.f10;
            o->f100 = (int)(t2);
            v1 = (S_vv1 *)*(S_g8c469dc4 **)0x8c469dc4;
            v1->f04 |= 1;
            *(int *)0x8c469dc4 = 0;
            operation_8c090238((void *)o, (int)(t1->f04.f08));
        }
    }
}
