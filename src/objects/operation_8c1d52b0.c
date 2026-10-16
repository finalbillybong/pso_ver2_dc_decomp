typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct S_c8c03b55c S_c8c03b55c;
typedef struct S_c8c03b55c_e8 S_c8c03b55c_e8;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv3_0 S_vv3_0;
struct S_c8c021ef8 {
    char unknown0[0xbc8];
    S_c8c021ef8_bc8 *fbc8;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x74];
};
struct S_c8c0744dc {
    char unknown0[0xec];
    int fec;
};
struct S_c8c03b55c {
    char unknown0[0xe8];
    S_c8c03b55c_e8 *fe8;
};
struct Object {
    char unknown0[0x82];
    short f82;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c16ad38(void *, int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern int call_8c074560(S_c8c0744dc *, S_c8c021ef8 *, Frame *);
extern void operation_8c1cd6f4(void *, int, void *);
extern S_c8c03b55c *call_8c03b55c(void *, int);
extern void operation_8c1cdb14(void *, int);
extern void call_8c1cdc30(Object *);
void operation_8c1d52b0(Object *o)
{
    Frame frame;
    S_c8c0744dc *t3;
    int v3;
    S_c8c021ef8 *t1;
    int t2;
    unsigned int v2;
    int v1;
    int t4;
    S_c8c03b55c *t5;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = operation_8c16ad38((void *)(t1->fbc8), (int)(&(&frame)->f04));
        v1 = (int)0x134;
        v2 = (unsigned int)0;
        while ((unsigned int)t2 > v2) {
            v3 = (int)(v2 << 2);
            t3 = find_record_8c0744dc((int)(*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + ((int)(&(&frame)->f04)))));
            if (t3 != 0 && (*(unsigned char *)((char *)((char *)t3 + 0x0) + (v1))) == 0) {
                t4 = call_8c074560(t3, t1, (Frame *)((&frame)));
                if (t4 != 0 && ((t3->fec & 8)) == 0) {
                    operation_8c1cd6f4((void *)o, (int)t3, (void *)(*(S_vv3_0 **)((char *)((char *)v3 + 0x0) + ((int)(&(&frame)->f04)))));
                }
            }
            v2 = (unsigned int)(v2 + 1);
        }
        t5 = call_8c03b55c((void *)(((char *)t1 + 0xbcc)), 6);
        if (t5 != 0) {
            operation_8c1cd6f4((void *)o, (int)t5, (void *)(t5->fe8));
        }
        if (!(o->f82 > 0)) {
            operation_8c1cdb14((void *)o, -1);
        }
        call_8c1cdc30(o);
    }
}
