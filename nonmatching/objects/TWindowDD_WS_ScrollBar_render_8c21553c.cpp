/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c21553c
 * function: TWindowDD_WS_ScrollBar_render_8c21553c
 * language: c++
 * reference size: 968 bytes
 * compiled size: 956 bytes (-1.2%)
 * differing lines: 386 of 401 reference instruction lines
 * differing bytes: 756
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original; compiled size differs from the reference by -12 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_c0 S_c0;
typedef struct Frame Frame;
typedef struct S_g8c46fe00 S_g8c46fe00;
typedef struct S_vv11 S_vv11;
typedef struct S_vv15 S_vv15;
typedef struct S_vv3 S_vv3;
typedef struct S_vv4 S_vv4;
class Object;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual int v5();
};
typedef struct ObjectData {
    char unknown0[0x48];
    float f48;
    float f4c;
    float f50;
    float f54;
    char unknown58[0x4];
    float f5c;
    char unknown60[0x8];
    float f68;
    float f6c;
    float f70;
    float f74;
} ObjectData;
struct Frame {
    float f00;
    float f04;
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    float f1c;
    int f20;
    char unknown24[0xbc];
};
struct S_c0 {
    char unknown0[0x28];
    float f28;
    float f2c;
};
struct S_vv3 {
    char unknown0[0xc];
    float f0c;
    float f10;
};
struct S_vv4 {
    float f00;
    float f04;
};
struct S_vv11 {
    char unknown0[0x4];
    float f04;
    char unknown8[0x14];
    float f1c;
    char unknown20[0x14];
    float f34;
    char unknown38[0x14];
    float f4c;
    char unknown50[0x14];
    float f64;
    char unknown68[0x14];
    float f7c;
    char unknown80[0x14];
    float f94;
    char unknown98[0x14];
    float fac;
};
struct S_vv15 {
    float f00;
    char unknown4[0x14];
    float f18;
};
extern float g_8c2e1548;
extern float g_8c2e154c;
extern float g_8c2e155c;
extern float g_8c2e1690;
extern float g_8c2e1728;
extern float g_8c2e172c;
extern float g_8c2e1734;
extern float g_8c2e1738;
extern float g_8c2e173c;
extern float g_8c2e1740;
extern float g_8c2e1744;
extern float g_8c2e1748;
extern float g_8c2e174c;
extern float g_8c2e1750;
extern float g_8c2e1754;
extern float g_8c2e1758;
extern float g_8c2e175c;
extern float g_8c2e1760;
extern float g_8c2e1764;
extern float g_8c2e1768;
extern S_g8c46fe00 *g_8c46fe00;
extern "C" char g_8c504fe0[];
extern "C" void call_8c20b098(Object *, S_c0 *);
extern "C" int operation_8c20b148(void *);
extern "C" float operation_8c20b160(float, float);
extern "C" void operation_8c20a89c(void *, int, float);
extern "C" void call_8c38d9a0(void *, int, int, int, float);
extern "C" void call_8c3827d8(void *);
extern "C" void sq_select_8c38aeb4(int);
extern "C" void sq_header_8c38af22(int, int);
extern "C" void sq_quad_8c38b09e(Frame *, float);
extern "C" void sq_flush_8c38af12(void);
extern "C" void TWindowDD_WS_ScrollBar_render_8c21553c(Object *o)
{
    Frame frame;
    int v2;
    S_vv3 *v3;
    S_vv4 *v4;
    float v30;
    float v1;
    float v5;
    float v31;
    float v7;
    float v6;
    S_vv11 *v11;
    float v10;
    float v32;
    float v12;
    float v13;
    int v16;
    S_vv15 *v15;
    float v14;
    float v29;
    float v33;
    float v17;
    float v18;
    float v34;
    float v20;
    float v19;
    float v21;
    float v22;
    float v23;
    S_c0 *t1;
    float t2;
    int t3;
    float t4;
    t1 = (S_c0 *)o->v5();
    call_8c20b098(o, t1);
    t3 = operation_8c20b148(g_8c46fe00);
    t2 = operation_8c20b160(((ObjectData *)o)->f5c, 0.0f);
    operation_8c20a89c((void *)(&(&frame)->f20), -1, t2);
    v2 = (int)0;
    v1 = (float)t1->f2c;
    v3 = (S_vv3 *)&(&frame)->f20;
    v4 = (S_vv4 *)(g_8c504fe0 + 0x180);
    while (8 > v2) {
        v3->f0c = v4->f00;
        v3->f10 = v4->f04;
        v3 = (S_vv3 *)((char *)v3 + 24);
        v4 = (S_vv4 *)((char *)v4 + 8);
        v2 = (int)(v2 + 1);
    }
    v30 = (float)(((ObjectData *)o)->f4c + ((ObjectData *)o)->f54 * 0.5f);
    v5 = (float)v30;
    v31 = (float)(((ObjectData *)o)->f54 * 0.5f * v1);
    v6 = (float)(v5 - v31);
    v7 = (float)(v30 + v31);
    if (v31 < g_8c2e154c) {
        v10 = (float)((v7 - v6) / 3.0f);
    } else {
        v10 = (float)16.0f;
    }
    v11 = (S_vv11 *)&(&frame)->f20;
    v11->f1c = v6;
    v11->f04 = v6;
    v11->f4c = v6 + v10;
    v11->f34 = v6 + v10;
    v11->f7c = v7 - v10;
    v11->f64 = v7 - v10;
    v11->fac = v7;
    v11->f94 = v7;
    v32 = (float)(((ObjectData *)o)->f50 * 0.5f);
    v12 = (float)(((ObjectData *)o)->f48 + v32);
    v13 = (float)(v12 - v32 * t1->f28);
    v14 = (float)(v13 + g_8c2e1548 * t1->f28);
    v15 = (S_vv15 *)&(&frame)->f20;
    v16 = (int)0;
    while (4 > v16) {
        v15->f00 = v13;
        v15->f18 = v14;
        v15 = (S_vv15 *)((char *)v15 + 48);
        v16 = (int)(v16 + 1);
    }
    v29 = (float)t1->f28;
    v33 = (float)(g_8c2e155c * 0.5f * v29);
    (&frame)->f00 = v12 - v33;
    v17 = (float)(v12 + v33);
    (&frame)->f08 = v17;
    call_8c38d9a0((void *)(&(&frame)->f20), 8, t3, 1, v17);
    t4 = operation_8c20b160(((ObjectData *)o)->f5c, 0.1f);
    call_8c3827d8(g_8c46fe00);
    sq_select_8c38aeb4(1);
    sq_header_8c38af22(0, -1);
    (&frame)->f14 = g_8c2e1734;
    (&frame)->f1c = g_8c2e1738;
    (&frame)->f10 = g_8c2e173c;
    (&frame)->f18 = g_8c2e1740;
    (&frame)->f04 = g_8c2e1690 * v1 + v6;
    (&frame)->f0c = (g_8c2e1690 + g_8c2e155c) * v1 + v6;
    sq_quad_8c38b09e((Frame *)((&frame)), t4);
    (&frame)->f10 = g_8c2e1744;
    (&frame)->f18 = g_8c2e1748;
    (&frame)->f04 = v7 - (g_8c2e1690 + g_8c2e155c) * v1;
    (&frame)->f0c = v7 - g_8c2e1690 * v1;
    sq_quad_8c38b09e((Frame *)((&frame)), t4);
    (&frame)->f10 = g_8c2e174c;
    (&frame)->f18 = g_8c2e1750;
    (&frame)->f14 = g_8c2e1754;
    (&frame)->f1c = g_8c2e1758;
    (&frame)->f04 = g_8c2e1728 * v1 + v6;
    (&frame)->f0c = v1 * (g_8c2e1728 + 14.0f) + v6;
    sq_quad_8c38b09e((Frame *)((&frame)), t4);
    (&frame)->f14 = g_8c2e175c;
    v18 = (float)(g_8c2e1728 * v1);
    (&frame)->f1c = g_8c2e1760;
    (&frame)->f04 = v7 - v1 * (g_8c2e1728 + 14.0f);
    (&frame)->f0c = v7 - v18;
    sq_quad_8c38b09e((Frame *)((&frame)), t4);
    v34 = (float)(g_8c2e172c * v1);
    v19 = (float)(v6 + v34);
    v20 = (float)(v7 - v34);
    (&frame)->f14 = g_8c2e1764;
    (&frame)->f1c = g_8c2e1768;
    if (!(((ObjectData *)o)->f70 < ((ObjectData *)o)->f6c)) {
        (&frame)->f0c = v20;
    } else {
        v21 = (float)((v20 - v19) * ((ObjectData *)o)->f68);
        v22 = (float)(v21 * ((ObjectData *)o)->f70);
        v23 = (float)v22;
        if (2.0f > v22) {
            v23 = (float)2.0f;
        }
        (&frame)->f04 = v21 * ((ObjectData *)o)->f74 + v19;
        (&frame)->f0c = (&frame)->f04 + v23;
    }
    sq_quad_8c38b09e((Frame *)((&frame)), t4);
    sq_flush_8c38af12();
}
