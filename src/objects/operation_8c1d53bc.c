typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv2_0 S_vv2_0;
struct S_c8c021ef8 {
    char unknown0[0xbc8];
    S_c8c021ef8_bc8 *fbc8;
};
struct Frame {
    char unknown0[0x78];
};
struct Object {
    char unknown0[0x82];
    short f82;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c16ad38(void *, int);
extern int find_record_8c0744dc(int);
extern int forward_state_8c074944(void *, int);
extern void operation_8c1cd6f4(void *, int, void *);
extern void operation_8c1cdb14(void *, int);
extern void call_8c1cdc30(Object *);
void operation_8c1d53bc(Object *o)
{
    Frame frame;
    int t3;
    int v2;
    S_c8c021ef8 *t1;
    int t2;
    unsigned int v1;
    int t4;
    int t5;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = operation_8c16ad38((void *)(t1->fbc8), (int)(&frame));
        v1 = (unsigned int)0;
        while ((unsigned int)t2 > v1) {
            v2 = (int)(v1 << 2);
            t3 = find_record_8c0744dc((int)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((&frame))))));
            if (t3 != 0) {
                t4 = forward_state_8c074944((void *)t3, 2);
                if (t4 != 0) {
                    t5 = forward_state_8c074944((void *)t3, 1);
                    if (t5 == 0) {
                        operation_8c1cd6f4((void *)o, t3, (void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((&frame))))));
                    }
                }
            }
            v1 = (unsigned int)(v1 + 1);
        }
        if (!(o->f82 > 0)) {
            operation_8c1cdb14((void *)o, -1);
        }
        call_8c1cdc30(o);
    }
}
