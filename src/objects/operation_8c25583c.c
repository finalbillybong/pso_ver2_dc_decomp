typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    Arg0_24 *f24;
    unsigned short f28;
};
struct S_c8c0744dc {
    char unknown0[0xe4];
    short fe4;
    char unknowne6[0x6];
    int fec;
};
struct S_c8c021ef8 {
    char unknown0[0x34];
    int f34;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern void clear_effect_bit0(void *);
extern void set_effect_bit0(void *);
extern void call_8c0a7608(void *, void *);
void operation_8c25583c(Object *o)
{
    int v1;
    int v23;
    S_c8c021ef8 *t1;
    S_c8c0744dc *t2;
    v1 = (int)0;
    v23 = (int)v1;
    if (o->f24 != 0) {
        t1 = lookup_low_id((int)(o->f28));
        t2 = find_record_8c0744dc((int)(o->f20));
        v23 = (int)v1;
        if (t1 != 0) {
            v23 = (int)v1;
            if (t2 != 0) {
                v23 = (int)v1;
                if (t2->fe4 == 2) {
                    if (((t1->f34 & 0x8000800)) == 0 && ((t2->fec & 0x40)) == 0) {
                        clear_effect_bit0((void *)(o->f24));
                    } else {
                        set_effect_bit0((void *)(o->f24));
                    }
                    v23 = (int)1;
                    call_8c0a7608((void *)(o->f24), (void *)(((char *)t1 + 0x324)));
                }
            }
        }
    }
    if (v23 == 0) {
        o->f04 |= 1;
    }
}
