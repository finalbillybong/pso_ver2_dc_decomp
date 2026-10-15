typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
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
extern void call_8c05fbf8(int, void *, int, int);
extern int find_local_actor_in_radius(void *, float);
extern void call_8c1e7e94(Object *);
extern void operation_8c1e8b30(void *, int);
extern int call_8c0c349c(void);
extern int call_8c1e8d18(Object *);
extern void call_8c1e8ba8(Object *, int);
extern void clear_overlay_elements(void *);
void operation_8c1e8670(Object *o)
{
    int v41;
    int t1;
    int t2;
    int t3;
    if (o->f110 != -1) {
        if (o->f110 != 0) {
            if (o->f110 == 1) {
                goto L_8c1e86bc;
            }
            if (o->f110 == 2) {
                return;
            }
            return;
        }
        o->f190 = 0x12c;
        call_8c05fbf8(5, (void *)(((char *)o + 0x3c)), 0, 0);
        o->f110 = 1;
        o->f100 = (int)(*(int *)0x8c4e314c);
        o->f104 = (int)(*(int *)0x8c4e3154);
        return;
L_8c1e86bc:;
        t1 = find_local_actor_in_radius((void *)o, o->fe4);
        if (t1 != 0) {
            call_8c1e7e94(o);
            if (o->f1a0 == 0) {
                operation_8c1e8b30((void *)o, (int)(*(S_g8c418248 **)0x8c418248));
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
            t3 = call_8c1e8d18(o);
            v41 = (int)t3;
        }
        if (v41 == 0) {
            return;
        }
        call_8c1e8ba8(o, 2);
        o->f110 = 2;
        return;
    }
    clear_overlay_elements((void *)o);
}
