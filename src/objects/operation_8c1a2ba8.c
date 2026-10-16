typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_184 S_c8c021ef8_184;
typedef struct S_c8c021ef8_184_20 S_c8c021ef8_184_20;
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv2_0 S_vv2_0;
struct S_c8c021ef8 {
    char unknown0[0x184];
    S_c8c021ef8_184 *f184;
    char unknown188[0xa40];
    S_c8c021ef8_bc8 *fbc8;
};
struct Frame {
    char unknown0[0x78];
};
struct Object {
    char unknown0[0x82];
    short f82;
    char unknown84[0x18];
    int f9c;
};
struct S_c8c021ef8_184 {
    char unknown0[0x20];
    S_c8c021ef8_184_20 *f20;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c16ad38(void *, int);
extern int find_record_8c0744dc(int);
extern void operation_8c1cd6f4(void *, int, void *);
extern int call_8c1a2d98(int);
extern void call_8c1cd974(Object *, int, int, int);
extern void operation_8c1cda60(void *, void *, int);
extern void operation_8c1cdb14(void *, int);
extern void call_8c1cdc30(Object *);
void operation_8c1a2ba8(Object *o)
{
    Frame frame;
    S_c8c021ef8 *t1;
    unsigned int v1;
    int v2;
    unsigned int v5;
    int t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = operation_8c16ad38((void *)(t1->fbc8), (int)(&frame));
        o->f9c = (int)(t2);
        v1 = (unsigned int)0;
        while ((unsigned int)o->f9c > v1) {
            v2 = (int)(v1 << 2);
            t3 = find_record_8c0744dc((int)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((&frame))))));
            if (t3 != 0) {
                operation_8c1cd6f4((void *)o, t3, (void *)(*(S_vv2_0 **)((char *)((char *)v2 + 0x0) + ((int)((&frame))))));
            }
            v1 = (unsigned int)(v1 + 1);
        }
        v5 = (unsigned int)0;
        while ((unsigned int)5 > v5) {
            t4 = call_8c1a2d98(v5);
            call_8c1cd974(o, v5, t4, 0);
            v5 = (unsigned int)(v5 + 1);
        }
        if (t1->f184 != 0 && (int)(t1->f184->f20) > 0) {
            operation_8c1cda60((void *)o, (void *)(t1->f184->f20), -0x100);
        }
        if (!(o->f82 > 0)) {
            operation_8c1cdb14((void *)o, -1);
        }
        call_8c1cdc30(o);
    }
}
