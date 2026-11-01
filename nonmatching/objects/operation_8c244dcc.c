/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c244dcc
 * function: operation_8c244dcc
 * language: c
 * reference size: 1000 bytes
 * compiled size: 1024 bytes (+2.4%)
 * differing lines: 354 of 426 reference instruction lines
 * differing bytes: 768
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by +24 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c8c2451b4 S_c8c2451b4;
typedef struct Frame Frame;
typedef struct S_g8c510e28 S_g8c510e28;
typedef struct S_g8c510e34 S_g8c510e34;
typedef struct S_g8c510e3c S_g8c510e3c;
typedef struct S_g8c510e44 S_g8c510e44;
typedef struct S_vv1 S_vv1;
typedef struct S_vv7 S_vv7;
struct S_vv1 {
    int f00;
    int f04;
    int f08;
};
struct Frame {
    int f0c;
    char f10;
    char unknown11[0x3];
    int f14;
    int f18;
    int f1c;
    int f20;
    char unknown24[0x4];
};
struct S_vv7 {
    int f00;
    short f04;
    short f06;
    short f08;
    short f0a;
    short f0c;
    short f0e;
    unsigned char f10;
    unsigned char f11;
    short f12;
    int f14;
};
extern void memset_8c12b880(void *, int, int);
extern int operation_8c2451b4(unsigned int, int);
extern void operation_8c24554c(short);
extern int operation_8c245260(void *);
extern void operation_8c2455e4(int);
extern void operation_8c245618(int);
extern int call_8c18e808(int, int);
extern int operation_8c14f8c4(void);
extern void call_8c3889a4(int, int, int);
extern int operation_8c186ddc(int, int);
void operation_8c244dcc(int a0)
{
    Frame frame;
    int *home = &a0;
    S_vv1 *v1;
    int v3;
    int v4;
    int v5;
    int v6;
    S_vv7 *v7;
    int v42;
    int v2;
    int v8;
    char *v12;
    char *v15;
    int v18;
    int v29;
    int v41;
    int v51;
    int v11;
    int v26;
    int v44;
    char *v47;
    int v48;
    int v50;
    int v10;
    char *v46;
    char *v13;
    int v22;
    int v49;
    int v25;
    int v45;
    int v57;
    int v120;
    int v59;
    int v121;
    int t8;
    int v16;
    int t1;
    int t2;
    int t3;
    int v56;
    int t5;
    int t4;
    int t7;
    int t6;
    (void)home;
    v1 = (S_vv1 *)*(S_g8c510e28 **)0x8c510e28;
    v2 = (int)(*(int *)0x8c510e4c - (v1->f08 * 0x18 + 0x10));
    v3 = (int)0;
    v4 = (int)0x9000;
    memset_8c12b880((void *)(*(S_g8c510e34 **)0x8c510e34), v3, v4);
    memset_8c12b880((void *)(*(S_g8c510e3c **)0x8c510e3c), 0, 0x1400);
    *(int *)0x8c510e40 = 0;
    v5 = (int)0;
    v6 = (int)0x1000;
    memset_8c12b880((void *)(*(S_g8c510e44 **)0x8c510e44), v5, v6);
    v42 = (int)((int)v1 + v1->f04);
    *(int *)0x8c510e48 = 0;
    (&frame)->f0c = 0;
    v41 = (int)0;
    goto L_8c24504e;
    v7 = (S_vv7 *)((int)v1 + v1->f04);
    v8 = (int)0;
    do {
        S_c8c2451b4 *self;
        S_c8c2451b4 **home = &self;
        (void)home;
        t1 = operation_8c2451b4((unsigned int)1, (int)(v7->f12 + 1));
        self = (S_c8c2451b4 *)t1;
        v10 = (int)v7->f00;
        v25 = (int)v10;
        v26 = (int)v7->f0a;
        v29 = (int)v8;
        goto L_8c244fae;
        v11 = (int)v7->f0a;
        v12 = (char *)v8;
        v13 = (char *)v10;
        for (;;) {
            S_c8c2451b4 *self;
            S_c8c2451b4 **home = &self;
            (void)home;
            t2 = operation_8c2451b4((unsigned int)(v7->f10), (int)(v7->f11 + 1));
            self = (S_c8c2451b4 *)t2;
            operation_8c24554c(v7->f08);
            v18 = (int)v12;
            goto L_8c244ed6;
            v15 = (char *)v12;
            do {
                v16 = (int)((int)(v15) * 0x48);
                t3 = operation_8c245260((void *)(*(int *)0x8c510e34 + v16));
                v18 = (int)v15;
                if (t3 == 0) {
                    *(short *)((char *)((char *)*(S_g8c510e34 **)0x8c510e34 + 0xe) + (v16)) = v11;
                    *(short *)((char *)((char *)*(S_g8c510e34 **)0x8c510e34 + 0xc) + (v16)) = v7->f08;
                    v18 = (int)(v15 + 1);
                }
L_8c244ed6:;
                v15 = (char *)v18;
            } while ((int)(self) > 0);
            v25 = (int)v13;
            v26 = (int)v11;
            if ((int)(self) > 0) {
                *(int *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x0) + (*(int *)0x8c510e40 * 0x14)) = (short)v13;
                *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x4) + (*(int *)0x8c510e40 * 0x14)) = v7->f04;
                *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x6) + (*(int *)0x8c510e40 * 0x14)) = v7->f06;
                *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x8) + (*(int *)0x8c510e40 * 0x14)) = v7->f08;
                *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0xa) + (*(int *)0x8c510e40 * 0x14)) = v11;
                t4 = operation_8c2451b4((unsigned int)(v7->f0c), (int)(v7->f0e + 1));
                *(int *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0xc) + (*(int *)0x8c510e40 * 0x14)) = (int)(t4);
                *(int *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x10) + (*(int *)0x8c510e40 * 0x14)) = v2 + *(int *)0x8c510e48;
                v22 = (int)(v7->f00 + 0x2710 + v11);
                (&frame)->f10 = 0xc;
                operation_8c2455e4((int)(&(&frame)->f10));
                (&frame)->f14 = (unsigned short)v22;
                operation_8c245618((int)(&(&frame)->f14));
                (&frame)->f10 = 1;
                operation_8c2455e4((int)(&(&frame)->f10));
                *(int *)0x8c510e40 += 1;
                v25 = (int)v22;
                v26 = (int)(v11 + 1);
            }
            v29 = (int)v15;
