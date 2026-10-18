typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
struct Object {
    char unknown0[0x38];
    Arg0_38 *f38;
    Arg0_3c *f3c;
};
struct Arg0_38 {
    char unknown0[0x38];
    Block8 f38;
    char unknown40[0x18];
    int f58;
};
struct Arg0_3c {
    char unknown0[0x6c];
    int f6c;
};
extern int operation_8c1d2478(void *);
extern void request_resource_release(void *);
extern int allocate_block(void *, unsigned int);
extern void operation_8c1a62a8(void *, void *, void *);
extern void operation_8c1a6460(void *, int);
extern void operation_8c1a6480(void *);
extern Block8 g_8c289330[2];
void operation_8c1d23b8(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c1d2478((void *)o);
    if (t1 == 0) {
        if (o->f3c != 0) {
            request_resource_release((void *)(o->f3c));
            o->f3c = (Arg0_3c *)0;
            *(Block8 *)&o->f38->f38 = g_8c289330[0];
            o->f38->f58 = 6;
        }
        return;
    }
    if (o->f3c == 0) {
        t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x70);
        if (t2 != 0) {
            operation_8c1a62a8((void *)t2, (void *)g_8c289330, (void *)((void *)0x8c289328));
        }
        o->f3c = (Arg0_3c *)t2;
        operation_8c1a6460((void *)(o->f3c), (int)((void *)0x8c5059a4));
        o->f3c->f6c = 1;
        *(Block8 *)&o->f38->f38 = g_8c289330[1];
        o->f38->f58 = 6;
    }
    operation_8c1a6480((void *)(o->f3c));
}
