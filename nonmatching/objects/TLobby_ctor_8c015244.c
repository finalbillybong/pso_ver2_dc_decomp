/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c015244
 * function: TLobby_ctor_8c015244
 * language: c
 * reference size: 1184 bytes
 * compiled size: 1184 bytes (+0.0%)
 * differing lines: 122 of 325 reference instruction lines
 * differing bytes: 164
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
typedef struct S_c8c122700 S_c8c122700;
typedef struct S_g8c418a00 S_g8c418a00;
typedef struct S_g8c467188 S_g8c467188;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    int tag;
    char unknown4[0x14];
    void *dispatch;
    char unknown1c[0x2];
    short size;
};
struct S_c8c122700 {
    char unknown0[0xb120];
    void *fb120;
};
struct S_g8c418a00 {
    char unknown0[0xb124];
    void *fb124;
    void *fb128;
    void *fb12c;
    void *fb130;
    void *fb134;
    void *fb138;
    int fb13c;
    void *fb140;
    void *fb144;
    int fb148;
    int fb14c;
    void *fb150;
    int fb154;
    void *fb158;
    void *fb15c;
    char unknownb160[0x4];
    void *fb164;
    void *fb168;
    void *fb16c;
    void *fb170;
    void *fb174;
    void *fb178;
    char unknownb17c[0x4];
    void *fb180;
    void *fb184;
    void *fb188;
    void *fb18c;
    void *fb190;
    void *fb194;
    void *fb198;
    void *fb19c;
    void *fb1a0;
    void *fb1a4;
    void *fb1a8;
    void *fb1ac;
    void *fb1b0;
    void *fb1b4;
    void *fb1b8;
    void *fb1bc;
    char unknownb1c0[0x4];
    void *fb1c4;
    void *fb1c8;
    void *fb1cc;
    char unknownb1d0[0x4];
    void *fb1d4;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void memset_8c12b880(void *, int, int);
extern int operation_8c01c434(void);
extern S_c8c122700 *heap_alloc_8c122700(void *, unsigned int);
extern int operation_8c01b98c(void);
extern int operation_8c01b9c0(void);
extern int operation_8c03613c(void);
extern void TTcpSocket_ctor_8c02cc88(S_c8c122700 *, Object *, int, void *, int, int, int);
extern void operation_8c01a514();
extern void operation_8c01a8a4();
extern void operation_8c01a920();
extern void operation_8c01a944();
extern void operation_8c01aa54();
extern void operation_8c01ba80();
extern void operation_8c01bae8();
Object *TLobby_ctor_8c015244(Object *o, int a1)
{
    Object **home = &o;
    int t3;
    int t1;
    int t4;
    int v1;
    S_c8c122700 *t2;
    int t5;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c261278;
    o->tag = (int)(*(int *)0x8c2e2f20);
    o->size = 0x20;
    *(Object **)0x8c41c7c0 = o;
    *(int *)0x8c41c604 = 0;
    *(int *)0x8c41c608 = 0;
    *(int *)0x8c41c60c = 0;
    *(int *)0x8c41c610 = 0;
    *(int *)0x8c41c614 = 0;
    *(int *)0x8c41c618 = 0;
    *(int *)0x8c41c61c = 0;
    *(int *)0x8c41c620 = 0;
    *(int *)0x8c41c624 = 0;
    *(int *)0x8c41c628 = 0;
    *(int *)0x8c41c62c = 0;
    *(int *)0x8c41c630 = 0;
    *(int *)0x8c418a04 = 0;
    *(int *)0x8c418a08 = 0;
    *(short *)0x8c41bcdc = 0;
    *(short *)0x8c41bcde = 0;
    *(int *)0x8c41bce0 = 0;
    *(int *)0x8c41bce4 = 0;
    *(int *)0x8c41bcec = 0;
    *(int *)0x8c41bce8 = 1;
    *(int *)0x8c41bd0c = 1;
    *(int *)0x8c41bcf0 = 0;
    *(int *)0x8c41bcf4 = 0;
    *(int *)0x8c41bcf8 = 0;
    *(int *)0x8c41bcfc = 0;
    *(int *)0x8c41bd00 = 0;
    *(int *)0x8c41bd04 = 0;
    *(int *)0x8c41bd08 = 0;
    *(int *)0x8c41bd10 = 0;
    *(int *)0x8c41c728 = 0;
    *(int *)0x8c418248 = 0;
    *(int *)0x8c418258 = 0;
    memset_8c12b880((void *)((void *)0x8c41bd14), 0, 0x20);
    memset_8c12b880((void *)((void *)0x8c41c667), 0, 0xc0);
    memset_8c12b880((void *)((void *)0x8c41bd34), 0, 0x8d0);
    t1 = operation_8c01c434();
    if (t1 == 0) {
        v1 = (int)0x28;
    } else {
        v1 = (int)0x27;
    }
    t2 = heap_alloc_8c122700((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0xb1d8);
    if (t2 != 0) {
        t3 = operation_8c01b98c();
        t4 = operation_8c01b9c0();
        t5 = operation_8c03613c();
        TTcpSocket_ctor_8c02cc88(t2, o, v1, (void *)(*(S_g8c467188 **)0x8c467188), t3, t4, t5);
    }
    *(S_c8c122700 **)0x8c418a00 = t2;
    t2->fb120 = (void *)0x8c017d94;
    (*(S_g8c418a00 **)0x8c418a00)->fb124 = (void *)0x8c0186b8;
    (*(S_g8c418a00 **)0x8c418a00)->fb128 = (void *)0x8c018978;
    (*(S_g8c418a00 **)0x8c418a00)->fb12c = (void *)0x8c019158;
    (*(S_g8c418a00 **)0x8c418a00)->fb13c = 0;
    (*(S_g8c418a00 **)0x8c418a00)->fb138 = (void *)0x8c01792c;
    (*(S_g8c418a00 **)0x8c418a00)->fb130 = (void *)0x8c019480;
    (*(S_g8c418a00 **)0x8c418a00)->fb134 = (void *)0x8c019770;
    (*(S_g8c418a00 **)0x8c418a00)->fb140 = (void *)0x8c0193b4;
    (*(S_g8c418a00 **)0x8c418a00)->fb148 = 0;
    (*(S_g8c418a00 **)0x8c418a00)->fb14c = 0;
    (*(S_g8c418a00 **)0x8c418a00)->fb150 = (void *)0x8c01988c;
    (*(S_g8c418a00 **)0x8c418a00)->fb154 = 0;
    (*(S_g8c418a00 **)0x8c418a00)->fb158 = (void *)0x8c019b18;
    (*(S_g8c418a00 **)0x8c418a00)->fb144 = (void *)0x8c019410;
    (*(S_g8c418a00 **)0x8c418a00)->fb15c = operation_8c01a920;
    (*(S_g8c418a00 **)0x8c418a00)->fb164 = (void *)0x8c019f54;
    (*(S_g8c418a00 **)0x8c418a00)->fb168 = operation_8c01a514;
    (*(S_g8c418a00 **)0x8c418a00)->fb16c = (void *)0x8c01a648;
    (*(S_g8c418a00 **)0x8c418a00)->fb170 = operation_8c01a8a4;
    (*(S_g8c418a00 **)0x8c418a00)->fb184 = (void *)0x8c20a6d0;
    (*(S_g8c418a00 **)0x8c418a00)->fb188 = (void *)0x8c217f10;
    (*(S_g8c418a00 **)0x8c418a00)->fb174 = (void *)0x8c017de0;
    (*(S_g8c418a00 **)0x8c418a00)->fb178 = (void *)0x8c0187d0;
    (*(S_g8c418a00 **)0x8c418a00)->fb180 = (void *)0x8c018ff8;
    (*(S_g8c418a00 **)0x8c418a00)->fb18c = (void *)0x8c019168;
    (*(S_g8c418a00 **)0x8c418a00)->fb190 = (void *)0x8c01919c;
    (*(S_g8c418a00 **)0x8c418a00)->fb194 = (void *)0x8c01b950;
    (*(S_g8c418a00 **)0x8c418a00)->fb198 = (void *)0x8c01b974;
    (*(S_g8c418a00 **)0x8c418a00)->fb19c = (void *)0x8c01b980;
    (*(S_g8c418a00 **)0x8c418a00)->fb1a0 = (void *)0x8c207ca8;
    (*(S_g8c418a00 **)0x8c418a00)->fb1a4 = (void *)0x8c207ce4;
    (*(S_g8c418a00 **)0x8c418a00)->fb1a8 = (void *)0x8c207dd8;
    (*(S_g8c418a00 **)0x8c418a00)->fb1ac = (void *)0x8c207ffc;
    (*(S_g8c418a00 **)0x8c418a00)->fb1b0 = operation_8c01a944;
    (*(S_g8c418a00 **)0x8c418a00)->fb1b4 = operation_8c01aa54;
    (*(S_g8c418a00 **)0x8c418a00)->fb1b8 = (void *)0x8c22cf50;
    (*(S_g8c418a00 **)0x8c418a00)->fb1bc = (void *)0x8c22d18c;
    (*(S_g8c418a00 **)0x8c418a00)->fb1c8 = (void *)0x8c019474;
    (*(S_g8c418a00 **)0x8c418a00)->fb1c4 = (void *)0x8c019678;
    (*(S_g8c418a00 **)0x8c418a00)->fb1cc = operation_8c01ba80;
    (*(S_g8c418a00 **)0x8c418a00)->fb1d4 = operation_8c01bae8;
    *(int *)0x8c510ba8 = 0;
    return o;
}
