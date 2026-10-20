typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_g8c418248 S_g8c418248;
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
    char unknown38[0x2f8];
    short f330;
};
extern S_g8c418248 *g_8c418248;
extern S_c8c021ef8 *lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
extern void operation_8c04a7a0(void *, int);
extern void operation_8c04a8ac(void *, int);
extern void operation_8c02a5a8(int, int, short);
void operation_8c1a034c(Object *o)
{
    unsigned short v99;
    unsigned short v100;
    int v98;
    S_c8c021ef8 *t1;
    float t2;
    S_c8c021ef8 *t3;
    v99 = (unsigned short)o->f12c;
    v100 = (unsigned short)0xffff;
    if ((v99 & 0xffff) != v100 && (unsigned int)0x1000 > (unsigned int)(v99 & 0xffff)) {
        t1 = lookup_low_id((int)(v99 & 0xffff));
        if (t1 != 0 && ((t1->f34 & 0x800)) == 0) {
            t2 = squared_distance_xz((void *)(((char *)t1 + 0x3c)), (void *)(((char *)o + 0x3c)));
            if (225.0f > t2) {
                operation_8c04a7a0((void *)t1, 1);
                operation_8c04a8ac((void *)t1, 1);
            }
        }
    }
    o->f104 += 0x147;
    o->f108 -= 0.37166664f;
    o->f11c = o->f40 + 22.3f - o->f108;
    if (!(o->f108 > 0.0f)) {
        o->f108 = 0.0f;
        o->fe4 = 0;
        v98 = (int)g_8c418248;
        if ((o->f12c & 0xffff) == v98) {
            t3 = lookup_low_id(v98);
            if (t3 != 0 && t3->f330 > 0) {
                operation_8c02a5a8(0xffff, (int)g_8c418248, t3->f330);
            }
        }
    }
}
