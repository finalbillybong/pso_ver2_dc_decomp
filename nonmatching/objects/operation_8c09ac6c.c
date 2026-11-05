/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c09ac6c
 * function: operation_8c09ac6c
 * language: c
 * reference size: 352 bytes
 * compiled size: 348 bytes (-1.1%)
 * differing lines: 152 of 173 reference instruction lines
 * differing bytes: 252
 * provenance: generator draft (mode uctern)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * runtime: equal on offline start: new character to Pioneer 2 (emulator A/B: RAM, trace and
 *   first-16-call I/O); not proof
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct S_vv12 S_vv12;
struct Object {
    char unknown0[0x18];
    int dispatch;
    char unknown1c[0x10];
    int f2c;
    char unknown30[0x3];
    char f33;
};
struct S_vv12 {
    char unknown0[0x18];
    int f18;
    char unknown1c[0x10];
    int f2c;
};
int operation_8c09ac6c(Object *o)
{
    int v3;
    int v4;
    int v7;
    int v8;
    int v5;
    int v14;
    int v16;
    int v11;
    S_vv12 *v12;
    int v20;
    int v21;
    int v24;
    int v25;
    int v22;
    int v28;
    int v29;
    int v31;
    if (o->f33 < 0 || o->f33 == 1 || o->f33 > 0x20) {
        return -0x64;
    }
    if (o->f33 != 0) {
        if (o->f33 == 2) {
            goto L_8c09acaa;
        }
        v16 = (int)o->f33;
        v11 = (int)0x20;
        v12 = (S_vv12 *)o;
    } else {
        if (o->dispatch == 0) {
            return -0x63;
        }
        return (o->dispatch != -1) ? -0x62 : 0;
L_8c09acaa:;
        if (2 > o->f33 || o->f33 > 0x20) {
            v14 = (int)0;
            v11 = (int)0x20;
            v12 = (S_vv12 *)o;
            goto L_8c09ad2a;
        }
        v3 = (int)o->dispatch;
        v4 = (int)o->f2c;
        if ((v3 & -0x1000000) != -0x1000000) {
            v5 = (int)0;
            v11 = (int)0x20;
            v12 = (S_vv12 *)o;
        } else {
            if (v4 == 0) {
                v5 = (int)0;
                v7 = (int)0x20;
                v8 = (int)o;
            } else {
                if (((unsigned char)(char)((unsigned int)(unsigned int)v4 >> 8 >> 0x10) << 0x18 | (((unsigned char)v4 << 8 | (unsigned char)(char)((unsigned int)(unsigned int)v4 >> 8 >> 0x10)) ^ ((v3 >> 1 >> 1 >> 1 & 0x1f) << 0xa | ((short)((unsigned int)v3 >> 0x10) >> 1 >> 1 >> 1 & 0x1f) << 5 | v3 >> 0xb & 0x1f)) << 8 | (unsigned char)v4) != v4) {
                    v5 = (int)0;
                } else {
                    v5 = (int)1;
                }
                v7 = (int)(unsigned char)v4;
                v8 = (int)((unsigned char)(char)((unsigned int)(unsigned int)v4 >> 8 >> 0x10) << 0x18 | (((unsigned char)v4 << 8 | (unsigned char)(char)((unsigned int)(unsigned int)v4 >> 8 >> 0x10)) ^ ((v3 >> 1 >> 1 >> 1 & 0x1f) << 0xa | ((short)((unsigned int)v3 >> 0x10) >> 1 >> 1 >> 1 & 0x1f) << 5 | v3 >> 0xb & 0x1f)) << 8 | (unsigned char)v4);
            }
            v11 = (int)v7;
            v12 = (S_vv12 *)v8;
        }
        v14 = (int)v5;
L_8c09ad2a:;
        return (v14 != 0) ? 1 : -0x61;
    }
    if (2 > v16 || v16 > v11) {
        v31 = (int)0;
        goto L_8c09adb8;
    }
    v20 = (int)v12->f18;
    v21 = (int)v12->f2c;
    if ((v20 & -0x1000000) != -0x1000000) {
        v22 = (int)0;
        v28 = (int)v11;
        v29 = (int)v12;
    } else {
        if (v21 == 0) {
            v22 = (int)0;
            v24 = (int)v11;
            v25 = (int)v12;
        } else {
            if (((unsigned char)(char)((unsigned int)(unsigned int)v21 >> 8 >> 0x10) << 0x18 | (((unsigned char)v21 << 8 | (unsigned char)(char)((unsigned int)(unsigned int)v21 >> 8 >> 0x10)) ^ ((v20 >> 1 >> 1 >> 1 & 0x1f) << 0xa | ((short)((unsigned int)v20 >> 0x10) >> 1 >> 1 >> 1 & 0x1f) << 5 | v20 >> 0xb & 0x1f)) << 8 | (unsigned char)v21) != v21) {
                v22 = (int)0;
            } else {
                v22 = (int)1;
            }
            v24 = (int)(unsigned char)v21;
            v25 = (int)((unsigned char)(char)((unsigned int)(unsigned int)v21 >> 8 >> 0x10) << 0x18 | (((unsigned char)v21 << 8 | (unsigned char)(char)((unsigned int)(unsigned int)v21 >> 8 >> 0x10)) ^ ((v20 >> 1 >> 1 >> 1 & 0x1f) << 0xa | ((short)((unsigned int)v20 >> 0x10) >> 1 >> 1 >> 1 & 0x1f) << 5 | v20 >> 0xb & 0x1f)) << 8 | (unsigned char)v21);
        }
        v28 = (int)v24;
        v29 = (int)v25;
    }
    v31 = (int)v22;
    v11 = (int)v28;
    v12 = (S_vv12 *)v29;
L_8c09adb8:;
    return (v31 != 0) ? 1 : -0x64;
}
