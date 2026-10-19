typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_38c Arg0_38c;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x160];
    short f198;
    char unknown19a[0x170];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x30];
    Arg0_38c *f38c;
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    char unknown3a8[0x1c];
    int f3c4;
};
extern void operation_8c109bd0(void *);
extern int call_8c18e768(int, int);
extern void operation_8c109da0(void *);
extern int call_8c24e644(int, void *);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c109524(Object *o)
{
    int v4;
    int t1;
    int t2;
    int t3;
    if (o->f30a != 4) {
        operation_8c109bd0((void *)o);
        v4 = 0;
        switch (o->f3c4) {
        case 0:
            t2 = call_8c18e768((int)(o->f198), 3);
            v4 = (int)(t2 >= o->f330);
            break;
        case 1:
            t3 = call_8c18e768((int)(o->f198), 4);
            v4 = (int)(t3 >= o->f330);
            break;
        }
        if (v4 != 0) {
            operation_8c109da0((void *)o);
        }
        o->f35a = o->f330;
        t1 = call_8c24e644(0x3000f, (void *)(o->f38c));
        call_8c05fbf8(t1, (void *)(((char *)o + 0x3c)), 0, 0);
        if (((o->f3a4 & 0x40000)) == 0) {
            if (o->f30a != 4) {
                o->f39c = o->f30a;
                o->f390 = 4;
            }
            o->f3a4 |= 1;
            return;
        }
        o->f34 &= -0x200201;
    }
}
