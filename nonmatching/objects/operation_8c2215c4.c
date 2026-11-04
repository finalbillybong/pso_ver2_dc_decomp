/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c2215c4
 * function: operation_8c2215c4
 * language: c
 * reference size: 540 bytes
 * compiled size: 540 bytes (+0.0%)
 * differing lines: 260 of 237 reference instruction lines
 * differing bytes: 124
 * provenance: generator draft (mode ccastext; address casts converted to prototypes)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
    int f24;
    int f28;
    float f2c;
    float f30;
    char unknown34[0x60];
    int f94;
    float f98;
    float f9c;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern int heap_alloc_8c122700(void *, int);
extern void operation_8c221978(int, Object *);
void operation_8c2215c4(Object *o)
{
    float v1;
    int v4;
    float v5;
    float v16;
    int v6;
    float v7;
    int v9;
    float v10;
    float v17;
    int v11;
    float v12;
    int v14;
    float v15;
    int t1;
    switch (o->f20) {
    case 0:
        v1 = (float)o->f2c;
        if ((1.0f - 1.0f / o->f98) > v1) {
            o->f2c = v1 + 1.0f / o->f98;
            o->f30 = o->f2c * 4.0f;
            if (!(o->f30 > 1.0f)) {
                return;
            }
            o->f30 = 1.0f;
            return;
        }
        o->f2c = 1.0f;
        o->f30 = 1.0f;
        t1 = heap_alloc_8c122700(g_8c4d97e0, 0xf8);
        if (t1 != 0) {
            operation_8c221978(t1, o);
        }
        o->f20 = 1;
        return;
    case 1:
        v4 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v4);
        if (!(v4 > (o->f94 * 3))) {
            return;
        }
        o->f20 = 2;
        return;
    case 2:
        v5 = (float)o->f2c;
        if (v5 > (1.0f / o->f9c)) {
            v16 = (float)(v5 - 1.0f / o->f9c);
            o->f2c = v16;
            v5 = (float)v16;
        } else {
            o->f2c = 0.0f;
            v5 = (float)0.0f;
        }
        v6 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v6);
        if (!(v6 > (o->f94 * 0xb))) {
            return;
        }
        o->f20 = 3;
        return;
    case 3:
        v7 = (float)o->f2c;
        if ((1.0f - 1.0f / o->f98) > v7) {
            o->f2c = v7 + 1.0f / o->f98;
        } else {
            o->f2c = 1.0f;
        }
        v9 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v9);
        if (!(v9 > (o->f94 * 0xe))) {
            return;
        }
        o->f20 = 4;
        return;
    case 4:
        v10 = (float)o->f2c;
        if (v10 > (1.0f / o->f9c)) {
            v17 = (float)(v10 - 1.0f / o->f9c);
            o->f2c = v17;
            v10 = (float)v17;
        } else {
            o->f2c = 0.0f;
            v10 = (float)0.0f;
        }
        v11 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v11);
        if (!(v11 > (o->f94 * 0x16))) {
            return;
        }
        o->f20 = 5;
        if (!(++o->f28 > 5)) {
            return;
        }
        o->f2c = 0.0f;
        o->f28 = 5;
        o->f20 = 6;
        return;
    case 5:
        v12 = (float)o->f2c;
        if ((1.0f - 1.0f / o->f98) > v12) {
            o->f2c = v12 + 1.0f / o->f98;
        } else {
            o->f2c = 1.0f;
        }
        v14 = (int)((int)o->f24 + 1);
        o->f24 = (int)(v14);
        if (!(v14 > (o->f94 * 0x18))) {
            return;
        }
        o->f24 = 0;
        o->f2c = 1.0f;
        o->f20 = 1;
        return;
    case 7:
        v15 = (float)o->f2c;
        if (v15 > (1.0f / o->f9c)) {
            o->f2c = v15 - 1.0f / o->f9c;
            return;
        }
        o->f2c = 0.0f;
        return;
    case 6:
        break;
    }
}
