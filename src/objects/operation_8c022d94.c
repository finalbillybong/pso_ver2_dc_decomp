typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_3b8 Arg0_3b8;
typedef struct Arg0_3b8_s458 Arg0_3b8_s458;
struct Object {
    char unknown0[0x34];
    int f34;
    char unknown38[0x380];
    Arg0_3b8 *f3b8;
};
struct Arg0_3b8_s458 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x2];
    float f08;
};
extern int lookup_object_by_id(unsigned short);
extern int call_8c022e70(Object *, int);
int operation_8c022d94(Object *o)
{
    int v1;
    short v2;
    Arg0_3b8_s458 *p;
    float v3;
    int t1;
    int t2;
    int t3;
    int t4;
    p = (Arg0_3b8_s458 *)o->f3b8;
    if (p == 0) {
        return 0;
    }
    v1 = (int)o->f34;
    p = (Arg0_3b8_s458 *)((char *)p + 0x458);
    v2 = p->f04;
    v3 = p->f08;
    if (((v1 & 0x100000)) == 0) {
        if ((unsigned short)v2 == 0xffff) {
            return 0;
        }
        t1 = lookup_object_by_id((unsigned short)v2);
        if (t1 == 0) {
            return 0;
        }
        if (!(2500.0f > v3)) {
            goto L_8c022e40;
        }
        t2 = call_8c022e70(o, (int)(t1 + 0x3c));
        if (t2 == 0) {
            goto L_8c022e40;
        }
        o->f34 |= 0x100000;
        return 1;
    }
    if ((unsigned short)v2 == 0xffff) {
        o->f34 = v1 & -0x100001;
        return 0;
    }
    t3 = lookup_object_by_id((unsigned short)v2);
    if (t3 == 0) {
        return 0;
    }
    if (!(v3 > 3600.0f)) {
        t4 = call_8c022e70(o, (int)(t3 + 0x3c));
        if (t4 != 0) {
            goto L_8c022e40;
        }
    }
    o->f34 &= -0x100001;
    return 0;
L_8c022e40:;
    return 0;
}
