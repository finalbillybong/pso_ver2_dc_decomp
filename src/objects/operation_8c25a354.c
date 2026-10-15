typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4e2b80 S_g8c4e2b80;
typedef struct S_g8c4e2b80_42c S_g8c4e2b80_42c;
typedef struct S_g8c4e2b80_430 S_g8c4e2b80_430;
typedef struct Object Object;
struct Object {
    char unknown0[0xe4];
    float fe4;
    char unknowne8[0x18];
    int f100;
    int f104;
    char unknown108[0x8];
    short f110;
    char unknown112[0x7e];
    int f190;
    char unknown194[0xc];
    int f1a0;
};
struct S_g8c4e2b80 {
    char unknown0[0x42c];
    S_g8c4e2b80_42c *f42c;
    S_g8c4e2b80_430 *f430;
};
struct S_g8c4e2b80_42c {
    char unknown0[0x38];
    int f38;
};
struct S_g8c4e2b80_430 {
    char unknown0[0x3c];
    int f3c;
};
extern void call_8c05fbf8(int, void *, int, int);
extern int find_local_actor_in_radius_8c25a9a4(void *, float);
extern void call_8c259ba0(Object *);
extern void operation_8c25a848(void *, int);
extern int call_8c0c349c(void);
extern int no_owned_target_near_8c25aa04(void *);
extern void call_8c25a8c0(Object *, int);
extern void clear_overlay_elements_8c25a8e8(void *);
void operation_8c25a354(Object *o)
{
    int v41;
    int t1;
    int t2;
    int t3;
    if (o->f110 != -1) {
        if (o->f110 != 0) {
            if (o->f110 == 1) {
                goto L_8c25a3ae;
            }
            if (o->f110 == 2) {
                return;
            }
            return;
        }
        o->f190 = 0x12c;
        call_8c05fbf8(5, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f110 = 1;
        o->f100 = (int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f42c->f38);
        o->f104 = (int)((*(S_g8c4e2b80 **)0x8c4e2b80)->f430->f3c);
        return;
L_8c25a3ae:;
        t1 = find_local_actor_in_radius_8c25a9a4((void *)o, o->fe4);
        if (t1 != 0) {
            call_8c259ba0(o);
            if (o->f1a0 == 0) {
                operation_8c25a848((void *)o, (int)(*(S_g8c418248 **)0x8c418248));
                o->f1a0 = 1;
            }
        }
        if (*(int *)0x8c2fff78 == 0) {
            return;
        }
        *(int *)((char *)o + 0x190) -= 1;
        t2 = call_8c0c349c();
        if (t2 == 0) {
            return;
        }
        if (!(o->f190 > 0)) {
            v41 = (int)1;
        } else {
            t3 = no_owned_target_near_8c25aa04((void *)o);
            v41 = (int)t3;
        }
        if (v41 == 0) {
            return;
        }
        call_8c25a8c0(o, 2);
        o->f110 = 2;
        return;
    }
    clear_overlay_elements_8c25a8e8((void *)o);
}
