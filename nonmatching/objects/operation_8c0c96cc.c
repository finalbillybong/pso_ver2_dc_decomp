/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0c96cc
 * function: operation_8c0c96cc
 * language: c
 * reference size: 372 bytes
 * compiled size: 372 bytes (+0.0%)
 * differing lines: 10 of 145 reference instruction lines
 * differing bytes: 14
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
typedef struct Frame Frame;
typedef struct S_g8c46f9ec S_g8c46f9ec;
typedef struct Object Object;
typedef struct Arg0_3ac Arg0_3ac;
typedef struct Block_frame_0 {
    float f00;
    char unknown4[0x4];
    float f08;
} Block_frame_0;
struct Object {
    char unknown0[0x3ac];
    Arg0_3ac *f3ac;
    char unknown3b0[0x50];
    unsigned short f400;
    char unknown402[0x2];
    int f404;
    char unknown408[0x2c];
    int f434;
    short f438;
    short f43a;
};
struct Arg0_3ac {
    char unknown0[0x20];
    short f20;
    char unknown22[0x1a];
    Vector3 f3c;
};
struct S_g8c46f9ec {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Frame {
    Block_frame_0 f00;
};
extern S_g8c46f9ec *g_8c46f9ec;
extern int operation_8c05b29c(int, int);
extern int lookup_object_by_id(unsigned short);
extern int get_actor_position(void *);
extern int operation_8c05bbf8(void);
extern int operation_8c05bc18(int);
extern void TTecGrants_ctor_8c0b3178(Object *, int, void *, int);
extern void TTecRaFoie_create_8c0b7ca0(void *, void *, void *, void *);
extern void vector_sub_in_place_8c37f6f0(Frame *, int);
extern void TTecRaZonde_create_8c0b8c68(void *, void *, void *);
extern float errno_wrap_8c130334(float, float);
extern void TTecGiBarta_create_8c0b1aa0(void *, void *, void *, void *);
int operation_8c0c96cc(Object *o)
{
    Frame frame;
    int v1;
    char *v12;
    int v3;
    char *v13;
    char *v14;
    char *v15;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    float t8;
    int t9;
    int t10;
    t1 = operation_8c05b29c((int)o, (int)(o->f3ac));
    if (t1 != 0) {
        t2 = lookup_object_by_id((unsigned short)(o->f400));
        if (t2 != 0) {
            t10 = get_actor_position((void *)t2);
            v3 = (int)t10;
        } else {
            v1 = (int)((char *)o + 0x3c);
            v3 = (int)v1;
        }
        if (o->f404 == 0) {
            o->f434 = 0;
            o->f434 = 1;
            o->f438 = o->f3ac->f20;
            o->f43a = 0;
            t3 = operation_8c05bbf8();
            if (t3 != 0) {
                v12 = (char *)g_8c46f9ec->f18;
                t4 = operation_8c05bc18((int)(v12));
                TTecGrants_ctor_8c0b3178(o, v3, (void *)(&o->f434), t4);
                goto L_8c0c97dc;
            }
            v13 = (char *)g_8c46f9ec->f18;
            t5 = operation_8c05bc18((int)(v13));
            TTecRaFoie_create_8c0b7ca0((void *)o, (void *)v3, (void *)(&o->f434), (void *)t5);
        } else {
            *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&o->f3ac->f3c;
            vector_sub_in_place_8c37f6f0((Frame *)((&frame)), v3);
            t6 = operation_8c05bbf8();
            if (t6 != 0) {
                v14 = (char *)g_8c46f9ec->f1c;
                t7 = operation_8c05bc18((int)(v14));
                TTecRaZonde_create_8c0b8c68((void *)o, (void *)v3, (void *)t7);
            } else {
                t8 = errno_wrap_8c130334((&frame)->f00.f00, (&frame)->f00.f08);
                v15 = (char *)g_8c46f9ec->f1c;
                t9 = operation_8c05bc18((int)(v15));
                TTecGiBarta_create_8c0b1aa0((void *)o, (void *)v3, (void *)(int)((int)(t8 * 65536.0f / 6.28318405f)), (void *)t9);
            }
        }
L_8c0c97dc:;
        return 1;
    }
    return 0;
}
