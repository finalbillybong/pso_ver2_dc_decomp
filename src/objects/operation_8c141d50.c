typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct Arg0_334 Arg0_334;
struct Object {
    char unknown0[0x334];
    Arg0_334 *f334;
};
struct Arg0_334 {
    char unknown0[0x20];
    unsigned short f20;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x318];
    int f350;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern void call_8c02688c(S_c8c021ef8 *);
void operation_8c141d50(Object *o)
{
    int v1;
    S_c8c021ef8 *t1;
    if (o->f334 != 0 && *(int *)0x8c418248 == o->f334->f20) {
        t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
        if (t1 != 0) {
            v1 = (int)(((t1->f350 & 1)) != 0);
            if (v1 != 0) {
                call_8c02688c(t1);
            }
            t1->f34 &= -0x20001;
        }
    }
}
