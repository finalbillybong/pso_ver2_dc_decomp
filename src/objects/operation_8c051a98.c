typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Arg0_28 Arg0_28;
typedef struct Arg0_2c Arg0_2c;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    int f20;
    Arg0_24 *f24;
    Arg0_28 *f28;
    Arg0_2c *f2c;
};
struct Arg0_24 {
    char unknown0[0x6a];
    short f6a;
};
extern void initialize_hierarchy_node(void *, void *);
extern int allocate_block(void *, unsigned int);
extern void call_8c1e0f10(int);
extern void call_8c1e2110(Arg0_24 *, int, int);
extern void operation_8c1dfd28(void *, int);
extern void set_fields_8c1e0ef4(void *);
extern void operation_8c1de120(void *, int);
extern void set_field_8c1e22c8(void *);
extern void operation_8c1e0070(void *);
extern void operation_8c1debb8(void *);
extern void operation_8c1e00e0(void *);
extern void operation_8c1dec3c(void *);
extern void set_fields_8c1e22d4(void *);
Object *operation_8c051a98(Object *o, int a1, int a2, int a3, register unsigned char a4)
{
    Object **home = &o;
    int t1;
    int t2;
    int t3;
    (void)home;
    initialize_hierarchy_node((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c2621ac;
    o->tag = (int)(*(int *)0x8c2f30e8);
    o->size = 0x30;
    o->f20 = 0;
    t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xc0);
    if (t1 != 0) {
        call_8c1e0f10(t1);
    }
    o->f24 = (Arg0_24 *)t1;
    call_8c1e2110((Arg0_24 *)(o->f24), a2, a3);
    o->f24->f6a |= 8;
    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x80);
    if (t2 != 0) {
        operation_8c1dfd28((void *)t2, (int)(o->f24));
    }
    o->f28 = (Arg0_28 *)t2;
    set_fields_8c1e0ef4((void *)(o->f28));
    t3 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x74);
    if (t3 != 0) {
        operation_8c1de120((void *)t3, (int)(o->f24));
    }
    o->f2c = (Arg0_2c *)t3;
    if (a4 == 0) {
        o->f20 |= 2;
        set_field_8c1e22c8((void *)(o->f24));
        operation_8c1e0070((void *)(o->f28));
        operation_8c1debb8((void *)(o->f2c));
    }
    if (a4 == 1) {
        o->f20 |= 2;
        o->f20 |= 8;
        operation_8c1e00e0((void *)(o->f28));
        operation_8c1dec3c((void *)(o->f2c));
        set_fields_8c1e22d4((void *)(o->f24));
    }
    return o;
}
