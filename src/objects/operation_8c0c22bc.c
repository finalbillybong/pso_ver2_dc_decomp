typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    Vector3 f3c;
    char unknown48[0xc];
    Vector3 f54;
    char unknown60[0x2aa];
    short f30a;
    char unknown30c[0x84];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
};
extern void call_8c051ff4(Object *, void *, int);
void operation_8c0c22bc(Object *o)
{
    if (((o->f3a4 & 0x40000)) != 0) {
        o->f3a4 &= -0x40001;
        o->f3c = o->f54;
        call_8c051ff4(o, &o->f3c, 0);
        return;
    }
    if (o->f390 == 7) {
        o->f3a4 = (unsigned int)o->f3a4 >> 1 << 1;
        if (((o->f3a4 & 1)) == 0 && o->f30a != 0) {
            o->f39c = o->f30a;
            o->f390 = 0;
        }
    }
}
