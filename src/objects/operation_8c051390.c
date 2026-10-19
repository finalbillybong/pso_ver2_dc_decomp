typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb8];
    short ff0;
    char unknownf2[0x218];
    short f30a;
    char unknown30c[0x84];
    short f390;
    char unknown392[0xa];
    short f39c;
};
extern void call_8c05fbf8(int, void *, int, int);
extern void call_8c0129e8(Object *);
extern void call_8c012884(Object *);
extern void operation_8c0519c8(void *);
void operation_8c051390(Object *o)
{
    short v1;
    o->f34 &= -0x40;
    v1 = (short)o->f390;
    if ((((short)v1 & 2)) != 0) {
        if ((((short)v1 & 4)) == 0) {
            o->f390 = v1 | 4;
            call_8c05fbf8(0x30013, (void *)(((char *)o + 0x3c)), 0, 0);
            call_8c0129e8(o);
            o->ff0 = 8;
        }
        return;
    }
    if (o->f30a != 5) {
        o->f30a = 5;
        o->ff0 = 7;
        if (((o->f390 & 0x10)) == 0) {
            call_8c05fbf8(0x30010, (void *)(((char *)o + 0x3c)), 0, 0);
            call_8c012884(o);
            operation_8c0519c8((void *)o);
        }
        o->f39c = 0;
    }
}
