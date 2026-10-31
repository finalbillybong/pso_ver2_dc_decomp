typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c338078 S_L8c338078;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_sd8 Arg0_sd8;
typedef struct S_vv30 S_vv30;
typedef struct S_vv30_0 S_vv30_0;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0xd2];
    int fd8;
    char unknowndc[0x8];
    int fe4;
    int fe8;
    float fec;
};
struct S_vv30 {
    S_vv30_0 *f00;
};
struct Frame {
    Vector3 f00;
};
struct S_L8c338078 {
    int f00;
    int f04;
    int f08;
};
struct Arg0_sd8 {
    char unknown0[0x4];
    int f04;
    int f08;
};
extern Vector3 g_8c338084;
extern S_L8c338078 g_8c338078;
extern int create_effect_777c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c191504(int);
extern int create_effect_769c(void *, int);
extern void call_8c0a7608(void *, int);
extern void set_view_offsets(void *, void *, void *);
void operation_8c229d88(Object *o)
{
    Frame frame;
    S_vv30 *v30;
    int v37;
    int v31;
    int v29;
    int t1;
    int t2;
    int t3;
    int t4;
    if (0x3c >= o->fe8) {
        t1 = create_effect_777c((void *)(&o->fd8), 0x14e);
        if (t1 != 0) {
            set_effect_bits((void *)t1, (unsigned short)0x40);
        }
    }
    if (o->fe8 == 0x44) {
        t2 = create_effect_777c((void *)(&o->fd8), 0x17b);
        if (t2 != 0) {
            set_effect_bits((void *)t2, (unsigned short)0x40);
        }
        t3 = create_effect_777c((void *)(&o->fd8), 0x17c);
        if (t3 != 0) {
            set_effect_bits((void *)t3, (unsigned short)0x40);
        }
    }
    if (o->fe8 == 0x48) {
        t4 = create_effect_777c((void *)(&o->fd8), 0x17a);
        if (t4 != 0) {
            set_effect_bits((void *)t4, (unsigned short)0x40);
        }
        call_8c05fbf8(0x30009, (void *)(&o->fd8), 0, 1);
        operation_8c191504(2);
    }
    if (o->fe8 == 0x72) {
        call_8c05fbf8(0x30027, (void *)(&o->fd8), 0, 1);
    }
    if (o->fe8 >= 0xaa) {
        v29 = (int)0x147;
        v30 = (S_vv30 *)((char *)o + 0x94);
        v31 = (int)0;
        while (2 > v31) {
            v37 = (int)o + v31 * 0xc + 0xf4;
            if (v30->f00 == 0) {
                v30->f00 = (S_vv30_0 *)create_effect_769c((void *)v37, v29);
                if (v30->f00 != 0) {
                    set_effect_bits((void *)(v30->f00), (unsigned short)0x40);
                }
            } else {
                call_8c0a7608((void *)(v30->f00), v37);
            }
            v31 = v31 + 1;
            v30 = (S_vv30 *)((char *)o + 0x98);
        }
    }
    if (o->fe8 == 0x72) {
        *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c338084;
        *(Vector3 *)&o->fd8 = *(Vector3 *)&g_8c338078;
        o->fe4 = 0;
        set_view_offsets((void *)(&o->fd8), (void *)(&o->fd8), (void *)(&frame));
    }
    if ((o->fec += 0.5f) > 119.0f) {
        o->fec = 119.0f;
    }
    if (++o->fe8 >= 0xf0) {
        o->f04 |= 1;
    }
}
