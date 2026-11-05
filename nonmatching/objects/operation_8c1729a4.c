/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1729a4
 * function: operation_8c1729a4
 * language: c
 * reference size: 448 bytes
 * compiled size: 452 bytes (+0.9%)
 * differing lines: 40 of 195 reference instruction lines
 * differing bytes: 153
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block96 {
    int words[24];
} Block96;
typedef struct Frame Frame;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
typedef struct S_g8c4db4e0 S_g8c4db4e0;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
typedef struct S_vv69 S_vv69;
typedef struct S_x464 S_x464;
typedef struct S_x464_0 S_x464_0;
struct Frame {
    int f00;
    int f04;
    int f08;
    char unknownc[0x3c];
    int f48;
    char unknown4c[0x3c];
    int f88;
    char unknown8c[0x3c];
    Block96 fc8;
};
struct S_vv69 {
    char f00;
};
struct S_x464 {
    S_x464_0 *f00;
};
struct S_x464_0 {
    char f00;
};
extern Block96 g_8c318ba8;
extern S_g8c4db408 *g_8c4db408;
extern S_g8c4db4e0 *g_8c4db4e0;
extern S_g8c4db4e4 *g_8c4db4e4;
extern char g_8c318c08[];
extern void call_8c12b00c(void *, void *, ...);
extern void sprintf_8c12b048(void *, void *, ...);
extern int strlen_8c12b0cc(void *);
extern void call_8c18e720(void *, void *);
static inline int icmp(const unsigned char *a, const unsigned char *b)
{
    unsigned char c1, c2;
    while ((c1 = *a++) == (c2 = *b++)) {
        if (c1 == 0) return 0;
    }
    return c1 - c2;
}
void operation_8c1729a4(void)
{
    Frame frame;
    S_vv69 *v69;
    char v70;
    unsigned int v66;
    int v60;
    int v71;
    int v61;
    int v72;
    unsigned int v67;
    int v73;
    int v63;
    unsigned int v62;
    int t1;
    int t2;
    int t3;
    *(Block96 *)&(&frame)->fc8 = *(Block96 *)&g_8c318ba8;
    v63 = (int)&(&frame)->f88;
    v66 = (unsigned int)0;
    v62 = (unsigned int)0x40;
    goto L_8c172b0c;
L_8c1729d0:;
    v69 = (S_vv69 *)g_8c4db4e0;
    g_8c4db4e0 = (S_g8c4db4e0 *)((int)v69 + 1);
    v70 = (char)v69->f00;
    if (v70 != 0x3e) {
        goto L_8c172b06;
    }
    *(char *)((char *)((char *)v66 + 0x0) + ((int)(&(&frame)->f88))) = 0;
    (&frame)->f04 = -1;
    call_8c12b00c((void *)(&(&frame)->f88), (void *)((g_8c318c08 + 0x53)), &(&frame)->f04);
    v60 = (int)(&frame)->f04;
    v60 = (0x100 > v60 && v60 >= 0) ? v60 : -1;
    if (v60 != -1) {
        sprintf_8c12b048((void *)(&(&frame)->f48), (void *)((g_8c318c08 + 0x47)), *(S_g8c4db408_0 **)((char *)((char *)g_8c4db408 + 0x0) + (v60 << 2)));
        t2 = strlen_8c12b0cc((void *)(&(&frame)->f48));
        call_8c18e720(g_8c4db4e4, (void *)(&(&frame)->f48));
        v71 = (int)((int)g_8c4db4e4 + t2);
        g_8c4db4e4 = (S_g8c4db4e4 *)(int)(v71);
        return;
    }
    (&frame)->f00 = -1;
    call_8c12b00c((void *)(&(&frame)->f88), (void *)((g_8c318c08 + 0x57)), (&frame));
    v61 = (int)(&frame)->f00;
    v61 = (7 >= v61 && v61 >= 0) ? v61 : -1;
    if (v61 != -1) {
        sprintf_8c12b048((void *)(&(&frame)->f08), (void *)((g_8c318c08 + 0x60)), v61);
        t3 = strlen_8c12b0cc((void *)(&(&frame)->f08));
        call_8c18e720(g_8c4db4e4, (void *)(&(&frame)->f08));
        v72 = (int)((int)g_8c4db4e4 + t3);
        g_8c4db4e4 = (S_g8c4db4e4 *)(int)(v72);
        return;
    }
    v67 = (unsigned int)0;
    goto L_8c172afc;
L_8c172aba:;
    t3 = v67 << 3;
    v73 = (int)*(int *)((char *)&(&frame)->fc8 + t3);
    t1 = icmp((unsigned char *)v73, (unsigned char *)&(&frame)->f88);
    if (t1 == 0) {
        ((void (*)(void))(*(int *)((char *)((char *)(&frame) + 0xcc) + t3)))();
    }
    v67 = (unsigned int)(v67 + 1);
L_8c172afc:;
    if ((unsigned int)0xc > v67) {
        goto L_8c172aba;
    }
    return;
L_8c172b06:;
    *(char *)((char *)((char *)v66 + 0x0) + (v63)) = v70;
    v66 = (unsigned int)(v66 + 1);
L_8c172b0c:;
    if (!(v62 > v66)) {
        return;
    }
    if (*(char *)g_8c4db4e0 != 0) {
        goto L_8c1729d0;
    }
}
