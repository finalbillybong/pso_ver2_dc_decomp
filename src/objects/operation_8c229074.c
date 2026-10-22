typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c337ec4 S_L8c337ec4;
typedef struct Frame Frame;
typedef struct S_g8c337ec4 S_g8c337ec4;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
typedef struct Arg0_98 Arg0_98;
typedef struct Block_frame_c {
    float f00;
    float f04;
    float f08;
} Block_frame_c;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x8e];
    Arg0_94 *f94;
    char unknown98[0x5c];
    float ff4;
    float ff8;
    float ffc;
};
struct S_L8c337ec4 {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    Vector3 f00;
    Block_frame_c f0c;
    Vector3 f18;
};
struct Arg0_98 {
    char unknown0[0x50];
    Vector3 f50;
};
extern Vector3 g_8c337f54;
extern char gc_8c337ec4[];
extern char g_8c337f78[];
extern void mark_effect_for_release(void *);
extern int create_effect_769c(void *, int);
extern void set_effect_bits(void *, unsigned short);
extern void call_8c37f6f0(void *, void *);
extern void call_8c37b630(void *);
extern void call_8c3bdf60(void *, void *);
extern void call_8c0a7608(Arg0_98 *, void *);
extern int create_effect_777c(void *, int);
extern void call_8c05fbf8(int, void *, int, int);
extern void operation_8c191504(int);
void operation_8c229074(Object *o)
{
    Frame frame;
    char *v2;
    int v3;
    char *v4;
    int v5;
    int v1;
    int v61;
    int t1;
    int t2;
    v1 = (int)0;
    while (5 > v1) {
        v61 = (int)o->f94;
        if (v61 >= *(int *)((char *)(gc_8c337ec4 + 0x8) + (v1 * 0x18))) {
            v2 = (char *)v1;
            v3 = (int)((int)(v2) << 2);
            if (*(int *)((char *)((char *)o + 0x98) + (v3)) == 0) {
                goto L_8c2291bc;
            }
            mark_effect_for_release((void *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v3))));
            *(int *)((char *)((char *)o + 0x98) + (v3)) = 0;
        } else {
            if (v61 >= *(int *)((char *)(gc_8c337ec4 + 0x4) + (v1 * 0x18))) {
                v4 = (char *)v1;
                v5 = (int)((int)(v4) << 2);
                if (*(int *)((char *)((char *)o + 0x98) + (v5)) == 0) {
                    t1 = create_effect_769c((void *)((int)(v1 * 0x18 + gc_8c337ec4) + 0xc), *(int *)((char *)gc_8c337ec4 + (v1 * 0x18)));
                    *(int *)((char *)((char *)o + 0x98) + (v5)) = (int)(t1);
                    if (*(int *)((char *)((char *)o + 0x98) + (v5)) != 0) {
                        set_effect_bits((void *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v5))), (unsigned short)0x40);
                    }
                }
                switch (v1) {
                case 1:
                case 2:
                case 3:
                    if (*(int *)((char *)((char *)o + 0x98) + (v5)) != 0) {
                        *(Vector3 *)&(&frame)->f18 = *(Vector3 *)&(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v5)))->f50;
                        {
                            Vector3 *p_ = (Vector3 *)&g_8c337f54;
                            *(Vector3 *)&(&frame)->f0c = *p_;
                        }
                        call_8c37f6f0((void *)(&(&frame)->f0c), (void *)(&(&frame)->f18));
                        (&frame)->f0c.f04 = 0.0f;
                        call_8c37b630((void *)(&(&frame)->f0c));
                        (&frame)->f0c.f00 *= 1.95f;
                        (&frame)->f0c.f08 *= 1.95f;
                        call_8c3bdf60((void *)(&(&frame)->f18), (void *)(&(&frame)->f0c));
                        call_8c0a7608((Arg0_98 *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v5))), (void *)(&(&frame)->f18));
                    }
                }
            }
        }
L_8c2291bc:;
        v1 = (int)(v1 + 1);
    }
    if ((int)(o->f94) >= 0x8c && 0x91 > (int)(o->f94)) {
        {
            Vector3 *p_ = (Vector3 *)&g_8c337f54;
            *(Vector3 *)&(&frame)->f00 = *p_;
        }
        call_8c3bdf60((void *)(&frame), (void *)(((int)o->f94 + -0x8c) * 0xc + g_8c337f78));
        t2 = create_effect_777c((void *)(&frame), 0x14a);
        if (t2 != 0) {
            set_effect_bits((void *)t2, (unsigned short)0x40);
        }
    }
    if ((int)(o->f94) >= 0xaa && (o->ffc += 0.1f) > 1.0f) {
        o->ffc = 1.0f;
    }
    if (!(30.0f > (o->ff4 += 0.5f))) {
        o->ff4 = 0.0f;
    }
    if ((o->ff8 += 0.5f) > 139.0f) {
        o->ff8 = 139.0f;
    }
    switch ((int)o->f94) {
    case 0:
        call_8c05fbf8(0x30007, (void *)((void *)&g_8c337f54), 0, 1);
        call_8c05fbf8(0x30004, (void *)((void *)&g_8c337f54), 0, 1);
        operation_8c191504(2);
        break;
    case 0x50:
        call_8c05fbf8(0x30005, (void *)0, 0, 0);
    case 0x64:
    case 0x78:
        call_8c05fbf8(0x30006, (void *)((void *)&g_8c337f54), 0, 1);
        operation_8c191504(2);
        break;
    case 0x8c:
        call_8c05fbf8(0x30008, (void *)((void *)&g_8c337f54), 0, 1);
        operation_8c191504(2);
        break;
    case 0x92:
        call_8c05fbf8(0x30003, (void *)((void *)&g_8c337f54), 0, 1);
        break;
    case 0xaa:
        call_8c05fbf8(0x30009, (void *)((void *)&g_8c337f54), 0, 1);
        break;
    case 0xc8:
        call_8c05fbf8(0x30021, (void *)((void *)&g_8c337f54), 0, 1);
        operation_8c191504(2);
        break;
    }
    if ((int)(o->f94 = (Arg0_94 *)((int)o->f94 + 1)) >= 0x118) {
        o->f04 |= 1;
    }
}
