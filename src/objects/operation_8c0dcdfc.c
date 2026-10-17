typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_34 Arg0_34;
typedef struct Arg0_38 Arg0_38;
typedef struct Arg0_3c Arg0_3c;
typedef struct Arg0_40 Arg0_40;
typedef struct Arg0_44 Arg0_44;
struct Object {
    char unknown0[0x22];
    short f22;
    char unknown24[0x10];
    Arg0_34 *f34;
    Arg0_38 *f38;
    Arg0_3c *f3c;
    Arg0_40 *f40;
    Arg0_44 *f44;
};
struct Arg0_34 {
    char unknown0[0x4];
    short f04;
};
struct Arg0_38 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x52];
    int f58;
};
struct Arg0_3c {
    char unknown0[0x4];
    short f04;
    char unknown6[0x52];
    int f58;
};
struct Arg0_40 {
    char unknown0[0x4];
    short f04;
    char unknown6[0x52];
    int f58;
};
struct Arg0_44 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c0dd018(Object *);
extern int current_effect_mode(void);
void operation_8c0dcdfc(Object *o)
{
    int t1;
    int t2;
    switch (o->f22) {
    case 18:
        if (o->f34 == 0) {
            goto L_8c0dced8;
        }
        o->f34->f04 &= -5;
        break;
    case 24:
        if (o->f38 == 0) {
            goto L_8c0dced8;
        }
        o->f38->f04 &= -5;
        call_8c0dd018(o);
        o->f38->f58 = 0;
        break;
    case 30:
        if (o->f3c == 0) {
            goto L_8c0dced8;
        }
        o->f3c->f04 &= -5;
        call_8c0dd018(o);
        o->f3c->f58 = 0;
        break;
    case 36:
        if (o->f40 == 0) {
            goto L_8c0dced8;
        }
        o->f40->f04 &= -5;
        call_8c0dd018(o);
        o->f40->f58 = 0;
        break;
    case 38:
        t1 = current_effect_mode();
        if (t1 != 0) {
            t2 = current_effect_mode();
            if (t2 != 0xf) {
                if (o->f44 != 0) {
                    o->f44->f04 &= -5;
                }
            }
        }
    }
L_8c0dced8:;
    if (o->f22 > 0x7530) {
        o->f22 -= 0x2710;
    }
    o->f22 += 1;
}
