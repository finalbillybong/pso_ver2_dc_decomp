/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c11cfb8
 * function: operation_8c11cfb8
 * language: c++
 * reference size: 536 bytes
 * compiled size: 536 bytes (+0.0%)
 * differing lines: 26 of 231 reference instruction lines
 * differing bytes: 9
 * provenance: hand pass on a generator draft
 * known gaps: hand-revised from a generator draft; remaining differences not classified; not
 *   proven equivalent to the original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_400 Arg0_400;
typedef struct Arg0_404 Arg0_404;
typedef struct S_vv1 S_vv1;
typedef struct S_vv15 S_vv15;
typedef struct S_vv19 S_vv19;
typedef struct S_x73488 S_x73488;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x32a];
    short f330;
    char unknown332[0x5e];
    int f390;
    char unknown394[0x10];
    int f3a4;
    char unknown3a8[0x58];
    Arg0_400 *f400;
    Arg0_404 *f404;
};
struct Arg0_400 {
    char unknown0[0x330];
    short f330;
    char unknown332[0x62];
    int f394;
};
struct Arg0_404 {
    char unknown0[0x330];
    short f330;
    char unknown332[0x62];
    int f394;
};
struct S_vv1 {
    char unknown0[0x394];
    int f394;
};
struct S_vv15 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    int f394;
    char unknown398[0x38];
    int f3d0;
};
struct S_vv19 {
    char unknown0[0x34];
    int f34;
    char unknown38[0x35c];
    int f394;
    char unknown398[0x38];
    int f3d0;
};
struct Frame {
    Vector3 f00;
};
struct S_x73488 {
    Vector3 f00;
};
struct PmfObj {
    int unknown0;
};
typedef void (PmfObj::*PMF_0)();
extern "C" char g_8c310bd8[];
extern "C" void operation_8c09e6d0(void *);
extern "C" void operation_8c11b610(Object *);
extern "C" void operation_8c15e8c0(int);
extern "C" void operation_8c11afa0(int, int);
extern "C" int call_8c18e6fc(Frame *);
extern "C" void operation_8c15e8e4(int);
extern "C" void operation_8c11cfb8(Object *o)
{
    Frame frame;
    S_vv1 *v1;
    int v2;
    int v3;
    int v6;
    int v7;
    int v8;
    int v9;
    int v69;
    int v10;
    int v11;
    S_vv15 *v15;
    int v18;
    S_vv19 *v19;
    int v22;
    int v23;
    int v24;
    int t1;
    o->f330 = o->f400->f330 + o->f404->f330;
    v1 = (S_vv1 *)o->f400;
    v2 = (int)(v1->f394 == 8);
    if (v2 != 0) {
        v3 = (int)(o->f404->f394 == 8);
        if (v3 != 0) {
            operation_8c09e6d0((void *)o);
            o->f04 |= 1;
            return;
        }
    }
    v7 = 1;
    if (v1->f394 != 7 && v1->f394 != 8) {
        v7 = 0;
    }
    if (v7 != 0) {
        return;
    }
    v9 = 1;
    if (o->f404->f394 != 7 && o->f404->f394 != 8) {
        v9 = 0;
    }
    if (v9 != 0) {
        return;
    }
    *(int *)((char *)o + 0x3a4) -= 1;
    v69 = (int)o->f3a4;
    if (v69 == 0) {
        v10 = (int)(o->f400->f394 == 0xb);
        if (v10 == 0) {
            v11 = (int)(o->f404->f394 == 0xb);
            if (v11 == 0) {
                goto L_8c11d092;
            }
        }
        o->f3a4 = (int)((float)o->f3a4 + 15.0f);
        return;
L_8c11d092:;
        operation_8c11b610(o);
        operation_8c15e8c0((int)(o->f400));
        operation_8c15e8c0((int)(o->f404));
        return;
    }
    if (!(v69 >= 0)) {
        v15 = (S_vv15 *)o->f400;
        v18 = (int)0;
        if (v15->f394 == 4 && !(v15->f3d0 >= 0)) {
            v18 = (int)1;
        }
        if (v18 != 0) {
            v19 = (S_vv19 *)o->f404;
            v22 = (int)0;
            if (v19->f394 == 4 && !(v19->f3d0 >= 0)) {
                v22 = (int)1;
            }
            if (v22 != 0) {
                v23 = (int)(((v15->f34 & 0x10)) != 0);
                if (v23 == 0) {
                    v24 = (int)(((v19->f34 & 0x10)) != 0);
                    if (v24 == 0) {
                        goto L_8c11d110;
                    }
                }
                o->f3a4 = -1;
                return;
L_8c11d110:;
                o->f390 = 0xb;
                if (!(o->f390 >= 0)) {
                    return;
                }
                if (o->f390 >= 0xe) {
                    return;
                }
                operation_8c11afa0((int)o, v22);
                *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&((S_x73488 *)(o->f390 * 0x18 + g_8c310bd8))->f00;
                t1 = call_8c18e6fc((Frame *)((&frame)));
                if (t1 == 0) {
                    return;
                }
                (((PmfObj *)(o))->*(*(PMF_0 *)((&frame))))();
                return;
            }
        }
        if (-0x12c > o->f3a4) {
            operation_8c15e8e4((int)v15);
            operation_8c15e8e4((int)(o->f404));
            o->f3a4 = 0x384;
        }
    }
}
