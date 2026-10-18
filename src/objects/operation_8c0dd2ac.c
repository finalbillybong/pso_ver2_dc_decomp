typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct Object Object;
typedef struct Arg0_54 Arg0_54;
typedef struct S_vv75 S_vv75;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2];
    short f24;
    char unknown26[0x2e];
    Arg0_54 *f54;
    char unknown58[0x1c];
    int f74;
};
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct Arg0_54 {
    char unknown0[0x22];
    unsigned short f22;
};
struct S_vv75 {
    char unknown0[0x22];
    unsigned short f22;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c4dbde0 *g_8c4dbde0;
extern int lookup_low_id(int);
extern void operation_8c1dd318(void *);
extern int operation_8c184c80(void *, void *);
extern void operation_8c1dd290(void *);
extern int process_effect_record(void *);
extern int operation_8c1dccb4(void *);
void operation_8c0dd2ac(Object *o)
{
    int v3;
    int v4;
    S_vv75 *v75;
    int v18;
    int t1;
    int t2;
    int t3;
    int t4;
    if (o->f54 != 0) {
        if (o->f24 > 0) {
            o->f24 -= 1;
        }
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 == 0) {
            operation_8c1dd318((void *)(o->f54));
            return;
        }
        t2 = operation_8c184c80((void *)(t1 + 0x418), (void *)t1);
        v3 = (unsigned short)o->f20;
        if (((v3 & 0x10)) == 0) {
            if (g_8c4dbde0 == 0) {
                v4 = (int)0;
            } else {
                v4 = (int)(g_8c4dbde0->f20 & 1);
            }
            if (v4 == 0 && ((v3 & 1)) == 0 && o->f74 == 0) {
                if ((unsigned short)t2 == 0xffff) {
                    goto L_8c0dd34a;
                }
                if ((unsigned short)t2 == (int)(g_8c418248)) {
                    goto L_8c0dd34a;
                }
            }
        }
        operation_8c1dd318((void *)(o->f54));
        return;
L_8c0dd34a:;
        operation_8c1dd290((void *)(o->f54));
        if (((o->f54->f22 & 0x10)) != 0) {
            t3 = process_effect_record((void *)(((char *)o + 0x78)));
            if (t3 != 0) {
                v75 = (S_vv75 *)o->f54;
                if (((v75->f22 & 0x10)) != 0) {
                    v75->f22 &= -0x11;
                    operation_8c1dccb4((void *)v75);
                }
            }
        }
        v75 = (S_vv75 *)o->f54;
        v18 = (int)(v75->f22 & 0x20);
        if (v18 != 0 && v18 != 0) {
            v75->f22 &= -0x21;
            t4 = operation_8c1dccb4((void *)v75);
            v18 = (int)t4;
        }
    }
}
