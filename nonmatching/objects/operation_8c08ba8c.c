/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c08ba8c
 * function: operation_8c08ba8c
 * language: c
 * reference size: 344 bytes
 * compiled size: 344 bytes (+0.0%)
 * differing lines: 16 of 125 reference instruction lines
 * differing bytes: 19
 * provenance: generator draft (mode switch2)
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
typedef struct Object Object;
typedef struct Arg0_5c Arg0_5c;
typedef struct Block_p0_b4 {
    float f00;
    float f04;
    float f08;
} Block_p0_b4;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x3a];
    int f40;
    int f44;
    int f48;
    char unknown4c[0xc];
    int f58;
    Arg0_5c *f5c;
    short f60;
    char unknown62[0x3a];
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    Block_p0_b4 fb4;
    char unknownc0[0x3c];
    int ffc;
    int f100;
    char unknown104[0x4];
    int f108;
    int f10c;
};
struct Arg0_5c {
    int f00;
    Vector3 f04;
};
extern char g_8c3002d8[];
extern void debug_error_stub_8c03ef80(void *, ...);
extern int forward_scene_record(void *, int);
extern void operation_8c08dcc0(void *);
extern int operation_8c08db0c(Object *);
extern int call_8c08db98(Object *, int);
extern void call_8c08d864(Object *);
extern void initialize_text_buffer(void *, void *, int, int, int);
void operation_8c08ba8c(Object *o)
{
    char *v6;
    int t1;
    int t2;
    int t3;
    o->f58 = (int)(*(int *)0x8c44be0c);
    if (o->f58 == 0) {
        debug_error_stub_8c03ef80((void *)((g_8c3002d8 + 0x10)));
        o->f04 |= 1;
        return;
    }
    t1 = forward_scene_record((void *)o, (int)(o->f40));
    o->f5c = (Arg0_5c *)t1;
    if (o->f5c != 0) {
        *(Vector3 *)&o->fb4 = *(Vector3 *)&o->f5c->f04;
    } else {
        o->fb4.f00 = 0.0f;
        o->fb4.f04 = 0.0f;
        o->fb4.f08 = 0.0f;
    }
    *(int *)0x8c469da4 = 0;
    o->f100 = 0;
    operation_8c08dcc0((void *)o);
    o->f9c = 1;
    o->fa0 = 0;
    o->fa4 = 0;
    o->fa8 = 0;
    o->fac = 0;
    o->fb0 = 0;
    o->ffc = 0;
    o->f10c = 0;
    o->f108 = 0;
    t2 = operation_8c08db0c(o);
    o->f44 = (int)(t2);
    v6 = (char *)o->f5c->f00;
    t3 = call_8c08db98(o, (int)(v6));
    o->f48 = (int)(t3);
    call_8c08d864(o);
    initialize_text_buffer((void *)(((char *)o + 0x64)), (void *)(((char *)o + 0x7c)), 1, 0x22, 0x1f);
    o->f60 = 1;
}
