/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0b412c
 * function: TTecLuker_update_8c0b412c
 * language: c
 * reference size: 712 bytes
 * compiled size: 712 bytes (+0.0%)
 * differing lines: 8 of 282 reference instruction lines
 * differing bytes: 2
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Owner {
    char unknown0[0x20];
    unsigned short f20;
} Owner;
typedef struct Target {
    char unknown0[0x4];
    int f04;
    char unknown8[0x20];
    struct {
        int f00;
        Vector3 pos;
    } f28;
} Target;
typedef struct Link {
    char unknown0[0xe4];
    int fe4;
} Link;
typedef struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    Owner *f20;
    char unknown24[0xac];
    unsigned short fd0;
    char unknownd2[0x36];
    Target *f108;
    short f10c;
    char unknown10e[0x2];
    Link *f110;
    char unknown114[0x4];
    Vector3 f118;
    int f124;
    int f128;
} Object;
typedef struct Low {
    char unknown0[0x34];
    int f34;
} Low;
extern int g_8c418248;
extern int g_8c4e18c0;
extern Owner *lookup_object_by_id(int);
extern void call_8c0b43f4(Object *);
extern int effect_event_is_distant(void *, short, Vector3 *, int);
extern void call_8c05fd7c(int, Object *, Vector3 *, int, int);
extern Low *lookup_low_id(int);
extern void operation_8c0b62d4(Vector3 *, Vector3 *, float);
extern void create_effect_777c(Vector3 *, int);
extern void operation_8c026700(Low *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
extern void operation_8c021cc0(Low *, int);
extern void operation_8c0e7720(void *, int, int);
extern void set_global_8c01c1d0(void);
void TTecLuker_update_8c0b412c(Object *o)
{
    Vector3 frame;
    Owner *w;
    unsigned short id;
    int f;
    Vector3 *p;
    Low *t;
    short v;
    int i;
    int k;
    int u;
    int k2;
    o->f20 = lookup_object_by_id(o->fd0);
    w = o->f20;
    if (w == 0) {
        o->f04 |= 1;
        return;
    }
    switch (o->f124) {
    case 0:
        id = w->f20;
        if (id == 0xffff) {
            return;
        }
        if (id > 0xc) {
            o->f124 = 4;
            return;
        }
        if (o->f108 == 0) {
            call_8c0b43f4(o);
            return;
        }
        f = o->f108->f04 == 2;
        if (f == 0) {
            return;
        }
        p = (Vector3 *)((char *)&o->f108->f28 + 4);
        if (p != 0) {
            o->f118 = *p;
        }
        call_8c0b43f4(o);
        return;
    case 1:
        if (effect_event_is_distant((char *)w + 0x7b8, o->f10c, &o->f118, g_8c418248) != 0) {
            o->f04 |= 1;
            return;
        }
        call_8c05fd7c(0x20019, o, &o->f118, 0, 0);
        if (o->f110 == 0) {
            o->f04 |= 1;
            return;
        }
        if (lookup_low_id(g_8c418248) == 0) {
            return;
        }
        if (o->f110->fe4 == 0) {
            return;
        }
        operation_8c0b62d4(&o->f118, &frame, 10.0f);
        create_effect_777c(&frame, 0xb3);
        t = lookup_low_id(g_8c418248);
        if (t != 0) {
            operation_8c026700(t, 0xa);
            play_se_8c05fbf8(0x2001a, (char *)t + 0x3c, 0, 0);
        }
        o->f124 = 2;
        return;
    case 2:
        *(int *)((char *)o + 0x128) += 1;
        if (!(o->f128 > 0xa)) {
            return;
        }
        o->f124 = 3;
        return;
    case 3:
        v = w->f20;
        t = lookup_low_id(g_8c418248);
        if (t != 0 && (t->f34 & 0x800) != 0) {
            o->f124 = 1;
            if (o->f110 == 0) {
                o->f04 |= 1;
                return;
            }
            o->f110->fe4 = 0;
            o->f128 = 0;
            return;
        }
        if (t != 0) {
            if ((t->f34 & 0x800) != 0) {
                o->f124 = 2;
                return;
            }
            *(int *)((char *)t + 0x7d0) = (unsigned short)v;
            operation_8c021cc0(t, 0);
        }
        k = 0x308;
        u = (unsigned short)v;
        k2 = 0x7d0;
        for (i = 0; i < 4; i++) {
            t = lookup_low_id(i);
            if (t != 0) {
                f = *(short *)((char *)t + k) == 3;
                if (f != 0) {
                    *(int *)((char *)t + k2) = u;
                    operation_8c021cc0(t, 0);
                }
            }
        }
        operation_8c0e7720((void *)0x8c46fec0, 0, g_8c4e18c0);
        set_global_8c01c1d0();
        return;
    case 4:
        o->f04 |= 1;
        return;
    }
}
