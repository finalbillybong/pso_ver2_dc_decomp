/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0ee670
 * function: TFontSmallTask_render_8c0ee670
 * language: c
 * reference size: 512 bytes
 * compiled size: 504 bytes (-1.6%)
 * differing lines: 196 of 204 reference instruction lines
 * differing bytes: 438
 * provenance: generator draft (mode extern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -8 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c467184 S_g8c467184;
typedef struct Object Object;
typedef struct S_vv9 S_vv9;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    float f28;
    char unknown2c[0x10];
    int f3c;
    int f40;
    int f44;
    char unknown48[0x4];
    int f4c;
};
struct Frame {
    float f00;
    float f04;
    float f08;
    char unknownc[0x4];
    float f10;
    char unknown14[0x10];
};
struct S_vv9 {
    char f00;
};
extern S_g8c467184 *g_8c467184;
extern float g_8c4e2bb8;
extern char g_8c46efd4[];
extern void restore_child_blend(void);
extern void reset_state_8c391c94(void);
extern void sq_select_8c38aeb4(int);
extern void call_8c3827d8(void *);
extern void sq_header_8c38af22(int, int);
extern void call_8c087120(char, void *);
extern void sq_quad_8c38b09e(void *, float);
extern int operation_8c087248(char);
extern void sq_flush_8c38af12(void);
extern void reset_state_8c391cc4(void);
void TFontSmallTask_render_8c0ee670(Object *o)
{
    Frame frame;
    float v1;
    float v3;
    float v5;
    float v2;
    char v12;
    float v10;
    int v16;
    float v21;
    float v6;
    float v11;
    float v4;
    S_vv9 *v9;
    float v25;
    int t1;
    if (o->f4c == 0) {
        return;
    }
    (&frame)->f00 = -1.0f;
    v1 = (float)o->f20;
    v2 = (float)(v1 + *(float *)(g_8c46efd4 + 0xc));
    v3 = (float)o->f24;
    v4 = (float)(v3 + *(float *)(g_8c46efd4 + 0x10));
    v5 = (float)(float)o->f40;
    (&frame)->f00 = (&frame)->f00 / (g_8c4e2bb8 + 0.1495f);
    if (v5 > ((float)o->f44 - 8.0f)) {
        v6 = (float)(((float)o->f44 - v5) * 0.125f);
    } else {
        v6 = (float)1.0f;
    }
    restore_child_blend();
    reset_state_8c391c94();
    sq_select_8c38aeb4(1);
    call_8c3827d8(g_8c467184);
    v9 = (S_vv9 *)((char *)o + 0x2c);
    v10 = (float)v5;
    v11 = (float)v2;
    while (v9->f00 != 0) {
        v12 = (char)v9->f00;
        v9 = (S_vv9 *)((char *)v9 + 1);
        if (v10 > 0.0f) {
            if (2.0f > v10) {
                if ((v10 * 255.0f * 0.5f) > 2147483648.0f) {
                }
                v16 = (int)(unsigned int)(v10 * 255.0f * 0.5f);
            } else {
                v16 = (int)0xff;
            }
            v21 = (float)(float)(unsigned int)v16;
            sq_header_8c38af22(0, (int)((unsigned int)(v21 * v6) << 0x18 | o->f3c));
            (&frame)->f04 = v11;
            (&frame)->f08 = v4;
            call_8c087120(v12, (void *)(&(&frame)->f04));
            (&frame)->f10 = ((&frame)->f10 - v4) * 1.4f + v4;
            sq_quad_8c38b09e((void *)(&(&frame)->f04), (&frame)->f00);
            t1 = operation_8c087248(v12);
            v1 = (float)(v11 + (float)(unsigned char)t1 * 1.4f);
            v25 = (float)(v10 - (float)(unsigned char)t1 / o->f28 * 5.5f);
            v10 = (float)v25;
            v11 = (float)v1;
        }
    }
    sq_flush_8c38af12();
    reset_state_8c391cc4();
}
