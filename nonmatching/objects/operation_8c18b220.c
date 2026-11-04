/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c18b220
 * function: operation_8c18b220
 * language: c
 * reference size: 240 bytes
 * compiled size: 280 bytes (+16.7%)
 * differing lines: 100 of 104 reference instruction lines
 * differing bytes: 202
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by +40 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc80 S_g8c4dbc80;
typedef struct S_g8c4dc5a4 S_g8c4dc5a4;
typedef struct Object Object;
struct S_g8c4dbc80 {
    char unknown0[0x18];
    int f18;
    int f1c;
};
struct Object {
    char unknown0[0x1];
    unsigned char f01;
    char unknown2[0x1];
    unsigned char f03;
};
extern S_g8c4dbc80 *g_8c4dbc80;
extern int g_8c4dc5a0;
extern S_g8c4dc5a4 *g_8c4dc5a4;
extern int operation_8c18b894(void *);
extern int rand(void);
extern int operation_8c1c9378(Object *);
void operation_8c18b220(Object *o)
{
    int v3;
    int v4;
    char *v1;
    char *v2;
    int v5;
    int v7;
    int v8;
    int v9;
    int t1;
    int t2;
    int t3;
    int t4;
    v1 = (char *)g_8c4dbc80->f18;
    v2 = (char *)g_8c4dbc80->f1c;
    t1 = operation_8c18b894(g_8c4dc5a4);
    v3 = (int)-1;
    if (t1 != v3) {
        v4 = (int)*(int *)((char *)0x8c31cec0 + (g_8c4dc5a0 << 2));
        if (v4 != -1 && o->f01 == v4) {
            t2 = rand();
            v5 = (int)(t1 << 3);
            v9 = (int)(int)((float)(*(int *)((char *)((char *)v2 + 0x4) + (v5)) + 1) * ((float)t2 / 32768.0f));
            if (!(*(int *)((char *)((char *)v2 + 0x0) + (v5)) > (unsigned char)(int)((float)(*(int *)((char *)((char *)v2 + 0x4) + (v5)) + 1) * ((float)t2 / 32768.0f)))) {
                goto L_8c18b2ca;
            }
            v9 = (int)*(int *)((char *)((char *)v2 + 0x0) + (v5));
            goto L_8c18b2ca;
        }
        t3 = rand();
        v7 = (int)(t1 << 3);
        v8 = (int)*(int *)((char *)((char *)v1 + 0x0) + (v7));
        v9 = (int)(int)((float)(*(int *)((char *)((char *)v1 + 0x4) + (v7)) + 1) * ((float)t3 / 32768.0f));
        if (v8 > (unsigned char)(int)((float)(*(int *)((char *)((char *)v1 + 0x4) + (v7)) + 1) * ((float)t3 / 32768.0f))) {
            v9 = (int)v8;
        }
L_8c18b2ca:;
        o->f03 = v9;
    }
    t4 = operation_8c1c9378(o);
    if ((unsigned int)o->f03 > (unsigned int)(unsigned char)t4) {
        o->f03 = t4;
    }
}
