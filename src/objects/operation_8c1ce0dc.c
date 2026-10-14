typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xe6];
    int fec;
    Arg0_f0 *ff0;
};
extern int operation_8c03d338(void);
extern void operation_8c1ce2e8(Object *);
extern int operation_03d080(unsigned short);
extern void call_8c05fbf8(int, void *, int, int);
extern void create_effect_777c(void *, int);
extern void call_8c1ce194(Object *);
extern void operation_8c09e6b4(void *);
void operation_8c1ce0dc(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c1ce2e8(o);
        return;
    }
    if (o->fec != 0) {
        if (o->fec == 1) {
            goto L_8c1ce156;
        }
        o->fec = 0;
    }
    if ((int)(o->ff0) >= 0 && 0x100 > (int)(o->ff0)) {
        t2 = operation_03d080((unsigned short)(o->ff0));
        if ((unsigned char)t2 == 1) {
            o->fec = 1;
            call_8c05fbf8(0x40011, (void *)(((char *)o + 0x3c)), 0, 0);
            create_effect_777c((void *)(((char *)o + 0x3c)), 0x45);
            create_effect_777c((void *)(((char *)o + 0x3c)), 0x46);
            call_8c1ce194(o);
            return;
L_8c1ce156:;
            operation_8c09e6b4((void *)o);
            o->f04 |= 1;
        }
    }
}
