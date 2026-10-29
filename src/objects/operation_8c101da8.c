typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d5958 S_L8c4d5958;
typedef struct S_L8c4d5998 S_L8c4d5998;
typedef struct S_g8c46ee80 S_g8c46ee80;
typedef struct Object Object;
typedef struct S_x2784 S_x2784;
typedef struct S_x39424 S_x39424;
struct Object {
    char unknown0[0x138];
    int f138;
    char unknown13c[0x14];
    int f150;
    int f154;
    float f158;
    int f15c;
};
struct S_x2784 {
    float f00;
};
struct S_L8c4d5958 {
    float f00;
    float f04;
    float f08;
    char unknownc[0xc];
    int f18;
};
struct S_x39424 {
    float f00;
};
struct S_g8c46ee80 {
    char unknown0[0xac];
    int fac;
};
struct S_L8c4d5998 {
    char unknown0[0x18];
    int f18;
};
extern S_g8c46ee80 *g_8c46ee80;
extern S_L8c4d5958 g_8c4d5958;
extern S_L8c4d5998 g_8c4d5998;
extern int current_effect_mode(void);
void operation_8c101da8(Object *o)
{
    int t1;
    int t2;
    int pm4;
    if (o->f138 >= 0) {
        pm4 = o->f138;
        (&g_8c4d5958)->f00 = ((S_x2784 *)(pm4 * 0x28 + (char *)(int *)((char *)o + 0x98)))->f00;
        (&g_8c4d5958)->f08 = ((S_x39424 *)((char *)(int *)((char *)o + 0xa0) + o->f138 * 0x28))->f00;
    }
    if (((o->f150 & 1)) != 0) {
        int pm3;
        pm3 = 0x8000;
        (&g_8c4d5958)->f18 = pm3 - g_8c46ee80->fac;
        t1 = current_effect_mode();
        if (t1 == 0xc) {
            (&g_8c4d5998)->f18 = 0;
            o->f15c = g_8c46ee80->fac + 0x8000;
            goto L_8c101e5a;
        }
        (&g_8c4d5998)->f18 = 0x8000;
        o->f15c = (int)(g_8c46ee80->fac);
    } else {
        t2 = current_effect_mode();
        if (t2 == 0xc) {
            (&g_8c4d5958)->f18 = 0;
            (&g_8c4d5998)->f18 = 0;
            o->f15c = 0;
        } else {
            (&g_8c4d5998)->f18 = (&g_8c4d5958)->f18 = 0x8000;
            o->f15c = 0;
        }
    }
L_8c101e5a:
    ;
    if (((o->f150 & 2)) != 0) {
        if (o->f154 != 0) {
            if (o->f154 == 1) {
                goto L_8c101ea0;
            }
            if (o->f154 == 2) {
                goto L_8c101ec8;
            }
            return;
        }
        o->f158 *= 1.2f;
        (&g_8c4d5958)->f04 += o->f158;
        if (!((&g_8c4d5958)->f04 > 2000.0f)) {
            return;
        }
        (&g_8c4d5958)->f04 = 2000.0f;
        return;
    L_8c101ea0:
        ;
        o->f158 *= 1.2f;
        (&g_8c4d5958)->f04 += o->f158;
        if (!((&g_8c4d5958)->f04 > 3500.0f)) {
            return;
        }
        (&g_8c4d5958)->f04 = 3500.0f;
        return;
    L_8c101ec8:
        ;
        o->f158 *= 1.2f;
        (&g_8c4d5958)->f04 -= o->f158;
        if (!(1200.0f > (&g_8c4d5958)->f04)) {
            return;
        }
        (&g_8c4d5958)->f04 = 1200.0f;
        return;
    }
    (&g_8c4d5958)->f04 = 2000.0f;
}
