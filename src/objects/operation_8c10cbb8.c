typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_78 Arg0_78;
typedef struct Arg0_7c Arg0_7c;
typedef struct Arg0_7c_4 Arg0_7c_4;
struct Object {
    char unknown0[0x48];
    float f48;
    float f4c;
    char unknown50[0xc];
    float f5c;
    char unknown60[0xa];
    short f6a;
    char unknown6c[0xc];
    Arg0_78 *f78;
    Arg0_7c *f7c;
    char unknown80[0x4];
    int f84;
};
struct Arg0_78 {
    char unknown0[0x8c];
    int f8c;
};
struct Arg0_7c {
    int f00;
    Arg0_7c_4 *f04;
    char unknown8[0x88];
    int f90;
    int f94;
};
extern int lookup_object_by_id(unsigned short);
extern float squared_distance_xz(void *, void *);
int operation_8c10cbb8(Object *o)
{
    Arg0_7c *v4;
    float v1;
    int v3;
    int t1;
    float t2;
    v4 = o->f7c;
    v1 = (float)(o->f48 * o->f48);
    if (((o->f78->f8c & 2)) != 0) {
        o->f84 &= -0x101;
        return 0;
    }
    if (((v4->f90 & 8)) != 0) {
        o->f84 |= 0x100;
        return 1;
    }
    if (!(v1 > o->f5c)) {
        o->f84 |= 0x100;
        if (v4->f00 != 0) {
            o->f6a += 1;
            if (o->f6a >= 3) {
                o->f6a = 0;
                v3 = (int)1;
            } else {
                v3 = (int)0;
            }
            if (v3 != 0) {
                t1 = lookup_object_by_id((unsigned short)(v4->f04));
                o->f84 &= -0x8001;
                if (t1 != 0) {
                    t2 = squared_distance_xz((void *)(t1 + 0x3c), (void *)(o->f7c->f94 + 0x3c));
                    if ((o->f4c * o->f4c) > t2) {
                        o->f84 |= 0x8080;
                    }
                }
            }
        }
        return 1;
    }
    if (((o->f84 & 0x100)) != 0) {
        return 1;
    }
    o->f84 &= -0x101;
    return 0;
}
