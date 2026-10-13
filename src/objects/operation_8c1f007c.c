typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x2c];
    Arg0_64 *f64;
    char unknown68[0x2a4];
    short f30c;
    char unknown30e[0x42];
    int f350;
    char unknown354[0x48c];
    int f7e0;
};
extern void call_8c1e8e60(Object *, int, int);
extern int query_flag_32(void *);
extern void call_8c1e9240(Object *, void *, void *);
void operation_8c1f007c(Object *o)
{
    int t1;
    if (((o->f34 & 0x800)) != 0) {
        o->f7e0 = (unsigned int)o->f7e0 >> 1 << 1;
        call_8c1e8e60(o, 0xf, 5);
        return;
    }
    if (o->f30c != 0) {
        if (o->f30c == 1) {
            goto L_8c1f00d2;
        }
        return;
    }
    t1 = query_flag_32((void *)o);
    if (t1 == 0) {
        call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
        return;
L_8c1f00d2:;
        if (((o->f350 & 0x400)) == 0) {
            call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
        }
    }
}
