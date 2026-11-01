/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c16dd10
 * function: quest_op_npc_crptalk_id_8c16dd10
 * language: c++
 * reference size: 352 bytes
 * compiled size: 352 bytes (+0.0%)
 * differing lines: 72 of 144 reference instruction lines
 * differing bytes: 103
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
typedef struct S_g8c44be90 S_g8c44be90;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db520 S_g8c4db520;
class S_c8c122700;
struct Frame {
    float f00;
    float f04;
    float f08;
};
struct S_g8c4db520 {
    char unknown0[0x4];
    short f04;
};
class S_c8c122700 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
};
typedef struct S_c8c122700Data {
    char unknown0[0x308];
    short f308;
    char unknown30a[0x46];
    int f350;
} S_c8c122700Data;
extern "C" S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern "C" int load_npc_player_chars_8c10bc84(int);
extern "C" void TObjPlayer_ctor_1_8c01e920(S_c8c122700 *, void *, int, int, int);
extern "C" void operation_8c02a438(int, void *, int);
extern "C" void operation_8c03bb4c(int, int, float, float, float);
extern "C" void TObject_create_8c1ef644(void *);
extern "C" void quest_op_npc_crptalk_id_8c16dd10(int a0)
{
    Frame frame;
    int v3;
    char *v4;
    char *v2;
    char *v1;
    S_c8c122700 *t1;
    int t2;
    int *tbl;
    tbl = (int *)*(S_g8c4db408 **)0x8c4db408;
    (&frame)->f00 = (float)*(int *)((char *)tbl + (a0++ << 2));
    (&frame)->f04 = (float)*(int *)((char *)tbl + (a0++ << 2));
    (&frame)->f08 = (float)*(int *)((char *)tbl + (a0++ << 2));
    v3 = (int)((float)*(int *)((char *)tbl + (a0++ << 2)) * 65536.0f / 360.0f);
    v1 = (char *)*(int *)((char *)tbl + (a0++ << 2));
    v2 = (char *)*(int *)((char *)tbl + (a0++ << 2));
    v4 = (char *)*(int *)((char *)tbl + (a0++ << 2));
    if (*(int *)0x8c4db520 != 0) {
        (*(S_g8c4db520 **)0x8c4db520)->f04 |= 4;
    }
    t1 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xc7c);
    if (t1 != 0) {
        t2 = load_npc_player_chars_8c10bc84((int)(v2));
        TObjPlayer_ctor_1_8c01e920(t1, (void *)(*(S_g8c44be90 **)0x8c44be90), (int)(v4), 6, t2);
    }
    if (t1 != 0) {
        ((S_c8c122700Data *)t1)->f308 = 6;
        operation_8c02a438((int)(v4), (void *)(&frame), v3);
        operation_8c03bb4c((int)(v4), v3, (&frame)->f00, (&frame)->f04, (&frame)->f08);
        t1->v7();
        if ((int)(v1) == 1) {
            TObject_create_8c1ef644((void *)t1);
            ((S_c8c122700Data *)t1)->f350 |= 0x40000;
        }
    }
    if (*(int *)0x8c4db520 != 0) {
        (*(S_g8c4db520 **)0x8c4db520)->f04 &= -5;
    }
}
