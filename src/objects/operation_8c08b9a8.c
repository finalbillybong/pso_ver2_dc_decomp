typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct Object Object;
typedef struct Block_p0_20 {
    float f00;
    float f04;
    char unknown8[0x4];
} Block_p0_20;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
struct Object {
    char unknown0[0x20];
    Block_p0_20 f20;
    char unknown2c[0x98];
    short fc4;
};
struct S_c8c021ef8 {
    char unknown0[0x3c];
    Block_p0_20 f3c;
};
extern void call_8c03ce84(void);
extern void call_8c02473c(void);
extern S_c8c021ef8 *lookup_low_id(int);
extern int advance_counter_8c01d5fc(int);
void operation_8c08b9a8(Object *o)
{
    S_c8c021ef8 *t1;
    int t2;
    *(char *)0x8c469da0 = 1;
    call_8c03ce84();
    call_8c02473c();
    if (*(int *)0x8c46fe20 != 0) {
        (*(S_g8c46fe20 **)0x8c46fe20)->f20 |= 0x10;
    }
    t1 = lookup_low_id(0);
    if (t1 != 0) {
        o->f20 = t1->f3c;
        o->f20.f00 += 20.0f;
        o->f20.f04 += 20.0f;
    }
    t2 = advance_counter_8c01d5fc(0);
    o->fc4 = t2;
}
