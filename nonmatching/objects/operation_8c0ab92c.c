/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ab92c
 * function: operation_8c0ab92c
 * language: c
 * reference size: 536 bytes
 * compiled size: 536 bytes (+0.0%)
 * differing lines: 24 of 240 reference instruction lines
 * differing bytes: 25
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c466e20 S_L8c466e20;
typedef struct Frame Frame;
typedef struct S_g8c466e20 S_g8c466e20;
typedef struct S_g8c466efc S_g8c466efc;
typedef struct Object Object;
typedef struct Arg0_24 Arg0_24;
typedef struct Block_frame_10 {
    float f00;
    float f04;
    float f08;
} Block_frame_10;
typedef struct Block_p0_64 {
    float unknown0f00;
    float f04;
    float f08;
} Block_p0_64;
struct Object {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x2];
    Arg0_24 *f24;
    unsigned short f28;
    char unknown2a[0x2];
    float f2c;
    float f30;
    char unknown34[0xc];
    float f40;
    float f44;
    float f48;
    char unknown4c[0x18];
    Block_p0_64 f64;
    float f70;
    float f74;
    float f78;
    float f7c;
    float f80;
    char unknown84[0x6];
    short f8a;
    char unknown8c[0xc];
    float f98;
    float f9c;
};
struct Arg0_24 {
    char unknown0[0x60];
    float f60;
    float f64;
    char unknown68[0x20];
    unsigned char f88;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    Block_frame_10 f10;
    float f1c;
    float f20;
    float f24;
};
struct S_L8c466e20 {
    char unknown0[0xdc];
    S_g8c466efc *fdc;
};
extern S_L8c466e20 g_8c466e20;
extern int hierarchy_is_active(void *);
extern float njScalor_8c37e480(void *);
extern void project_point_to_screen_8c38ad50(int, void *, void *);
extern float errno_wrap_8c130334(float, float);
extern void append_manager_record(void *, void *);
typedef struct Vector2 {
    float x;
    float y;
} Vector2;
void operation_8c0ab92c(Object *o)
{
    Vector2 d;
    Vector2 c;
    Vector3 q;
    Vector3 p;
    int t1;
    float t2;
    float t3;
    t1 = hierarchy_is_active((void *)o);
    if (t1 == 0) {
        return;
    }
    if (((o->f24->f88 & 4)) == 0) {
    } else {
        if (((o->f28 & 0x10)) != 0) {
            p.x = o->f64.unknown0f00 + o->f70;
            p.y = o->f64.f04 + o->f74;
            p.z = o->f64.f08 + o->f78;
        } else {
            p = *(Vector3 *)&o->f64;
        }
        q.x = p.x + o->f40;
        q.y = p.y + o->f44;
        q.z = p.z + o->f48;
        t2 = njScalor_8c37e480((void *)(&o->f40));
        if (t2 == 0.0f) {
            return;
        }
        project_point_to_screen_8c38ad50(0, (void *)&p, (void *)&d);
        project_point_to_screen_8c38ad50(0, (void *)&q, (void *)&c);
        c.x -= d.x;
        c.y -= d.y;
        t3 = errno_wrap_8c130334(c.y, c.x);
        o->f8a = (int)(t3 * 65536.0f / 6.28318405f);
        o->f7c = o->f24->f60 * t2;
        o->f80 = o->f24->f64 * t2;
        goto L_8c0aba9c;
    }
    o->f7c = o->f2c;
    o->f80 = o->f30;
L_8c0aba9c:;
    o->f7c *= o->f98;
    o->f80 *= o->f9c;
    if (((o->f24->f88 & 0x20)) != 0) {
        append_manager_record((void *)(*(S_g8c466efc **)((char *)&g_8c466e20.fdc + (o->f20 << 2))), (void *)(((char *)o + 0x60)));
        return;
    }
    append_manager_record((void *)(*(S_g8c466e20 **)((char *)&g_8c466e20 + (o->f20 << 2))), (void *)(((char *)o + 0x60)));
}
