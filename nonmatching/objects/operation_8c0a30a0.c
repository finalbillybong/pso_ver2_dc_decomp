/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c0a30a0
 * function: operation_8c0a30a0
 * language: c
 * reference size: 420 bytes
 * compiled size: 420 bytes (+0.0%)
 * differing lines: 46 of 178 reference instruction lines
 * differing bytes: 115
 * provenance: generator draft (mode switch2ext)
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
typedef struct S_L8c41cba0 S_L8c41cba0;
typedef struct Object Object;
struct S_L8c41cba0 {
    char unknown0[0xa0];
    int fa0;
};
struct Object {
    char unknown0[0x50];
    int f50;
};
extern S_L8c41cba0 g_8c41cba0;
extern char g_8c3033b8[];
extern char g_8c303458[];
extern int operation_8c01e148(int);
extern int operation_8c01e0e4(int);
extern void call_8c1ae788(void *, void *, int, int, int);
extern void call_8c1ae53c(void *, void *, int, int, int);
void operation_8c0a30a0(Object *o)
{
    int t1;
    int t2;
    int t3;
    int t4;
    if ((((&g_8c41cba0)->fa0 & 0x20000)) == 0) {
        t1 = operation_8c01e148(0x51);
        if (t1 == 0) {
            goto L_8c0a30d4;
        }
    }
    t2 = operation_8c01e0e4(2);
    if (t2 == 0) {
        o->f50 += 1;
    }
L_8c0a30d4:;
    if ((((&g_8c41cba0)->fa0 & 0x10000)) == 0) {
        t3 = operation_8c01e148(0x52);
        if (t3 == 0) {
            goto L_8c0a3102;
        }
    }
    t4 = operation_8c01e0e4(2);
    if (t4 == 0) {
        o->f50 -= 1;
    }
L_8c0a3102:;
    if (!(o->f50 >= 0)) {
        o->f50 = 6;
    }
    if (o->f50 >= 7) {
        o->f50 = 0;
    }
    call_8c1ae788((void *)(((char *)o + 0x88)), (void *)((void *)g_8c3033b8), (int)(-(int)(o->f50)), 4, 2);
    call_8c1ae788((void *)(((char *)o + 0x8c)), (void *)((g_8c3033b8 + 0x28)), (int)(1 - (int)o->f50), 4, 2);
    call_8c1ae788((void *)(((char *)o + 0x9c)), (void *)((g_8c3033b8 + 0x50)), (int)(2 - (int)o->f50), 4, 2);
    call_8c1ae788((void *)(((char *)o + 0x90)), (void *)((g_8c3033b8 + 0x78)), (int)(3 - (int)o->f50), 4, 2);
    call_8c1ae53c((void *)(((char *)o + 0x94)), (void *)((void *)g_8c303458), (int)(4 - (int)o->f50), 4, 2);
    call_8c1ae53c((void *)(((char *)o + 0x98)), (void *)((g_8c303458 + 0x2c)), (int)(5 - (int)o->f50), 4, 2);
    call_8c1ae53c((void *)(((char *)o + 0xa0)), (void *)((g_8c303458 + 0x58)), (int)(6 - (int)o->f50), 4, 2);
}
