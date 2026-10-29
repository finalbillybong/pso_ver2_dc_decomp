typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x2d0];
    short f308;
    char unknown30a[0x86];
    int f390;
    char unknown394[0x4];
    float f398;
    char unknown39c[0x4];
    float f3a0;
    char unknown3a4[0x1cc];
    int f570;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
    int f0c;
};
extern int call_8c1e9cd4(Object *);
extern void operation_8c1e9c80(void *, int, void *, void *);
extern void operation_8c036840(int);
void operation_8c1e98ac(Object *o)
{
    Frame frame;
    int v2;
    int t1;
    float pm3;
    int pm2;
    t1 = call_8c1e9cd4(o);
    if (0 != t1) {
        void *pm4;
        pm4 = (void *)(&o->f398);
        operation_8c1e9c80((void *)o, (int)(o->f390), pm4, (void *)(&o->f3a0));
        o->f570 = 0;
        if (((o->f34 & 0x100000)) != 0) {
            o->f570 |= 8;
        }
        if (o != 0) {
            v2 = (int)(o->f308 == 2);
            if (v2 != 0) {
                return;
            }
        }
        (&frame)->f00 = 0x1a;
        (&frame)->f01 = 1;
        pm2 = (char)0x3d;
        (&frame)->f00 = pm2;
        (&frame)->f01 = 1;
        pm3 = 0.0f;
        (&frame)->f08 = pm3;
        (&frame)->f04 = 0.0f;
        (&frame)->f0c = 0;
        (&frame)->f00 = 0x40;
        (&frame)->f01 = 4;
        (&frame)->f02 = o->f20;
        (&frame)->f04 = o->f398;
        (&frame)->f08 = o->f3a0;
        (&frame)->f0c = (int)(o->f570);
        operation_8c036840((int)(&frame));
    }
}
