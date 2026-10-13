typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_10c Arg0_10c;
typedef struct Arg0_120 Arg0_120;
struct Object {
    char unknown0[0xe4];
    int fe4;
    char unknowne8[0x24];
    Arg0_10c *f10c;
    char unknown110[0x10];
    Arg0_120 *f120;
    int f124;
};
extern int call_8c17796c(int);
extern void set_effect_bit0(void *);
extern void call_8c027090(void);
extern void call_8c05fd7c(void *, Object *, void *, int, int);
void operation_8c0f1d74(Object *o)
{
    int t1;
    if (o->fe4 != 1) {
        if (o->fe4 == 2) {
            goto L_8c0f1dc8;
        }
        t1 = call_8c17796c(0x2a);
        if (t1 != 0) {
            o->fe4 = 1;
        }
        if (o->f120 == 0) {
            return;
        }
        set_effect_bit0((void *)(o->f120));
        return;
    }
    if (o->f124 == 1) {
        call_8c027090();
    }
    if (o->f120 != 0) {
        set_effect_bit0((void *)(o->f120));
        return;
L_8c0f1dc8:;
        call_8c05fd7c((void *)(o->f10c), o, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
