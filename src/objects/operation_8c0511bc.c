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
    char unknownf2[0xc4];
    unsigned short f1b6;
    char unknown1b8[0x152];
    short f30a;
    char unknown30c[0x84];
    short f390;
};
extern int lookup_low_id(int);
extern float squared_distance_xyz(void *, void *);
extern void operation_8c0519c8(void *);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c0511bc(Object *o)
{
    int t1;
    float t2;
    o->f34 &= -0x200001;
    if (((o->f390 & 2)) != 0) {
        o->f34 &= -0x240;
        return;
    }
    if (o->f30a != 4) {
        o->f30a = 4;
        o->ff0 = 6;
        t1 = lookup_low_id((int)(o->f1b6 & 0xffff));
        if (t1 != 0) {
            t2 = squared_distance_xyz((void *)(((char *)o + 0x3c)), (void *)(t1 + 0x3c));
            if (!(10000.0f > t2)) {
                o->f390 |= 2;
                operation_8c0519c8((void *)o);
            }
        }
        call_8c05fbf8(0x3000f, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
