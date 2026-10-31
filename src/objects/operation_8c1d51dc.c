typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c021ef8 S_c8c021ef8;
typedef struct S_c8c021ef8_bc8 S_c8c021ef8_bc8;
typedef struct S_c8c0744dc S_c8c0744dc;
typedef struct Frame Frame;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
typedef struct S_vv4_0 S_vv4_0;
struct S_c8c021ef8 {
    char unknown0[0xbc8];
    S_c8c021ef8_bc8 *fbc8;
};
struct Frame {
    char unknown0[0x78];
};
struct S_c8c0744dc {
    char unknown0[0x134];
    unsigned char f134;
};
struct Object {
    char unknown0[0x82];
    short f82;
};
extern S_c8c021ef8 *lookup_low_id(int);
extern int operation_8c16ad38(void *, int);
extern S_c8c0744dc *find_record_8c0744dc(int);
extern void operation_8c1cd6f4(void *, int, void *);
extern void operation_8c1cdb14(void *, int);
extern void operation_8c1cdc30(void *);
void operation_8c1d51dc(Object *o, int a1, int a2)
{
    Frame frame;
    int v4;
    int t2;
    unsigned int v3;
    int v1;
    S_c8c021ef8 *t1;
    int v2;
    S_c8c0744dc *t3;
    int v5;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = operation_8c16ad38((void *)(t1->fbc8), (int)(&frame));
        v1 = (int)(unsigned short)a1;
        v5 = (int)(unsigned short)a2;
        v2 = (int)0x136;
        v3 = (unsigned int)0;
        while ((unsigned int)t2 > v3) {
            v4 = (int)(v3 << 2);
            t3 = find_record_8c0744dc((int)(*(S_vv4_0 **)((char *)((char *)v4 + 0x0) + ((int)((&frame))))));
            if (t3 != 0 && t3->f134 == v1 && *(unsigned char *)((char *)((char *)t3 + 0x0) + (v2)) == v5) {
                operation_8c1cd6f4((void *)o, (int)t3, (void *)(*(S_vv4_0 **)((char *)((char *)v4 + 0x0) + ((int)((&frame))))));
            }
            v3 = (unsigned int)(v3 + 1);
        }
        if (!(o->f82 > 0)) {
            operation_8c1cdb14((void *)o, -1);
        }
        operation_8c1cdc30((void *)o);
    }
}
