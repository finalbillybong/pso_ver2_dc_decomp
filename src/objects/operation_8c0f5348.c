typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x1b6];
    unsigned short f1b6;
    char unknown1b8[0x224];
    int f3dc;
    char unknown3e0[0x7c];
    int f45c;
};
extern int lookup_low_id(int);
extern void call_8c05bed8(Object *, int);
void operation_8c0f5348(Object *o)
{
    int t1;
    if ((unsigned int)0x1000 > (unsigned int)(o->f1b6 & 0xffff)) {
        t1 = lookup_low_id(o->f1b6 & 0xffff);
        if (t1 != 0) {
            call_8c05bed8(o, t1);
        }
        o->f3dc |= 8;
    }
    o->f45c += 1;
}
