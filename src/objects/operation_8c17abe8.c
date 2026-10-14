typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_2a0 Arg0_2a0;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0x160];
    Arg0_2a0 *f2a0;
};
struct Arg0_13c {
    char unknown0[0x37c];
    int f37c;
};
extern int current_mode_active(void);
extern void call_8c0bb6fc(Arg0_13c *, void *, void *, int);
extern void create_effect_b0fac(void *, void *, void *, void *);
extern void create_effect_d2a8(void *, void *, void *, void *);
void operation_8c17abe8(Object *o, int a1)
{
    int t1;
    if (o->f13c != 0) {
        t1 = current_mode_active();
        if (t1 != 0 && *(int *)0x8c44be04 == (int)o->f13c->f37c) {
            if (a1 != 0) {
                if (a1 == 1) {
                    goto L_8c17ac3c;
                }
                if (a1 == 2) {
                    goto L_8c17ac50;
                }
                return;
            }
            call_8c0bb6fc((Arg0_13c *)(o->f13c), (void *)(((char *)o + 0x238)), (void *)(((char *)o + 0x244)), 7);
            return;
L_8c17ac3c:;
            create_effect_b0fac((void *)(o->f13c), (void *)(((char *)o + 0x238)), (void *)(o->f2a0), (void *)7);
            return;
L_8c17ac50:;
            create_effect_d2a8((void *)(o->f13c), (void *)(((char *)o + 0x2a4)), (void *)(o->f2a0), (void *)7);
        }
    }
}
