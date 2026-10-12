typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c313114 S_g8c313114;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x334];
    int f334;
    char unknown338[0x1c];
    unsigned short f354;
    char unknown356[0x4e];
    int f3a4;
};
extern int lookup_low_id(int);
extern int allocate_block(void *, unsigned int);
extern void call_8c159a28(int, Object *, int, short, void *);
void operation_8c15435c(Object *o, int a1)
{
    int t1;
    int t2;
    o->f354 = a1;
    t1 = lookup_low_id(o->f354 & 0xffff);
    o->f334 = t1;
    if (o->f334 != 0) {
        t2 = allocate_block(*(S_g8c4d97e0 **)0x8c4d97e0, (unsigned int)0x3b0);
        if (t2 != 0) {
            call_8c159a28(t2, o, a1, *(short *)0x8c313110, *(S_g8c313114 **)0x8c313114);
        }
        o->f3a4 |= 0x200000;
    }
}
