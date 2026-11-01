/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c125128
 * function: operation_8c125128
 * language: c++
 * reference size: 1012 bytes
 * compiled size: 1016 bytes (+0.4%)
 * differing lines: 36 of 377 reference instruction lines
 * differing bytes: 353
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; remaining differences not classified; review
 *   found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original; compiled size differs from the reference by +4 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class Object;
class Object {
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
    virtual int v20(int);
};
typedef struct ObjectData {
    char unknown0[0x30a];
    short f30a;
    char unknown30c[0x28];
    int f334;
    char unknown338[0x58];
    int f390;
    char unknown394[0x8];
    int f39c;
    char unknown3a0[0x4];
    int f3a4;
    int f3a8;
    char unknown3ac[0x44];
    int f3f0;
    char unknown3f4[0x2];
    short f3f6;
} ObjectData;
extern "C" void call_8c0c3128(Object *, float);
extern "C" void update_actor_distance_request(void *);
extern "C" float distance_xz(void *, void *);
extern "C" void operation_8c125128(Object *o)
{
    int v5;
    int v6;
    int v7;
    short r7;
    int v14;
    short r14;
    int v20;
    int v26;
    int v54;
    short r54;
    int v55;
    int v60;
    short r60;
    float t2;
    if (((ObjectData *)o)->f30a != 0 && ((ObjectData *)o)->f30a != 8) {
        ((ObjectData *)o)->f3f0 += 1;
    }
    v5 = (int)((ObjectData *)o)->f3a4;
    v6 = (int)(((v5 & 0x1000000)) != 0);
    if (v6 != 0) {
        r7 = ((ObjectData *)o)->f30a;
        v7 = r7;
        switch (v7) {
        case 0:
        case 1:
            if (((ObjectData *)o)->f3f0 > 0x708 || ((ObjectData *)o)->f3f6 >= 2) {
                if (((v5 & 1)) == 0 && v7 != 0xb) {
                    ((ObjectData *)o)->f39c = r7;
                    ((ObjectData *)o)->f390 = 0xb;
                }
                return;
            }
        }
        if (o->v20(0x1e) != 0) {
            call_8c0c3128(o, 250.0f);
        }
        r14 = ((ObjectData *)o)->f30a;
        v14 = r14;
        switch (v14) {
        case 0:
        case 8:
            if (((ObjectData *)o)->f334 != 0) {
                if (((((ObjectData *)o)->f3a4 & 1)) == 0 && v14 != 1) {
                    ((ObjectData *)o)->f39c = r14;
                    ((ObjectData *)o)->f390 = 1;
                }
                ((ObjectData *)o)->f3a8 = 2;
                return;
            }
            update_actor_distance_request((void *)o);
            return;
        case 1:
            if (((ObjectData *)o)->f334 != 0) {
                t2 = distance_xz((void *)((int)((ObjectData *)o)->f334 + 0x3c), (void *)(((char *)o + 0x3c)));
                v20 = ((ObjectData *)o)->f3a8;
                switch (v20) {
                case 0:
                    if (t2 > 3600.0f) {
                        ((ObjectData *)o)->f3a8 = 1;
                    }
                    break;
                case 1:
                    if (1600.0f > t2) {
                        ((ObjectData *)o)->f3a8 = 0;
                    } else if (t2 > 14400.0f) {
                        ((ObjectData *)o)->f3a8 = 2;
                    }
                    break;
                case 2:
                    if (10000.0f > t2) {
                        ((ObjectData *)o)->f3a8 = 1;
                    }
                    break;
                }
                if (v20 == ((ObjectData *)o)->f3a8) {
                    return;
                }
                switch (((ObjectData *)o)->f3a8) {
                case 0:
                    if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
                        return;
                    }
                    v26 = (int)((ObjectData *)o)->f30a;
                    if (v26 == 9) {
                        return;
                    }
                    ((ObjectData *)o)->f39c = v26;
                    ((ObjectData *)o)->f390 = 9;
                    return;
                case 1:
                    ((ObjectData *)o)->f3a4 &= -0x10001;
                    return;
                case 2:
                    ((ObjectData *)o)->f3a4 |= 0x10000;
                    return;
                }
            } else {
                if (((((ObjectData *)o)->f3a4 & 1)) != 0 || v14 == 8) {
                    return;
                }
                ((ObjectData *)o)->f39c = r14;
                ((ObjectData *)o)->f390 = 8;
                return;
            }
        }
        return;
    }
    if (o->v20(0x1e) != 0 && ((ObjectData *)o)->f30a != 2) {
        call_8c0c3128(o, 250.0f);
    }
    r54 = ((ObjectData *)o)->f30a;
    v54 = r54;
    switch (v54) {
    case 0:
        if (o->v20(0x1e) != 0 && ((ObjectData *)o)->f334 == 0) {
            if (((((ObjectData *)o)->f3a4 & 1)) == 0) {
                v55 = (int)((ObjectData *)o)->f30a;
                if (v55 != 0xa) {
                    ((ObjectData *)o)->f39c = v55;
                    ((ObjectData *)o)->f390 = 0xa;
                }
            }
            return;
        }
        break;
    case 1:
    case 12:
        if (((ObjectData *)o)->f3f0 > 0x708) {
            if (((((ObjectData *)o)->f3a4 & 1)) == 0 && v54 != 0xa) {
                ((ObjectData *)o)->f39c = r54;
                ((ObjectData *)o)->f390 = 0xa;
            }
            return;
        }
        break;
    }
    r60 = ((ObjectData *)o)->f30a;
    v60 = r60;
    switch (v60) {
    case 0:
    case 8:
        if (((ObjectData *)o)->f334 != 0) {
            if (((((ObjectData *)o)->f3a4 & 1)) != 0) {
                return;
            }
            if (v60 == 0xc) {
                return;
            }
            ((ObjectData *)o)->f39c = r60;
            ((ObjectData *)o)->f390 = 0xc;
            return;
        }
        update_actor_distance_request((void *)o);
        return;
    case 1:
        if (((ObjectData *)o)->f334 == 0) {
            if (((((ObjectData *)o)->f3a4 & 1)) == 0) {
                if (v60 != 8) {
                    ((ObjectData *)o)->f39c = r60;
                    ((ObjectData *)o)->f390 = 8;
                }
            }
        }
    }
}
