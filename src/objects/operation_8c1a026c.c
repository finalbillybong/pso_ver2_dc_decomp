typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct Object Object;
struct Object {
    char unknown0[0x40];
    float f40;
    char unknown44[0xa0];
    int fe4;
    char unknowne8[0x1c];
    int f104;
    float f108;
    char unknown10c[0x10];
    float f11c;
    char unknown120[0xc];
    unsigned short f12c;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void call_8c04a7a0(S_c8c021ef8 *, int);
extern void call_8c04a8ac(S_c8c021ef8 *, int);
void operation_8c1a026c(Object *o)
{
    S_c8c021ef8 *t1;
    float t2;
    if ((o->f12c & 0xffff) != 0xffff) {
        if ((unsigned int)0x1000 > (unsigned int)(o->f12c & 0xffff)) {
            t1 = lookup_low_id(o->f12c & 0xffff);
            if (t1 != 0) {
                if (((t1->f34 & 0x800)) == 0) {
                    t2 = squared_distance_xz(((char *)t1 + 0x3c), ((char *)o + 0x3c));
                    if (225.0f > t2) {
                        call_8c04a7a0(t1, 1);
                        call_8c04a8ac(t1, 1);
                    }
                }
            }
        }
    }
    o->f104 += 0x147;
    o->f108 += 0.37166664f;
    o->f11c = o->f40 + 22.3f - o->f108;
    if (!(22.3f > o->f108)) {
        o->f108 = 22.3f;
        o->fe4 = 2;
    }
}
