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
    char unknown68[0x80];
    int fe8;
    char unknownec[0x4];
    short ff0;
    char unknownf2[0x21a];
    short f30c;
    char unknown30e[0x2ba];
    int f5c8;
    char unknown5cc[0x214];
    int f7e0;
};
extern short operation_02c350(void *);
extern void operation_8c1e8e60(int, int, int);
extern void call_8c1e9240(Object *, void *, void *);
void operation_8c1ee800(Object *o)
{
    short t1;
    short v;
    switch (o->f30c) {
    case 1:
        t1 = operation_02c350((void *)o);
        v = *(short *)((char *)0x8c2e7432 + (t1 << 1));
        if (o->ff0 != v) {
            return;
        }
        if (((o->fe8 & 0x10)) == 0) {
            return;
        }
        if (((o->f34 & 0x800)) == 0) {
            return;
        }
        o->f7e0 |= 1;
        operation_8c1e8e60((int)o, 0xf, 5);
        return;
    case 2:
        if (((o->fe8 & 0x10)) != 0) {
            o->f5c8 = 0x3c;
            call_8c1e9240(o, (void *)(((char *)o + 0x3c)), (void *)(o->f64));
        }
    }
}
