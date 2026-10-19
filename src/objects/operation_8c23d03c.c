typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct S_c8c0744dc_13c S_c8c0744dc_13c;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Arg0_20 *f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
};
struct S_c8c0744dc {
    char unknown0[0x34];
    int f34;
    char unknown38[0xac];
    short fe4;
    char unknowne6[0x6];
    int fec;
    char unknownf0[0x4c];
    S_c8c0744dc_13c *f13c;
};
struct Frame {
    char unknown0[0xc];
};
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int operation_8c075894(void *, void *, int, int);
extern void call_8c0a7608(void *, Frame *);
extern void clear_effect_bit0(void *);
extern void set_effect_bit0(void *);
void operation_8c23d03c(Object *o)
{
    Frame frame;
    int v1;
    int v2;
    S_c8c0744dc *t1;
    int t2;
    v1 = (int)0;
    v2 = (int)v1;
    if (o->f28 != 0) {
        t1 = find_record_8c0744dc((int)(o->f20));
        v2 = (int)v1;
        if (t1 != 0) {
            v2 = (int)v1;
            if (t1->fe4 == 2) {
                v2 = (int)1;
                t2 = operation_8c075894((void *)t1, (void *)(t1->f13c), (int)(o->f24), (int)(&frame));
                if (t2 != 0) {
                    call_8c0a7608((void *)(o->f28), (Frame *)((&frame)));
                    if (((t1->fec & 0x40)) == 0 || ((t1->f34 & 0x8000000)) == 0) {
                        clear_effect_bit0((void *)(o->f28));
                        goto L_8c23d0b0;
                    }
                    set_effect_bit0((void *)(o->f28));
                } else {
                    set_effect_bit0((void *)(o->f28));
                }
            }
        }
    }
L_8c23d0b0:;
    if (v2 == 0) {
        o->f04 |= 1;
    }
}
