/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c012630
 * function: operation_8c012630
 * language: c
 * reference size: 480 bytes
 * compiled size: 476 bytes (-0.8%)
 * differing lines: 310 of 232 reference instruction lines
 * differing bytes: 423
 * provenance: generator draft (mode bgotoext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_0 Arg0_0;
typedef struct Arg0_35c Arg0_35c;
typedef struct Arg0_360 Arg0_360;
typedef struct Arg0_364 Arg0_364;
typedef struct Arg0_368 Arg0_368;
typedef struct S_vv1 S_vv1;
typedef struct S_vv2 S_vv2;
typedef struct S_vv20 S_vv20;
typedef struct S_vv22 S_vv22;
typedef struct S_vv24 S_vv24;
typedef struct S_vv29 S_vv29;
typedef struct S_vv46 S_vv46;
typedef struct S_vv59 S_vv59;
typedef struct S_vv64 S_vv64;
typedef struct S_vv7 S_vv7;
struct Object {
    char unknown0[0x35c];
    Arg0_35c *f35c;
    Arg0_360 *f360;
    Arg0_364 *f364;
    Arg0_368 *f368;
};
struct S_vv2 {
    char unknown0[0x368];
    int f368;
};
struct S_vv7 {
    char unknown0[0x364];
    int f364;
};
struct Arg0_368 {
    char unknown0[0x35c];
    Arg0_35c *f35c;
    S_vv7 *f360;
};
struct Arg0_35c {
    char unknown0[0x368];
    Arg0_364 *f368;
};
struct S_vv20 {
    char unknown0[0x35c];
    Arg0_35c *f35c;
};
struct Arg0_364 {
    char unknown0[0x360];
    Arg0_360 *f360;
};
struct S_vv1 {
    char unknown0[0x368];
    int f368;
};
struct S_vv24 {
    char unknown0[0x368];
    int f368;
};
struct S_vv29 {
    char unknown0[0x364];
    int f364;
};
struct Arg0_360 {
    char unknown0[0x364];
    Arg0_364 *f364;
};
struct S_vv22 {
    char unknown0[0x368];
    int f368;
};
struct S_vv46 {
    char unknown0[0x364];
    int f364;
};
struct S_vv59 {
    char unknown0[0x368];
    int f368;
};
struct S_vv64 {
    char unknown0[0x364];
    int f364;
};
void operation_8c012630(Object *o)
{
    S_vv1 *v1;
    S_vv2 *v2;
    int v3;
    int v4;
    int v5;
    S_vv7 *v7;
    S_vv20 *v20;
    int v21;
    S_vv22 *v22;
    int v23;
    S_vv24 *v24;
    int v25;
    int v26;
    int v27;
    S_vv29 *v29;
    int v42;
    int v43;
    int v44;
    S_vv46 *v46;
    S_vv59 *v59;
    int v60;
    int v61;
    int v62;
    S_vv64 *v64;
    v1 = (S_vv1 *)o->f35c;
    if (v1 != 0) {
        v2 = (S_vv2 *)o->f364;
        if (v2 != 0) {
            v3 = (int)o->f368;
            if (v3 != 0) {
                v4 = (int)v2->f368;
                if (v4 != 0) {
                    v7 = (S_vv7 *)v4;
                    goto L_8c01265a;
                    v5 = (int)0x368;
L_8c012658:;
                    v7 = (S_vv7 *)v5;
L_8c01265a:;
                    v5 = (int)v7->f364;
                    if (v7->f364 != 0) {
                        goto L_8c012658;
                    }
                    v7->f364 = (int)(v3);
                    o->f368->f35c = (Arg0_35c *)0;
                    o->f368->f360 = v7;
                } else {
                    v2->f368 = (int)(v3);
                    o->f368->f35c = (Arg0_35c *)o->f364;
                }
            }
            o->f35c->f368 = o->f364;
            v20 = (S_vv20 *)o->f364;
            v20->f35c = o->f35c;
            o->f364->f360 = (Arg0_360 *)0;
            goto L_8c0127ea;
        }
        v21 = (int)o->f368;
        if (v21 != 0) {
            v1->f368 = (int)(v21);
            o->f368->f35c = o->f35c;
            goto L_8c0127ea;
        }
        v1->f368 = 0;
    } else {
        v22 = (S_vv22 *)o->f360;
        if (v22 != 0) {
            v23 = (int)0x364;
            v24 = (S_vv24 *)*(Arg0_0 **)((char *)((char *)o + 0x0) + (v23));
            if (v24 != 0) {
                v25 = (int)o->f368;
                if (v25 != 0) {
                    v26 = (int)v24->f368;
                    if (v26 != 0) {
                        v29 = (S_vv29 *)v26;
                        goto L_8c0126f2;
                        v27 = (int)0x368;
L_8c0126f0:;
                        v29 = (S_vv29 *)v27;
L_8c0126f2:;
                        v27 = (int)*(int *)((char *)((char *)v29 + 0x0) + (v23));
                        if (*(int *)((char *)((char *)v29 + 0x0) + (v23)) != 0) {
                            goto L_8c0126f0;
                        }
                        v29->f364 = (int)(v25);
                        o->f368->f35c = (Arg0_35c *)0;
                        o->f368->f360 = (S_vv7 *)v29;
                    } else {
                        v24->f368 = (int)(v25);
                        o->f368->f35c = (Arg0_35c *)*(int *)((char *)((char *)o + 0x0) + (v23));
                    }
                }
                o->f360->f364 = o->f364;
                o->f364->f360 = o->f360;
                goto L_8c0127ea;
            }
            v42 = (int)o->f368;
            if (v42 != 0) {
                v43 = (int)v22->f368;
                if (v43 != 0) {
                    v46 = (S_vv46 *)v43;
                    goto L_8c01274a;
                    v44 = (int)0x368;
L_8c012748:;
                    v46 = (S_vv46 *)v44;
L_8c01274a:;
                    v44 = (int)*(int *)((char *)((char *)v46 + 0x0) + (v23));
                    if (*(int *)((char *)((char *)v46 + 0x0) + (v23)) != 0) {
                        goto L_8c012748;
                    }
                    v46->f364 = (int)(v42);
                    o->f368->f35c = (Arg0_35c *)0;
                    o->f368->f360 = (S_vv7 *)v46;
                } else {
                    v22->f368 = (int)(v42);
                    o->f368->f35c = (Arg0_35c *)o->f360;
                }
            }
            o->f360->f364 = (Arg0_364 *)0;
        } else {
            v59 = (S_vv59 *)o->f364;
            if (v59 != 0) {
                v60 = (int)o->f368;
                if (v60 != 0) {
                    v61 = (int)v59->f368;
                    if (v61 != 0) {
                        v64 = (S_vv64 *)v61;
                        goto L_8c0127a2;
                        v62 = (int)0x368;
L_8c0127a0:;
                        v64 = (S_vv64 *)v62;
L_8c0127a2:;
                        v62 = (int)v64->f364;
                        if (v64->f364 != 0) {
                            goto L_8c0127a0;
                        }
                        v64->f364 = (int)(v60);
                        o->f368->f35c = (Arg0_35c *)0;
                        o->f368->f360 = (S_vv7 *)v64;
                    } else {
                        v59->f368 = (int)(v60);
                        o->f368->f35c = (Arg0_35c *)o->f364;
                    }
                }
                o->f364->f360 = (Arg0_360 *)0;
            } else {
                if (o->f368 != 0) {
                    o->f368->f35c = (Arg0_35c *)0;
                }
            }
        }
    }
L_8c0127ea:;
    o->f35c = (Arg0_35c *)0;
    o->f360 = (Arg0_360 *)0;
    o->f364 = (Arg0_364 *)0;
    o->f368 = (Arg0_368 *)0;
}
