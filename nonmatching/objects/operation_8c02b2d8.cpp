/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c02b2d8
 * function: operation_8c02b2d8
 * language: c++
 * reference size: 1344 bytes
 * compiled size: 1308 bytes (-2.7%)
 * differing lines: 572 of 497 reference instruction lines
 * differing bytes: 1092
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -36 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv10_0 S_vv10_0;
typedef struct S_vv10_184 S_vv10_184;
typedef struct S_vv10_3b8 S_vv10_3b8;
typedef struct S_vv50 S_vv50;
typedef struct S_vv54 S_vv54;
typedef struct S_x88752 S_x88752;
typedef struct S_x90672 S_x90672;
class S_vv10;
class S_vv10 {
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
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
};
typedef struct S_vv10Data {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x14c];
    S_vv10_184 *f184;
    char unknown188[0x14];
    short f19c;
    short f19e;
    char unknown1a0[0x2];
    short f1a2;
    short f1a4;
    short f1a6;
    short f1a8;
    short f1aa;
    short f1ac;
    char unknown1ae[0x2];
    short f1b0;
    char unknown1b2[0x10e];
    int f2c0;
    float f2c4;
    int f2c8;
    int f2cc;
    float f2d0;
    int f2d4;
    int f2d8;
    float f2dc;
    int f2e0;
    int f2e4;
    char unknown2e8[0x4];
    int f2ec;
    char unknown2f0[0x18];
    short f308;
    char unknown30a[0x46];
    int f350;
    char unknown354[0x64];
    S_vv10_3b8 *f3b8;
    char unknown3bc[0x25c];
    int f618;
    char unknown61c[0xc0];
    int f6dc;
    char unknown6e0[0xd0];
    int f7b0;
} S_vv10Data;
struct S_vv10_3b8 {
    char unknown0[0x20];
    int f20;
};
struct S_vv10_184 {
    char unknown0[0x20];
    int f20;
};
struct S_vv50 {
    char unknown0[0x350];
    int f350;
};
struct S_vv54 {
    short f00;
};
struct S_x90672 {
    float f00;
};
struct S_x88752 {
    float f00;
};
extern int g_8c418248;
extern int g_8c41cd20;
extern int g_8c510cc4;
extern "C" void operation_2394ec(void *);
extern "C" int operation_2391f4(void *);
extern "C" int operation_239218(void *);
extern "C" void operation_8c16a88c(void *, S_vv10 *, int);
extern "C" int operation_239228(void *);
extern "C" int operation_239238(void *);
extern "C" int operation_239248(void *);
extern "C" int operation_8c2393ac(void *, int);
extern "C" void operation_8c03c098(void *, int, int);
extern "C" int operation_239258(void *);
extern "C" int operation_239380(void *);
extern "C" int operation_239268(void *);
extern "C" int operation_239328(void *);
extern "C" void call_8c02525c(S_vv10 *, int);
extern "C" int operation_239358(void *);
extern "C" int operation_239208(void *);
extern "C" void operation_8c2476e8(void *, char);
extern "C" void operation_8c2476a8(void *, int);
extern "C" void clear_flag28_8c02bb8c(void *);
extern "C" int operation_239278(void *);
extern "C" void word_operation_8c02bac0(void *);
extern "C" int operation_239298(void *);
extern "C" int operation_2392a8(void *);
extern "C" int operation_2392b8(void *);
extern "C" int operation_8c2393e8(void *);
extern "C" void store_percent_8c03c194(void *, int);
extern "C" int operation_2392c8(void *);
extern "C" void call_8c16a968(void *, S_vv10 *, int, int);
extern "C" void operation_8c02c998(void *);
extern "C" void operation_8c03b2b0(void *, void *);
static inline S_vv10 *get_player(int id)
{
    if (id == 0xffff) return 0;
    if (id >= 0xc) return 0;
    return *(S_vv10 **)((char *)0x8c41ce2c + (id << 2));
}
extern "C" void operation_8c02b2d8(void)
{
    int k1;
    int k2;
    int k3;
    int i;
    void *q;
    S_vv10 *p;
    int f;
    int n;
    int j;
    S_vv50 *g;
    q = (void *)0x8c41ce5c;
    k1 = 0xbc8;
    k2 = 0x3bc;
    k3 = 0x2e8;
    for (i = 0; i < 0xc; i++) {
        p = get_player(i);
        if (p == 0) continue;
        operation_2394ec((char *)p + 0x6dc);
        if ((unsigned char)operation_2391f4(q) != 1) return;
        f = ((S_vv10Data *)p)->f308 == 3;
        if (f != 0) {
            ((S_vv10Data *)p)->f618 = 0xc083;
        } else {
            ((S_vv10Data *)p)->f618 = 0x4003;
        }
        ((S_vv10Data *)p)->f7b0 = 1;
        f = ((S_vv10Data *)p)->f20 == g_8c418248;
        if (f != 0) g_8c41cd20 = 1;
        switch ((unsigned char)operation_239218(q)) {
        case 1:
        case 2:
        case 3:
            operation_8c16a88c(*(void **)((char *)p + k1), p, 0);
            operation_8c16a88c(*(void **)((char *)p + k1), p, 1);
        }
        switch ((unsigned char)operation_239228(q)) {
        case 1:
            operation_8c16a88c(*(void **)((char *)p + k1), p, 2);
        }
        switch ((unsigned char)operation_239238(q)) {
        case 1:
        case 2:
            operation_8c16a88c(*(void **)((char *)p + k1), p, 3);
        }
        if ((unsigned char)operation_239248(q) == 1) {
            for (j = 0; j < 4; j++) {
                operation_8c03c098((char *)p + 0x74c, operation_8c2393ac(q, j), j);
            }
        }
        switch ((unsigned char)operation_239258(q)) {
        case 2:
            ((S_vv10Data *)p)->f6dc = (unsigned char)operation_239380(q);
        }
        switch ((unsigned char)operation_239268(q)) {
        case 1:
            ((S_vv10Data *)p)->f19c = 0;
            ((S_vv10Data *)p)->f19e = 0;
            call_8c02525c(p, (short)operation_239328(q));
        }
        n = operation_239358(q);
        switch ((unsigned char)operation_239208(q)) {
        case 1:
            operation_8c2476e8((char *)p + k2, -1);
            *((char *)p + k2) = -1;
            break;
        case 2:
            operation_8c2476a8((char *)p + k2, n);
        }
        clear_flag28_8c02bb8c(p);
        switch ((unsigned char)operation_239278(q)) {
        case 1:
            word_operation_8c02bac0(p);
        }
        if ((unsigned char)operation_239298(q) == 1) {
            f = ((S_vv10Data *)p)->f20 == g_8c418248;
            if (f != 0) ((S_vv10Data *)p)->f3b8->f20 |= 2;
        }
        if ((unsigned char)operation_2392a8(q) != 0) {
            f = ((S_vv10Data *)p)->f20 == g_8c418248;
            if (f != 0) ((S_vv10Data *)p)->f184->f20 = 0;
        }
        if ((unsigned char)operation_2392b8(q) == 1) {
            store_percent_8c03c194((char *)p + 0x750, operation_8c2393e8(q));
        }
        if ((unsigned char)operation_2392c8(q) == 1) {
            call_8c16a968(*(void **)((char *)p + k1), p, 3, 9);
        }
        g = (S_vv50 *)get_player(g_8c418248);
        if (g != 0) *(int *)((char *)g + 0x350) |= 0x8000;
        operation_8c02c998(p);
        p->v64();
        ((S_vv10Data *)p)->f34 &= 0xfffff1ff;
        *(int *)((char *)p + 0x350) &= 0xfffffffe;
        ((S_vv10Data *)p)->f34 &= 0xfffffffc;
        *(short *)((char *)p + 0x1ae) += (int)((float)((S_vv10Data *)p)->f1a6 * -((S_vv10Data *)p)->f2c4);
        ((S_vv10Data *)p)->f2c0 = 0;
        ((S_vv10Data *)p)->f2c4 = 0.0f;
        ((S_vv10Data *)p)->f2c8 = 0;
        ((S_vv10Data *)p)->f34 &= -0x3d;
        *(short *)((char *)p + 0x1ae) += (int)((float)((S_vv10Data *)p)->f1a6 * -((S_vv10Data *)p)->f2d0);
        ((S_vv10Data *)p)->f2cc = 0;
        ((S_vv10Data *)p)->f2d0 = 0.0f;
        ((S_vv10Data *)p)->f2d4 = 0;
        *(short *)((char *)p + 0x1aa) += (int)((float)((S_vv10Data *)p)->f1a2 * -((S_vv10Data *)p)->f2dc);
        *(short *)((char *)p + 0x1ac) += (int)((float)((S_vv10Data *)p)->f1a4 * -((S_vv10Data *)p)->f2dc);
        ((S_vv10Data *)p)->f2d8 = 0;
        ((S_vv10Data *)p)->f2dc = 0.0f;
        ((S_vv10Data *)p)->f2e0 = 0;
        *(short *)((char *)p + 0x1b0) += (int)((float)((S_vv10Data *)p)->f1a8 * -*(float *)((char *)p + k3));
        ((S_vv10Data *)p)->f2e4 = 0;
        *(float *)((char *)p + k3) = 0.0f;
        ((S_vv10Data *)p)->f2ec = 0;
        operation_8c03b2b0((char *)g_8c510cc4 + i * 0x42c, p);
    }
}
