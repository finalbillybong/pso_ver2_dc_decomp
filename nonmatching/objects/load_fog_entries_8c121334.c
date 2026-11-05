/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c121334
 * function: load_fog_entries_8c121334
 * language: c
 * reference size: 556 bytes
 * compiled size: 556 bytes (+0.0%)
 * differing lines: 188 of 211 reference instruction lines
 * differing bytes: 206
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, constant loading; review found and fixed
 *   behaviour defects of the generator draft; not proven equivalent to the original
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Cfg {
    int f00;
    int f04;
    float f08;
    float f0c;
    int f10;
    int f14;
    float f18[8];
    char f38[8];
} Cfg;
typedef struct Entry {
    Cfg c;
    int f40;
    float f44;
    char unknown48[0xc];
    float *f54;
} Entry;
extern void *operator_new_8c18de4c(int);
extern void file_load_8c104d00(int, void *);
extern void reset_state_8c391cc4(void);
extern void operation_8c122164(int);
extern void *heap_alloc_8c122700(void *, unsigned int);
extern void TFogCtrl_EOR_ctor_8c1225a4(void *);
extern void set_fields_8c1372c0(void);
extern Cfg g_8c4d85e8;
extern Cfg *g_8c4d8628;
extern Entry g_8c4d862c[4];
extern Entry *g_8c4d878c[4];
extern float g_8c4d87d0[0x400];
extern int g_8c285dd4[4];
extern int g_8c4d87bc;
extern int g_8c4d87c0;
extern int g_8c4d87c4;
extern int g_8c4d97d0;
extern int g_8c4d879c;
extern int g_8c4d87ac;
extern int g_8c4d87b0;
extern int g_8c4d87b4;
extern int g_8c4d87b8;
extern int g_8c4d85e4;
extern int g_8c4d85e0;
extern float g_8c4d87c8;
extern float g_8c4d87cc;
extern void *g_8c4d97d4;
extern void *g_8c4d97e0;
void load_fog_entries_8c121334(void)
{
    Cfg c;
    int i;
    int z;
    int off;
    void *t;
    g_8c4d85e8.f00 = 1;
    g_8c4d85e8.f04 = 0;
    g_8c4d85e8.f08 = 4000.0f;
    g_8c4d85e8.f0c = 0.01f;
    g_8c4d85e8.f10 = 0;
    g_8c4d85e8.f14 = 0;
    for (i = 0; i < 8; i++) {
        *(float *)((char *)g_8c4d85e8.f18 + (i << 2)) = 0.0f;
        *((char *)g_8c4d85e8.f38 + i) = 0;
    }
    g_8c4d8628 = operator_new_8c18de4c(0x1000);
    for (i = 0; i < 0x40; i++) {
        *(Cfg *)((char *)g_8c4d8628 + (i << 6)) = g_8c4d85e8;
    }
    file_load_8c104d00(0x8c285db8, g_8c4d8628);
    for (i = 0; i < 0x400; i++) {
        *(float *)((char *)g_8c4d87d0 + (i << 2)) = 0.0f;
    }
    g_8c4d85e4 = 0;
    c = g_8c4d85e8;
    for (i = 0; i < 4; i++) {
        off = i * 0x58;
        *(int *)((char *)&g_8c4d862c[0].f40 + off) = 0;
        *(Cfg *)((char *)g_8c4d862c + off) = c;
        *(float *)((char *)&g_8c4d862c[0].f44 + off) = 0.0f;
        *(float **)((char *)&g_8c4d862c[0].f54 + off) = (float *)((char *)g_8c4d87d0 + (*(int *)((char *)g_8c285dd4 + (i << 2)) << 2));
        *(Entry **)((char *)g_8c4d878c + (i << 2)) = (Entry *)((char *)g_8c4d862c + off);
    }
    z = 0;
    g_8c4d87c4 = g_8c4d87c0 = g_8c4d87bc = z;
    g_8c4d87c8 = 0.0f;
    g_8c4d87cc = 0.0f;
    g_8c4d97d0 = z;
    g_8c4d879c = z;
    g_8c4d87ac = z;
    g_8c4d87b0 = z;
    g_8c4d87b4 = z;
    g_8c4d87b8 = z;
    reset_state_8c391cc4();
    g_8c4d85e0 = z | 1;
    operation_8c122164(z);
    t = heap_alloc_8c122700(g_8c4d97e0, 0x20);
    if (t != 0) {
        TFogCtrl_EOR_ctor_8c1225a4(t);
    }
    g_8c4d97d4 = t;
    set_fields_8c1372c0();
}
