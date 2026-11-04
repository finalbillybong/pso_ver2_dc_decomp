/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09aecc
 * function: TCMCharacter_ctor_8c09aecc
 * language: c
 * reference size: 480 bytes
 * compiled size: 480 bytes (+0.0%)
 * differing lines: 56 of 170 reference instruction lines
 * differing bytes: 50
 * provenance: generator draft (experimental generator, mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * class header: src/include/classes/TCMCharacter.h (shared layout for modders; this draft keeps its own local types)
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c30169c S_g8c30169c;
typedef struct S_g8c460900 S_g8c460900;
typedef struct S_g8c460908 S_g8c460908;
typedef struct Object Object;
typedef struct S_vv4 S_vv4;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
    char unknown20[0x1c];
    float f3c;
    float f40;
    float f44;
    char unknown48[0x18];
    int f60;
    int f64;
    int f68;
    char unknown6c[0x84];
    short ff0;
    char unknownf2[0x1e];
    void *f110;
    int f114;
    int f118;
};
struct S_vv4 {
    int f00;
    char unknown4[0xc];
    int f10;
    int f14;
    char unknown18[0x12c];
    int f144;
    int f148;
    char unknown14c[0x12c];
    int f278;
    int f27c;
};
struct S_g8c460908 {
    char unknown0[0x430];
    int f430;
};
struct S_g8c460900 {
    char unknown0[0x31];
    char f31;
    char unknown32[0x2];
    int f34;
};
extern int g_8c301698;
extern int g_8c41cb3c;
extern S_g8c460900 *g_8c460900;
extern S_g8c460908 *g_8c460908;
extern int g_8c46b040;
extern int g_8c46b064;
extern Object *g_8c46b068;
extern int g_8c46eb2c;
extern int g_8c46ec10;
extern int g_8c46ec14;
extern char g_8c46b06c[];
extern void operation_8c01c488(void *);
extern int game_malloc_8c011ecc(int);
extern int operation_8c034c7c(void *);
extern void call_8c03d610(int, int, void *, int, int, int);
extern void call_8c09c724(int);
extern void call_8c01c838(Object *, short);
extern int operator_new_8c18de4c(int);
extern void call_8c09b4c8(Object *);
Object *TCMCharacter_ctor_8c09aecc(Object *o)
{
    Object **home = &o;
    int t1;
    S_vv4 *v4;
    unsigned int v6;
    int v1;
    int t2;
    int t3;
    (void)home;
    operation_8c01c488((void *)o);
    o->dispatch = (void *)0x8c265828;
    o->tag = (int)(g_8c301698);
    o->size = 0x144;
    g_8c41cb3c = 1;
    g_8c46b040 = 0;
    g_8c46b068 = o;
    v1 = (int)g_8c460900;
    t1 = game_malloc_8c011ecc(0x440);
    if (t1 != 0) {
        t2 = operation_8c034c7c((void *)v1);
        call_8c03d610(t1, 6, (void *)(*(S_g8c30169c **)((char *)0x8c30169c + (t2 << 2))), 0, 0, 0);
    }
    g_8c46ec10 = (int)(t1);
    v6 = (unsigned int)(void *)g_8c46b06c;
    goto L_8c09af62;
    v4 = (S_vv4 *)(void *)g_8c46b06c;
L_8c09af4a:;
    v4->f00 = 0;
    v4->f14 = 0;
    v4->f148 = 0;
    v4->f27c = 0;
    v4->f10 = 0;
    v4->f144 = 0;
    v4->f278 = 0;
    v6 = (unsigned int)((int)v4 + 0x3ac);
L_8c09af62:;
    v4 = (S_vv4 *)v6;
    if ((unsigned int)(g_8c46b06c + 0x3ac0) > v6) {
        goto L_8c09af4a;
    }
    g_8c46eb2c = 0;
    call_8c09c724(0);
    g_8c46eb2c = 0;
    o->f110 = (void *)0x8c3016d4;
    o->f114 = (int)(g_8c460908->f430);
    o->ff0 = 0;
    if (g_8c460900->f31 == 6) {
        o->ff0 = 2;
    } else {
        if (((g_8c460900->f34 & 2)) != 0) {
            o->ff0 = 1;
        }
    }
    call_8c01c838(o, o->ff0);
    t3 = operator_new_8c18de4c(0x1000);
    o->f118 = (int)(t3);
    o->f44 = 0.0f;
    o->f40 = 0.0f;
    o->f3c = 0.0f;
    o->f68 = 0;
    o->f64 = 0;
    o->f60 = 0;
    call_8c09b4c8(o);
    g_8c46ec14 = g_8c46b064 = 0;
    return o;
}
