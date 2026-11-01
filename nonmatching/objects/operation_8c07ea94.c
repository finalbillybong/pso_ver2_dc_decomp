/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c07ea94
 * function: operation_8c07ea94
 * language: c
 * reference size: 1208 bytes
 * compiled size: 1208 bytes (+0.0%)
 * differing lines: 18 of 484 reference instruction lines
 * differing bytes: 162
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
typedef struct Object Object;
typedef struct Arg0_13c Arg0_13c;
typedef struct S_vv2 S_vv2;
struct Object {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xa8];
    short f1e8;
    short f1ea;
    short f1ec;
    short f1ee;
};
struct S_vv2 {
    char unknown0[0x814];
    char f814;
};
extern int operation_8c07ef4c(Object *);
extern int call_8c18e768(int, int);
extern int call_8c16337c(S_vv2 *, int);
extern void call_8c07fd18(Object *, int);
void operation_8c07ea94(Object *o)
{
    int t4;
    int t3;
    int t1;
    int t5;
    char v1;
    int t2;
    S_vv2 *v2;
    int t6;
    int t7;
    int t8;
    if (o->f13c == 0) {
        return;
    }
    t2 = operation_8c07ef4c(o);
    v2 = (S_vv2 *)o->f13c;
    v1 = (char)v2->f814;
    t5 = call_8c18e768((int)(o->f1ea), 0x64);
    t3 = call_8c18e768((int)(o->f1ec), 0x64);
    t4 = call_8c18e768((int)(o->f1ee), 0x64);
    t8 = call_8c18e768((int)(o->f1e8), 0x64);
    t1 = call_8c16337c(v2, 0xf9);
    if (t1 == 0) {
    } else {
        if (((t2 & 0x108)) != 0) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t4 <= (short)t3) {
                    call_8c07fd18(o, 5);
                } else {
                    call_8c07fd18(o, 0xc);
                }
                return;
            }
            if ((short)t4 <= (short)t3) {
                call_8c07fd18(o, 6);
            } else {
                call_8c07fd18(o, 8);
            }
            return;
        }
        if (((t2 & 0x10)) != 0) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t5 <= (short)t4) {
                    call_8c07fd18(o, 0x13);
                } else {
                    call_8c07fd18(o, 0x17);
                }
                return;
            }
            if ((short)t5 <= (short)t4) {
                call_8c07fd18(o, 0x10);
            } else {
                call_8c07fd18(o, 0x12);
            }
            return;
        }
        if (((t2 & 0x20)) == 0) {
            return;
        }
        if ((((char)v1 & 1)) == 0) {
            if ((short)t3 <= (short)t5) {
                call_8c07fd18(o, 0x1e);
            } else {
                call_8c07fd18(o, 7);
            }
            return;
        }
        if ((short)t3 <= (short)t5) {
            call_8c07fd18(o, 0x24);
        } else {
            call_8c07fd18(o, 0x16);
        }
        return;
    }
    t6 = call_8c16337c((S_vv2 *)(o->f13c), 0xfa);
    if (t6 == 0) {
    } else {
        if (((t2 & 0x110)) != 0) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t5 <= (short)t4) {
                    call_8c07fd18(o, 6);
                } else {
                    call_8c07fd18(o, 0xc);
                }
                return;
            }
            if ((short)t5 <= (short)t4) {
                call_8c07fd18(o, 5);
            } else {
                call_8c07fd18(o, 0xa);
            }
            return;
        }
        if (((t2 & 8)) != 0) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t4 <= (short)t3) {
                    call_8c07fd18(o, 6);
                } else {
                    call_8c07fd18(o, 0xc);
                }
                return;
            }
            if ((short)t4 <= (short)t3) {
                call_8c07fd18(o, 0x26);
            } else {
                call_8c07fd18(o, 0xa);
            }
            return;
        }
        if (((t2 & 0x20)) == 0) {
            return;
        }
        if ((((char)v1 & 1)) == 0) {
            if ((short)t3 <= (short)t5) {
                call_8c07fd18(o, 5);
            } else {
                call_8c07fd18(o, 8);
            }
            return;
        }
        if ((short)t3 <= (short)t5) {
            call_8c07fd18(o, 0x1e);
        } else {
            call_8c07fd18(o, 0x18);
        }
        return;
    }
    t7 = call_8c16337c((S_vv2 *)(o->f13c), 0xfc);
    if (t7 == 0) {
        return;
    }
    if (((t2 & 0x120)) != 0) {
        if (0x2c >= (short)t8) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t3 <= (short)t5) {
                    call_8c07fd18(o, 0x1c);
                } else {
                    call_8c07fd18(o, 0x1e);
                }
                return;
            }
            if ((short)t3 <= (short)t5) {
                call_8c07fd18(o, 9);
            } else {
                call_8c07fd18(o, 0x17);
            }
            return;
        }
        call_8c07fd18(o, 0x24);
        return;
    }
    if (((t2 & 8)) != 0) {
        if (0x2c >= (short)t8) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t4 <= (short)t3) {
                    call_8c07fd18(o, 0x25);
                } else {
                    call_8c07fd18(o, 0x1f);
                }
                return;
            }
            if ((short)t4 <= (short)t3) {
                call_8c07fd18(o, 0x20);
            } else {
                call_8c07fd18(o, 0x1c);
            }
            return;
        }
        call_8c07fd18(o, 0x23);
        return;
    }
    if (((t2 & 0x10)) != 0) {
        if (0x2c >= (short)t8) {
            if ((((char)v1 & 1)) == 0) {
                if ((short)t5 <= (short)t4) {
                    call_8c07fd18(o, 0x11);
                } else {
                    call_8c07fd18(o, 0x15);
                }
                return;
            }
            if ((short)t5 <= (short)t4) {
                call_8c07fd18(o, 0xc);
            } else {
                call_8c07fd18(o, 0x12);
            }
            return;
        }
        call_8c07fd18(o, 0x24);
    }
}
