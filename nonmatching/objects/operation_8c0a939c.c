/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a939c
 * function: operation_8c0a939c
 * language: c
 * reference size: 372 bytes
 * compiled size: 380 bytes (+2.2%)
 * differing lines: 168 of 178 reference instruction lines
 * differing bytes: 354
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
typedef struct Arg1 Arg1;
typedef struct Arg2 Arg2;
typedef struct S_x53840 S_x53840;
typedef struct S_x54512 S_x54512;
struct Arg2 {
    char unknown0[0x10];
    int f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    int f48;
    int f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x18];
    float f78;
    float f7c;
    float f80;
    float f84;
};
struct Arg1 {
    char unknown0[0x10];
    int f10;
    int f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
    float f34;
    float f38;
    float f3c;
    float f40;
    float f44;
    int f48;
    int f4c;
    float f50;
    float f54;
    float f58;
    float f5c;
    char unknown60[0x18];
    float f78;
    float f7c;
    float f80;
    float f84;
};
struct S_x53840 {
    float f00;
};
struct S_x54512 {
    float f00;
};
extern void call_8c18e720(Arg2 *, Arg1 *);
void operation_8c0a939c(int a0, Arg1 *a1, Arg2 *a2)
{
    int v1;
    int v5;
    int v7;
    int v8;
    call_8c18e720(a2, a1);
    a2->f10 = (int)(a1->f10);
    a2->f14 = (int)(a1->f14);
    a2->f18 = a1->f18;
    a2->f1c = a1->f1c;
    a2->f20 = a1->f20;
    a2->f24 = a1->f24;
    a2->f28 = a1->f28;
    a2->f2c = a1->f2c;
    a2->f30 = a1->f30;
    a2->f34 = a1->f34;
    a2->f38 = a1->f38;
    a2->f3c = a1->f3c;
    a2->f40 = a1->f40;
    a2->f44 = a1->f44;
    a2->f48 = (int)(a1->f48);
    a2->f4c = (int)(a1->f4c);
    a2->f50 = a1->f50;
    a2->f54 = a1->f54;
    a2->f58 = a1->f58;
    a2->f5c = a1->f5c;
    v5 = (int)0;
    goto L_8c0a94a8;
    v1 = (int)0;
L_8c0a9496:;
    ((S_x53840 *)((char *)(int *)((char *)a2 + 0x60) + (v1 << 2)))->f00 = ((S_x54512 *)((char *)(int *)((char *)a1 + 0x60) + (v1 << 2)))->f00;
    v5 = (int)(v1 + 1);
L_8c0a94a8:;
    v1 = (int)v5;
    if (6 > v5) {
        goto L_8c0a9496;
    }
    a2->f78 = a1->f78;
    a2->f7c = a1->f7c;
    a2->f80 = a1->f80;
    a2->f84 = a1->f84;
    v8 = (int)0;
    goto L_8c0a94f4;
    v7 = (int)0;
L_8c0a94ec:;
    *(char *)((char *)((char *)a2 + 0x88) + (v7)) = *(unsigned char *)((char *)((char *)a1 + 0x88) + (v7));
    v8 = (int)(v7 + 1);
L_8c0a94f4:;
    v7 = (int)v8;
    if (0x10 > v8) {
        goto L_8c0a94ec;
    }
}
