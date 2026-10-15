typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be84 S_g8c44be84;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db520 S_g8c4db520;
typedef struct S_g8c4db524 S_g8c4db524;
typedef struct Object Object;
typedef struct Arg0_360 Arg0_360;
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x20];
    unsigned short f20;
};
struct Object {
    char unknown0[0x358];
    int f358;
    int f35c;
    Arg0_360 *f360;
};
extern void call_8c257adc(Object *, int);
extern int hierarchy_is_active(void *);
extern int allocate_block(void *, unsigned int);
extern void initialize_loader_8c173578(void *, void *, int);
extern void reparent_hierarchy_node(void *, void *);
extern void create_effect_777c(void *, int);
float operation_8c257910(Object *o, Arg1 *a1)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if (a1 != 0 && *(int *)0x8c418248 == a1->f20) {
        *(int *)((char *)o + 0x358) -= 1;
        if (!(o->f358 > 0)) {
            o->f358 = 0;
            call_8c257adc(o, 1);
            if (!((int)(o->f360) > 0)) {
                goto L_8c2579ec;
            }
            if (o->f35c >= 0x64 && 0x3e8 > o->f35c && *(int *)0x8c4db520 != 0) {
                t1 = hierarchy_is_active((void *)(*(S_g8c4db520 **)0x8c4db520));
                if (t1 != 0) {
                    t2 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
                    if (t2 != 0) {
                        initialize_loader_8c173578((void *)t2, (void *)(*(S_g8c4db520 **)0x8c4db520), (int)(o->f360));
                    }
                    if (t2 == 0) {
                        goto L_8c2579ec;
                    }
                    reparent_hierarchy_node((void *)t2, (void *)(*(S_g8c44be84 **)0x8c44be84));
                    goto L_8c2579ec;
                }
            }
            if (*(int *)0x8c4db524 == 0) {
                goto L_8c2579ec;
            }
            t3 = hierarchy_is_active((void *)(*(S_g8c4db524 **)0x8c4db524));
            if (t3 == 0) {
                goto L_8c2579ec;
            }
            t4 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xa8);
            if (t4 != 0) {
                initialize_loader_8c173578((void *)t4, (void *)(*(S_g8c4db524 **)0x8c4db524), (int)(o->f360));
            }
            if (t4 == 0) {
                goto L_8c2579ec;
            }
            reparent_hierarchy_node((void *)t4, (void *)(*(S_g8c44be84 **)0x8c44be84));
        } else {
            call_8c257adc(o, 0);
        }
    }
L_8c2579ec:;
    create_effect_777c((void *)(((char *)o + 0x3c)), 0x1d0);
    create_effect_777c((void *)(((char *)o + 0x3c)), 1);
    return 0.0f;
}