L_8c244fae:;
            if (!((int)(self) > 0)) {
                v11 = (int)v26;
                v12 = (char *)v29;
                v13 = (char *)v25;
                break;
            }
            v11 = (int)v26;
            v12 = (char *)v29;
            v13 = (char *)v25;
        }
        *(int *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x0) + (*(int *)0x8c510e40 * 0x14)) = (short)v13;
        *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x4) + (*(int *)0x8c510e40 * 0x14)) = v7->f04;
        *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x6) + (*(int *)0x8c510e40 * 0x14)) = v7->f06;
        *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x8) + (*(int *)0x8c510e40 * 0x14)) = v7->f08;
        *(short *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0xa) + (*(int *)0x8c510e40 * 0x14)) = v11;
        t5 = operation_8c2451b4((unsigned int)(v7->f0c), (int)(v7->f0e + 1));
        (&frame)->f0c += 1;
        *(int *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0xc) + (*(int *)0x8c510e40 * 0x14)) = (int)(t5);
        *(int *)((char *)((char *)*(S_g8c510e3c **)0x8c510e3c + 0x10) + (*(int *)0x8c510e40 * 0x14)) = (int)(v7->f14);
        *(int *)0x8c510e40 += 1;
        v41 = (int)v12;
        v42 = (int)((int)v7 + 0x18);
L_8c24504e:;
        v7 = (S_vv7 *)v42;
        v8 = (int)v41;
    } while (v1->f08 > (&frame)->f0c);
    if (v8 > 0) {
        v44 = (int)0;
        v45 = (int)*(int *)0x8c510e34;
        v49 = (int)v44;
        v50 = (int)v44;
        goto L_8c24509e;
        v46 = (char *)v44;
        v47 = (char *)v44;
        do {
            v46 = (char *)(v46 + 1);
            v48 = (int)(v47 + *(int *)((char *)0x8c46eca0 + ((int)(v46) << 2)));
            v49 = (int)v46;
            v50 = (int)v48;
L_8c24509e:;
            v46 = (char *)v49;
            v47 = (char *)v50;
        } while (0x12 > v49);
        v51 = (int)(v8 * 0x48);
        t6 = call_8c18e808(v51, 0x48);
        if (!((unsigned int)(v47 + t6) > (unsigned int)0x5a8)) {
            t7 = operation_8c14f8c4();
            call_8c3889a4((int)(*(int *)0x8c46ec54 + t7 * 0x48), v45, v51);
            *(int *)((char *)0x8c46eca0 + (a0 << 2)) = (int)(t6);
        }
    }
    v120 = (int)*(int *)0x8c510e40;
    if (v120 > 0) {
        v56 = (int)(*(int *)0x8c510e48 + 3);
        t8 = operation_8c186ddc(a0, (int)(v2 + (v120 * 0x14 + 0x10) + ((unsigned int)v56 >> 2 << 2)));
        if (t8 != 0) {
            (&frame)->f1c = 0x10;
            v121 = (int)*(int *)0x8c510e40;
            (&frame)->f20 = (int)(v121);
            (&frame)->f18 = v121 * 0x14 + 0x10;
            call_8c3889a4(t8, (int)(&(&frame)->f18), 0x10);
            v59 = (int)t8;
            if (*(int *)0x8c510e40 > 0) {
                v57 = (int)(t8 + 0x10);
                call_8c3889a4(v57, (int)(*(S_g8c510e3c **)0x8c510e3c), (int)(*(int *)0x8c510e40 * 0x14));
                v59 = (int)v57;
            }
            if (v2 > 0) {
                v59 = (int)(v59 + *(int *)0x8c510e40 * 0x14);
                call_8c3889a4(v59, (int)(*(int *)0x8c510e28 + v1->f00), v2);
            }
            if (((unsigned int)v56 >> 2 << 2) > 0) {
                call_8c3889a4((int)(v59 + v2), (int)(*(S_g8c510e44 **)0x8c510e44), (int)((unsigned int)v56 >> 2 << 2));
            }
        }
    }
}
