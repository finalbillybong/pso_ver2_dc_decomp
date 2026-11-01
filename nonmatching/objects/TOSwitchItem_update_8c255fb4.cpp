/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c255fb4
 * function: TOSwitchItem_update_8c255fb4
 * language: c++
 * reference size: 480 bytes
 * compiled size: 408 bytes (-15.0%)
 * differing lines: 95 of 198 reference instruction lines
 * differing bytes: 326
 * provenance: generator draft (experimental generator, mode switch2ext)
 * known gaps: machine-generated from the reviewed listing and not hand-reviewed: callee
 *   signatures, types and control-flow shape are inferred and may be wrong; not proven equivalent
 *   to the original; compiled size differs from the reference by -72 bytes
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv36 S_vv36;
typedef struct S_vv4 S_vv4;
class Object;
class S_vv4_0;
struct S_vv4 {
    S_vv4_0 *f00;
};
struct S_vv36 {
    char unknown0[0xe4];
    short fe4;
};
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
};
typedef struct ObjectData {
    char unknown0[0x11c];
    float f11c;
    int f120;
    char unknown124[0x4];
    int f128;
} ObjectData;
class S_vv4_0 {
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
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
};
typedef struct S_vv4_0Data {

} S_vv4_0Data;
extern int g_8c4689ec;
extern "C" float squared_distance_xz(void *, void *);
extern "C" int query_state_8c074980(void *);
extern "C" void TOSwitchItem_update_8c255fb4(Object *o)
{
    int v5;
    int v11;
    S_vv36 *v36;
    S_vv4 *v4;
    int v6;
    int v2;
    int v9;
    int v3;
    int v1;
    float t1;
    int t2;
    o->v23();
    v1 = (int)0x124;
    v2 = (int)0x134;
    v4 = (S_vv4 *)(void *)0x8c4689f8;
    v5 = (int)0;
    v6 = (int)0;
    v3 = (int)0x136;
    while (v6 != g_8c4689ec) {
        v36 = (S_vv36 *)v4->f00;
        switch (v36->fe4) {
        case 0:
            t1 = squared_distance_xz((void *)((int)v36 + 0x3c), (void *)(((char *)o + 0x3c)));
            if (((ObjectData *)o)->f11c > t1) {
                switch (*(int *)((char *)((char *)o + 0x0) + (v1))) {
                case 0:
                    break;
                case 1:
                    if ((*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2))) != 0) {
                        break;
                    }
                    break;
                case 2:
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2)) != 1) {
                        break;
                    }
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v3)) != 1) {
                        break;
                    }
                    break;
                case 3:
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2)) != 1) {
                        break;
                    }
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v3)) != 2) {
                        break;
                    }
                    break;
                case 4:
                    v9 = (int)0;
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2)) == 1 && *(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v3)) == 3) {
                        v9 = (int)1;
                    }
                    if (v9 != 1) {
                        break;
                    }
                    break;
                case 5:
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2)) != 2) {
                        break;
                    }
                    break;
                case 6:
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2)) != 3) {
                        break;
                    }
                    v4->f00->v34();
                    break;
                case 7:
                    if (*(unsigned char *)((char *)((char *)v4->f00 + 0x0) + (v2)) != 4) {
                        break;
                    }
                    t2 = query_state_8c074980((void *)(v4->f00));
                    v11 = (int)(v5 + t2);
                    v5 = (int)v11;
                }
            }
        }
        v6 = (int)(v6 + 1);
        v4 = (S_vv4 *)((char *)v4 + 4);
    }
    if (v5 >= ((ObjectData *)o)->f128) {
        if (((ObjectData *)o)->f120 != 0) {
            return;
        }
        ((ObjectData *)o)->f120 = 1;
        o->v22();
        return;
    }
    if (((ObjectData *)o)->f120 != 0) {
        ((ObjectData *)o)->f120 = 0;
        o->v22();
    }
}
