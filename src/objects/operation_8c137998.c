typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_64 S_c8c021ef8_64;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    unsigned short tag;
};
struct S_c8c021ef8 {
    char unknown0[0x64];
    S_c8c021ef8_64 *f64;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c137460(int, Object *, S_c8c021ef8 *, void *, void *);
extern void call_8c1ab01c(int, int, void *, int);
int operation_8c137998(Object *o)
{
    int v69;
    int v90;
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    v90 = (int)0;
    if (o != 0) {
        t1 = lookup_low_id(o->tag);
        v69 = (int)0;
        if (t1 != 0) {
            t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x134);
            if (t2 != 0) {
                call_8c137460(t2, o, t1, ((char *)t1 + 0x3c), t1->f64);
            }
            if (t2 != 0) {
                t3 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x2c);
                if (t3 != 0) {
                    call_8c1ab01c(t3, t2, (void *)0x8c137a28, 0x5a);
                }
            }
            v69 = (int)t2;
        }
        v90 = (int)v69;
    }
    return v90;
}
