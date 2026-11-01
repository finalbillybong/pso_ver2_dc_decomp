/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13981c
 * function: operation_8c13981c
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 18 of 169 reference instruction lines
 * differing bytes: 13
 * provenance: generator draft (mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4d9b64 S_L8c4d9b64;
typedef struct S_c8c0a53e4 S_c8c0a53e4;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_s3c Arg0_s3c;
typedef struct Block_L8c4d9b64_0 {
    int f00;
    int f04;
    int f08;
} Block_L8c4d9b64_0;
struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x2e4];
    Vector3 f324;
    char unknown330[0x60];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x4];
    int f3a0;
    char unknown3a4[0x20];
    int f3c4;
    char unknown3c8[0x44];
    short f40c;
    short f40e;
    char unknown410[0x10];
    int f420;
};
struct S_L8c4d9b64 {
    Block_L8c4d9b64_0 f00;
};
struct Arg0_s3c {
    char unknown0[0x4];
    int f04;
    int f08;
};
struct Frame {
    char f00;
    char f01;
    short f02;
    float f04;
    float f08;
};
struct S_c8c0a53e4 {
    char unknown0[0x2];
    unsigned short f02;
};
extern short g_8c313118;
extern int g_8c4d9b98;
extern int g_8c4db924;
extern S_L8c4d9b64 g_8c4d9b64;
extern char g_8c31315c[];
extern char g_8c3131d0[];
extern int lookup_object_by_id(unsigned short);
extern void request_actor_mode_seven(void *);
extern void operation_8c138598(int);
extern void call_8c1003d0(void *);
extern void operation_8c0a2144(int);
extern void operation_8c0a237c(void *, void *);
extern void operation_8c139e6c(void);
extern void operation_8c0a21a4(void);
extern void call_8c0a5400(Frame *, int);
extern void set_view_offsets(void *, void *, void *);
extern S_c8c0a53e4 *get_view_motion_parameters(void);
extern void operation_8c139f10(void);
void operation_8c13981c(Object *o)
{
    Frame frame;
    char *v3;
    int v4;
    int t1;
    S_c8c0a53e4 *t2;
    switch (o->f398) {
    case 0:
        o->f3c4 = 1;
        t1 = lookup_object_by_id((unsigned short)g_8c313118);
        if (t1 != 0) {
            request_actor_mode_seven((void *)t1);
        }
        operation_8c138598(1);
        *(Vector3 *)&o->f324 = *(Vector3 *)&(&g_8c4d9b64)->f00;
        v3 = (char *)(&g_8c4d9b64)->f00.f00;
        v4 = (int)(&g_8c4d9b64)->f00.f04;
        o->f3c = (int)(v3);
        ((Arg0_s3c *)((char *)o + 0x3c))->f04 = (int)(v4);
        ((Arg0_s3c *)((char *)o + 0x3c))->f08 = (int)((&g_8c4d9b64)->f00.f08);
        o->f40c = 0;
        o->f40e = 0;
        g_8c4d9b98 = 0;
        call_8c1003d0((void *)((g_8c3131d0 + 0x44d)));
        o->f420 = 0;
        operation_8c0a2144(6);
        operation_8c0a237c((void *)((void *)g_8c31315c), (void *)((g_8c31315c + 0xc)));
        operation_8c139e6c();
        o->f398 = 1;
        return;
    case 1:
        if (g_8c4db924 != 1) {
            return;
        }
        o->f3a0 = 0x96;
        o->f398 = 2;
        return;
    case 2:
        if (--o->f3a0 > 0) {
            return;
        }
        operation_8c0a21a4();
        o->f398 = 3;
        return;
    case 3:
        (&frame)->f01 = 0;
        (&frame)->f00 = 2;
        (&frame)->f02 = 0;
        (&frame)->f04 = 0.0f;
        (&frame)->f08 = 1.0f;
        operation_8c0a2144(2);
        call_8c0a5400((Frame *)((&frame)), 0x160a);
        set_view_offsets((void *)(&o->f3c), (void *)(&o->f3c), (void *)(((char *)o + 0x60)));
        o->f398 = 4;
        return;
    case 4:
        t2 = get_view_motion_parameters();
        if (((t2->f02 & 1)) == 0) {
            return;
        }
        operation_8c0a21a4();
        o->f390 = 4;
        return;
    case -1:
        operation_8c139f10();
        return;
    }
}
