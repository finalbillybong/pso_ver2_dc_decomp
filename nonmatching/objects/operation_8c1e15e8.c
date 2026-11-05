/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c1e15e8
 * function: operation_8c1e15e8
 * language: c
 * reference size: 412 bytes
 * compiled size: 400 bytes (-2.9%)
 * differing lines: 134 of 185 reference instruction lines
 * differing bytes: 307
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -12 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   sampled call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_8c Arg0_8c;
typedef struct S_vv39 S_vv39;
typedef struct S_vv40 S_vv40;
typedef struct S_vv49 S_vv49;
typedef struct S_vv50 S_vv50;
typedef struct S_vv51 S_vv51;
typedef struct S_vv57 S_vv57;
typedef struct S_x57760 S_x57760;
struct Object {
    char unknown0[0x8c];
    Arg0_8c *f8c;
    int f90;
    char unknown94[0x28];
    int fbc;
};
struct S_vv49 {
    short f00;
};
struct Frame {
    char unknown0[0x8];
    int f08;
    char unknownc[0x4];
};
struct S_vv50 {
    short f00;
};
struct S_vv51 {
    char f00;
    char f01;
};
struct S_vv57 {
    short f00;
};
struct S_x57760 {
    short f00;
};
struct S_vv39 {
    short f00;
};
struct S_vv40 {
    char f00;
    unsigned char f01;
};
extern int operation_8c04b888(short);
extern int call_8c1f538c(S_vv51 *, Frame *);
extern int call_8c1f53aa(S_vv51 *, Frame *);
extern void operation_8c04bee4(void *, int, int);
void operation_8c1e15e8(Object *o, int a1)
{
    Frame frame;
    S_vv51 *v51;
    int v54;
    int v53;
    int v41;
    S_vv49 *v49;
    int v38;
    int v35;
    S_vv50 *v50;
    int v55;
    int v52;
    S_vv40 *v40;
    int v56;
    int v36;
    S_vv57 *v57;
    int v48;
    int v37;
    S_vv39 *v39;
    int v47;
    int t1;
    int t2;
    int t3;
    v47 = (int)o->f90;
    if (v47 == 0) {
        return;
    }
    v52 = (int)0;
    v53 = (int)&*(int *)((char *)((char *)o->f8c + 0x0) + (v47 << 1));
    v41 = (int)v52;
    v49 = (S_vv49 *)(v53 + -2);
    if (!(v47 > 4)) {
        goto L_8c1e162c;
    }
    v47 = (int)4;
    goto L_8c1e162c;
L_8c1e1622:;
    v47 -= 1;
    v41 = (int)(v41 + 1);
    v49--;
    if (v47 > 0) {
L_8c1e162c:;
        t1 = operation_8c04b888(v49->f00);
        if (t1 != 0) {
            goto L_8c1e1622;
        }
    }
    v35 = (int)&(&frame)->f08;
    v38 = (int)0;
    v50 = (S_vv50 *)((int)v49 + 2);
    goto L_8c1e1648;
L_8c1e1640:;
    *(char *)((char *)((char *)v38 + 0x0) + (v35)) = v50->f00;
    v38 = (int)(v38 + 1);
    v50 = (S_vv50 *)((char *)v50 + 2);
L_8c1e1648:;
    if (v41 > v38) {
        goto L_8c1e1640;
    }
    *(char *)((char *)((char *)v38 + 0x0) + ((int)(&(&frame)->f08))) = 0;
    v54 = (int)0x8362;
    v48 = (int)v54;
    v55 = (int)0x82c1;
    v47 = (int)v55;
    v51 = (S_vv51 *)&(&frame)->f08;
L_8c1e165a:;
    if (v41 == 0) {
        return;
    }
    if (a1 != 0) {
        goto L_8c1e1678;
    }
    if (v41 != 1) {
        goto L_8c1e1678;
    }
    v56 = (int)v51->f00;
    if (v56 == 0x6e) {
        return;
    }
    if (v56 != 0x4e) {
        goto L_8c1e1678;
    }
    return;
L_8c1e1678:;
    if (((o->fbc & 8)) != 0) {
        t2 = call_8c1f538c(v51, (Frame *)((&frame)));
        v36 = (int)t2;
        goto L_8c1e1698;
    }
    t3 = call_8c1f53aa(v51, (Frame *)((&frame)));
    v36 = (int)t3;
L_8c1e1698:;
    if (v36 == 0) {
        goto L_8c1e16e2;
    }
    if (!(v41 > 1)) {
        goto L_8c1e16e2;
    }
    if (v51->f00 != v51->f01) {
        goto L_8c1e16e2;
    }
    if (((o->fbc & 8)) != 0) {
        v57 = (S_vv57 *)((char *)&*(int *)((char *)((char *)o->f8c + 0x0) + (o->f90 << 1)) - (v41 << 1));
        v57->f00 = v48;
        goto L_8c1e16e2;
    }
    ((S_x57760 *)((char *)&*(int *)((char *)((char *)o->f8c + 0x0) + (o->f90 << 1)) - (v41 << 1)))->f00 = v47;
L_8c1e16e2:;
    if (v36 != 0) {
        v41 -= 1;
        v51 = (S_vv51 *)((char *)v51 + 1);
        goto L_8c1e165a;
    }
    v39 = (S_vv39 *)((char *)&*(int *)((char *)((char *)o->f8c + 0x0) + (o->f90 << 1)) - (v41 << 1));
    v37 = (int)0;
    v40 = (S_vv40 *)(&frame);
    v41 -= 1;
    v51 = (S_vv51 *)((char *)v51 + 1);
    goto L_8c1e1722;
L_8c1e1704:;
    v37 = (int)(v37 + 1);
    v39->f00 = (unsigned short)v40->f00 << 8 | v40->f01;
    v39 = (S_vv39 *)((char *)v39 + 2);
    v40 = (S_vv40 *)((char *)v40 + 2);
L_8c1e1722:;
    if (v40->f00 != 0) {
        goto L_8c1e1704;
    }
    v41 = (int)(v41 + 1 - v37);
    operation_8c04bee4((void *)(&o->f8c), (int)((int)o->f90 - v41), v41);
    o->f90 -= v41;
}
