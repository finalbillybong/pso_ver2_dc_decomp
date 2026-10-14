typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg0_ec Arg0_ec;
struct Object {
    char unknown0[0xe4];
    Arg0_e4 *fe4;
    int fe8;
    Arg0_ec *fec;
};
extern int allocate_block(void *, unsigned int);
extern void initialize_loader_8c173578(void *, void *, int);
extern void reparent_hierarchy_node(void *, void *);
void operation_8c1ab228(Object *o)
{
    int t1;
    if (o->fec != 0) {
        if (o->fe8 != 0) {
            if (o->fe8 == 1) {
                return;
            }
            return;
        }
        if (o->fe4 == 0 && o->fec != 0 && *(int *)0x8c4db520 != 0) {
            t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
            if (t1 != 0) {
                initialize_loader_8c173578((void *)t1, (void *)(*(S_g8c4db520 **)0x8c4db520), (int)(o->fec));
            }
            o->fe4 = (Arg0_e4 *)t1;
            if (o->fe4 != 0) {
                reparent_hierarchy_node((void *)(o->fe4), (void *)(*(S_g8c44be84 **)0x8c44be84));
            }
            o->fe8 = 1;
        }
    }
}
