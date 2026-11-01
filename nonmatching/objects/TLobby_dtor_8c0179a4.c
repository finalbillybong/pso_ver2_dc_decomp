/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0179a4
 * function: TLobby_dtor_8c0179a4
 * language: c
 * reference size: 268 bytes
 * compiled size: 276 bytes (+3.0%)
 * differing lines: 58 of 79 reference instruction lines
 * differing bytes: 181
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x18];
    void *dispatch;
};
extern int g_8c418a00;
extern int g_8c418a04;
extern int g_8c418a08;
extern short g_8c41bcdc;
extern short g_8c41bcde;
extern int g_8c41bce0;
extern int g_8c41bce4;
extern int g_8c41bce8;
extern int g_8c41bcec;
extern int g_8c41bcf0;
extern int g_8c41bcf4;
extern int g_8c41bcf8;
extern int g_8c41bcfc;
extern int g_8c41bd00;
extern int g_8c41bd04;
extern int g_8c41bd08;
extern int g_8c41bd0c;
extern int g_8c41bd10;
extern int g_8c41c728;
extern int g_8c41c72c;
extern int g_8c41c7c0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c510ba8;
extern void operation_8c017ab0(void);
extern void TObject_dtor_8c03311c(void *, short);
extern void operation_8c122774(void *, Object *);
Object *TLobby_dtor_8c0179a4(Object *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c261278;
        operation_8c017ab0();
        g_8c418a00 = 0;
        g_8c418a04 = 0;
        g_8c418a08 = 0;
        g_8c41bcdc = 0;
        g_8c41bcde = 0;
        g_8c41bce0 = 0;
        g_8c41bce4 = 0;
        g_8c41bcec = 0;
        g_8c41bcf0 = 0;
        g_8c41bcf4 = 0;
        g_8c41bcf8 = 0;
        g_8c41bcfc = 0;
        g_8c41bd00 = 0;
        g_8c41bd04 = 0;
        g_8c41bd08 = 0;
        g_8c41bd10 = 0;
        g_8c41c728 = 0;
        g_8c41c72c = 0;
        g_8c41c7c0 = 0;
        g_8c510ba8 = 0;
        g_8c41bce8 = 1;
        g_8c41bd0c = 1;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            operation_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
