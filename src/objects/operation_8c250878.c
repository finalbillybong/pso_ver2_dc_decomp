typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418258 S_g8c418258;
typedef struct Object Object;
typedef struct Arg0_20 Arg0_20;
struct Object {
    char unknown0[0x20];
    Arg0_20 *f20;
};
extern int lookup_low_id(int);
extern float distance_xz(void *, void *);
extern void call_8c1d02fc(void *, int, int);
void operation_8c250878(Object *o)
{
    int t2;
    int t1;
    int v1;
    float t3;
    if (o->f20 != 0) {
        t2 = lookup_low_id((int)(*(S_g8c418258 **)0x8c418258));
        v1 = (int)0;
        while (4 > v1) {
            if ((int)v1 != *(int *)0x8c418258) {
                t1 = lookup_low_id(v1);
                if (t1 != 0) {
                    t3 = distance_xz((void *)(t2 + 0x3c), (void *)(t1 + 0x3c));
                    if (!(t3 > 2500.0f)) {
                        call_8c1d02fc((void *)(o->f20), 1, v1);
                        goto L_8c2508f2;
                    }
                    call_8c1d02fc((void *)(o->f20), 0, v1);
                    goto L_8c2508f2;
                }
                call_8c1d02fc((void *)(o->f20), 0, v1);
            } else {
                call_8c1d02fc((void *)(o->f20), 1, v1);
            }
L_8c2508f2:;
            v1 = (int)(v1 + 1);
        }
    }
}
