/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c188120
 * function: TObjEvtCollision_create_8c188120
 * language: c++
 * reference size: 172 bytes
 * compiled size: 172 bytes (+0.0%)
 * differing lines: 12 of 63 reference instruction lines
 * differing bytes: 12
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
typedef struct S_g8c44be98 S_g8c44be98;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
class S_c8c122700;
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6(int);
};
typedef struct S_c8c122700Data {
    int f00;
    short f04;
    char unknown6[0x12];
    void *dispatch;
    char unknown1c[0x2];
    short f1e;
    char unknown20[0x4c];
    float f6c;
    char unknown70[0x18];
    int f88;
    char unknown8c[0x58];
    float fe4;
    int fe8;
    int fec;
} S_c8c122700Data;
extern int g_8c319dd0;
extern S_g8c44be98 *g_8c44be98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" void operation_8c051eb8(void *, void *);
extern "C" S_c8c122700 *TObjEvtCollision_create_8c188120(int a0)
{
    S_c8c122700 *t1;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0xf0);
    if (t1 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t1;
        S_c8c122700 **home = &self;
        (void)home;
        operation_8c051eb8((void *)t1, g_8c44be98);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c272134;
        ((S_c8c122700Data *)self)->f00 = (int)(g_8c319dd0);
        ((S_c8c122700Data *)self)->f1e = 0xf0;
        self->v6(a0);
        ((S_c8c122700Data *)self)->fe4 = ((S_c8c122700Data *)self)->f6c;
        ((S_c8c122700Data *)self)->fe8 = (int)(((S_c8c122700Data *)self)->f88);
        ((S_c8c122700Data *)self)->fec = 3;
        ((S_c8c122700Data *)self)->f04 |= 0x10;
    }
    return t1;
}
