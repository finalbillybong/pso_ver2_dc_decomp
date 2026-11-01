/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a9cbc
 * function: operation_8c0a9cbc
 * language: c
 * reference size: 936 bytes
 * compiled size: 936 bytes (+0.0%)
 * differing lines: 24 of 409 reference instruction lines
 * differing bytes: 29
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
typedef struct Vec2 {
    float x;
    float y;
} Vec2;
typedef struct Model {
    char unknown0[0x64];
    float sx;
    float sy;
    char unknown6c[0x1c];
    unsigned char flags;
} Model;
typedef struct Object {
    char unknown0[0x20];
    unsigned short slot;
    char unknown22[0x2];
    Model *model;
    unsigned short mode;
    char unknown2a[0x2];
    float w;
    float h;
    char unknown34[0x2c];
    int f60;
    Vector3 pos;
    Vector3 off;
    float f7c;
    float f80;
    char unknown84[0x6];
    short angle;
    char unknown8c[0x4];
    int f90;
    char unknown94[0x4];
    float f98;
    float f9c;
    Vector3 ext;
} Object;
typedef struct Mgr {
    char unknown0[0xa8];
    int fa8;
    int fac;
} Mgr;
extern Vector3 g_8c3046e8;
extern Vector3 g_8c3046f4;
extern Vector3 g_8c304700;
extern Mgr *g_8c46ee80;
extern int hierarchy_is_active(void *);
extern float njScalor_8c37e480(Vector3 *);
extern void project_point_to_screen_8c38ad50(int, Vector3 *, Vec2 *);
extern float call_8c130334(float, float);
extern void njPushMatrix_8c38ade4(void *);
extern void njRotateY_8c37df90(int, int);
extern void call_8c3be38c(int, Vector3 *, Vector3 *);
extern void njPopMatrixEx_8c38ad10(void);
extern float call_8c3845f0(Vector3 *, Vector3 *);
extern void append_manager_record(void *, void *);
void operation_8c0a9cbc(Object *o)
{
    unsigned char fl;
    Vec2 e;
    Vec2 d;
    Vector3 b;
    Vector3 a;
    Vector3 u;
    Vector3 v;
    Vector3 w;
    float s;
    float t;
    float d1;
    float d2;
    unsigned short m;
    if (hierarchy_is_active(o) == 0) {
        return;
    }
    fl = o->model->flags;
    if (fl & 4) {
        if (o->mode & 0x10) {
            a.x = o->pos.x + o->off.x;
            a.y = o->pos.y + o->off.y;
            a.z = o->pos.z + o->off.z;
        } else {
            a = o->pos;
        }
        b.x = a.x + o->ext.x;
        b.y = a.y + o->ext.y;
        b.z = a.z + o->ext.z;
        s = njScalor_8c37e480(&o->ext);
        project_point_to_screen_8c38ad50(0, &a, &e);
        project_point_to_screen_8c38ad50(0, &b, &d);
        d.x -= e.x;
        d.y -= e.y;
        t = call_8c130334(d.y, d.x) * 65536.0f;
        o->angle = (short)(t / 6.28318405f);
        o->f7c = o->model->sx * s;
        o->f80 = o->model->sy * s;
    } else if (fl & 0x40) {
        u = g_8c3046e8;
        v = g_8c3046f4;
        w = g_8c304700;
        njPushMatrix_8c38ade4((void *)0x8c400500);
        njRotateY_8c37df90(0, o->f90);
        call_8c3be38c(0, &w, &w);
        njPopMatrixEx_8c38ad10();
        njPushMatrix_8c38ade4((void *)0x8c400500);
        njRotateY_8c37df90(0, g_8c46ee80->fac);
        call_8c3be38c(0, &u, &u);
        njPopMatrixEx_8c38ad10();
        njPushMatrix_8c38ade4((void *)0x8c400500);
        njRotateY_8c37df90(0, g_8c46ee80->fa8);
        call_8c3be38c(0, &v, &v);
        njPopMatrixEx_8c38ad10();
        d1 = call_8c3845f0(&w, &u);
        d2 = call_8c3845f0(&w, &v);
        if (0.0f > d2) {
            d2 *= -1.0f;
        }
        if (0.0f > d1) {
            d1 *= -1.0f;
        }
        m = o->mode;
        if (m & 8) {
            o->f7c = o->w;
            o->f80 = o->h * d2;
        } else if (m & 4) {
            o->f7c = o->w * d1;
            o->f80 = o->h;
        } else {
            o->f7c = o->w * d1;
            o->f80 = o->h * d2;
        }
    } else {
        o->f7c = o->w;
        o->f80 = o->h;
    }
    o->f7c *= o->f98;
    o->f80 *= o->f9c;
    if (o->model->flags & 0x20) {
        append_manager_record(*(void **)((char *)0x8c466e20 + ((o->slot + 0x37) << 2)), &o->f60);
    } else {
        append_manager_record(*(void **)((char *)0x8c466e20 + (o->slot << 2)), &o->f60);
    }
}
