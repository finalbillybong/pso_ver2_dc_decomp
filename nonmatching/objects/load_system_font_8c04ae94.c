/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c04ae94
 * function: load_system_font_8c04ae94
 * language: c
 * reference size: 796 bytes
 * compiled size: 796 bytes (+0.0%)
 * differing lines: 98 of 254 reference instruction lines
 * differing bytes: 99
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
typedef struct S_g8c467124 S_g8c467124;
typedef struct S_g8c467128 S_g8c467128;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv14 S_vv14;
typedef struct S_vv2 S_vv2;
typedef struct S_vv4 S_vv4;
typedef struct S_vv6 S_vv6;
typedef struct S_vv7 S_vv7;
typedef struct S_vv8 S_vv8;
struct S_vv2 {
    int f00;
};
struct S_vv4 {
    int f00;
};
struct S_g8c467128 {
    short f00;
    short f02;
    unsigned short f04;
    unsigned short f06;
    char unknown8[0x18];
    unsigned short f20;
    unsigned short f22;
    unsigned short f24;
    char unknown26[0x1a];
    unsigned short f40;
    unsigned short f42;
    unsigned short f44;
    unsigned short f46;
    char unknown48[0x18];
    unsigned short f60;
    unsigned short f62;
    unsigned short f64;
    unsigned short f66;
    char unknown68[0x18];
    unsigned short f80;
    unsigned short f82;
    unsigned short f84;
    unsigned short f86;
    char unknown88[0x18];
    unsigned short fa0;
    unsigned short fa2;
    unsigned short fa4;
    unsigned short fa6;
    char unknowna8[0x18];
    unsigned short fc0;
    char unknownc2[0x4];
    unsigned short fc6;
    char unknownc8[0x18];
    unsigned short fe0;
    unsigned short fe2;
    unsigned short fe4;
    unsigned short fe6;
};
struct S_vv8 {
    char unknown0[0x26];
    unsigned short f26;
};
struct S_vv7 {
    char unknown0[0xc2];
    unsigned short fc2;
};
struct S_vv6 {
    char unknown0[0xc4];
    unsigned short fc4;
};
struct S_vv14 {
    short f00;
    char f02;
    unsigned char f03;
    short f04;
    short f06;
};
extern int g_8c467120;
extern S_g8c467124 *g_8c467124;
extern S_g8c467128 *g_8c467128;
extern int g_8c46712c;
extern int g_8c467130;
extern char g_8c467134;
extern int g_8c467138;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int operation_8c104d70(int);
extern int operator_new_8c18de4c(int);
extern void set_record_8c37e9a8(void *, void *, int, int, int);
extern void set_record_8c37e9b6(void *, void *, int, int);
extern void call_8c38278e(void *);
extern void call_8c38a9e2(int);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TNECFontEORFunction_ctor_8c04baf8(void *);
void load_system_font_8c04ae94(void)
{
    int v1;
    unsigned int v3;
    S_vv2 *v2;
    unsigned int v5;
    S_vv4 *v4;
    S_vv8 *v8;
    int v10;
    S_vv14 *v14;
    S_vv7 *v7;
    unsigned int v11;
    unsigned int v13;
    int v9;
    S_vv6 *v6;
    int v12;
    int t1;
    int t2;
    int t3;
    int t5;
    t1 = operation_8c104d70((int)((void *)0x8c2f1ef8));
    g_8c467120 = (int)(t1);
    t2 = operator_new_8c18de4c(0x20000);
    g_8c467124 = (S_g8c467124 *)(int)(t2);
    v2 = (S_vv2 *)t2;
    v3 = (unsigned int)0;
    while ((unsigned int)0x8000 > v3) {
        v2->f00 = 0;
        v3 = (unsigned int)(v3 + 1);
        v2 = (S_vv2 *)((char *)v2 + 4);
    }
    set_record_8c37e9a8((void *)((void *)0x8c46713c), g_8c467124, 0x502, 0x200, 0x200);
    set_record_8c37e9b6((void *)((void *)0x8c467168), (void *)((void *)0x8c46713c), 0xdcf28, 0x40800000);
    call_8c38278e((void *)((void *)0x8c2f1bf0));
    t3 = operator_new_8c18de4c(0x100);
    g_8c467128 = (S_g8c467128 *)(int)(t3);
    v4 = (S_vv4 *)t3;
    v5 = (unsigned int)0;
    while ((unsigned int)0x40 > v5) {
        v4->f00 = 0;
        v5 = (unsigned int)(v5 + 1);
        v4 = (S_vv4 *)((char *)v4 + 4);
    }
    g_8c467128->f00 = 0xfff;
    g_8c467128->f02 = 0x5fff;
    g_8c467128->f04 = 0xafff;
    g_8c467128->f06 = 0xffff;
    g_8c467128->f20 = 0xcc34;
    g_8c467128->f22 = 0xdd78;
    g_8c467128->f24 = 0xeebc;
    v8 = (S_vv8 *)g_8c467128;
    v8->f26 = 0xffff;
    g_8c467128->f40 = 0xc13a;
    g_8c467128->f42 = 0xd57c;
    g_8c467128->f44 = 0xeabe;
    g_8c467128->f46 = 0xffff;
    g_8c467128->f60 = 0xeb76;
    g_8c467128->f62 = 0xca91;
    g_8c467128->f64 = 0xa9ac;
    g_8c467128->f66 = 0x8cc7;
    g_8c467128->f80 = 0xff18;
    g_8c467128->f82 = 0xd210;
    g_8c467128->f84 = 0xa908;
    g_8c467128->f86 = 0x8000;
    g_8c467128->fa0 = 0xe31f;
    g_8c467128->fa2 = 0xc214;
    g_8c467128->fa4 = 0xa10a;
    g_8c467128->fa6 = 0x8000;
    g_8c467128->fc0 = 0xfff8;
    v7 = (S_vv7 *)g_8c467128;
    v7->fc2 = 0xd290;
    v6 = (S_vv6 *)g_8c467128;
    v6->fc4 = 0xa948;
    g_8c467128->fc6 = 0x8000;
    g_8c467128->fe0 = 0xe3f8;
    g_8c467128->fe2 = 0xc290;
    g_8c467128->fe4 = 0xa148;
    g_8c467128->fe6 = 0x8000;
    call_8c38a9e2(0);
    v10 = operator_new_8c18de4c(0x1388);
    g_8c467130 = (int)(v10);
    v9 = (int)0;
    v11 = (unsigned int)0;
    while ((unsigned int)0x19 > v11) {
        v12 = (int)0;
        v13 = (unsigned int)0;
        while ((unsigned int)0x19 > v13) {
            ((S_vv14 *)v10)->f00 = 0x2ef;
            ((S_vv14 *)v10)->f02 = 9;
            ((S_vv14 *)v10)->f03 = 0xf0;
            ((S_vv14 *)v10)->f04 = v12;
            ((S_vv14 *)v10)->f06 = v9;
            v13 = (unsigned int)(v13 + 1);
            v12 = (int)(v12 + 0x14);
            v10 = (int)((char *)v10 + 8);
        }
        v9 = (int)(v9 + 0x14);
        v11 = (unsigned int)(v11 + 1);
    }
    g_8c467134 = 0;
    g_8c46712c = 3;
    t5 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t5 != 0) {
        TNECFontEORFunction_ctor_8c04baf8((void *)t5);
    }
    g_8c467138 = (int)(t5);
}
