/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c13c81c
 * function: operation_8c13c81c
 * language: c++
 * reference size: 492 bytes
 * compiled size: 492 bytes (+0.0%)
 * differing lines: 4 of 187 reference instruction lines
 * differing bytes: 2
 * provenance: generator draft (mode bgotoext)
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
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0xb4];
    int fec;
    short ff0;
    char unknownf2[0xc4];
    unsigned short f1b6;
    char unknown1b8[0x152];
    short f30a;
    char unknown30c[0x24];
    short f330;
    char unknown332[0x28];
    short f35a;
    char unknown35c[0x34];
    int f390;
    char unknown394[0x4];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0x18];
    int f3c0;
    int f3c4;
} ObjectData;
extern int g_8c4d9b84;
extern int g_8c4d9b9c;
extern "C" void operation_8c13bb4c(int, int);
extern "C" void interrupt_state_8c13be60(int);
extern "C" void operation_8c13d46c(void *);
extern "C" void play_se_8c05fbf8(int, void *, int, int);
extern "C" void operation_8c01c5f0(Object *);
extern "C" int operation_8c13d420(void *);
extern "C" void operation_8c027090(int);
extern "C" void minimap_add_marker_8c102cd0(void *, int, int, int);
extern "C" void operation_8c13c81c(Object *o)
{
    int v6;
    int v26;
    int t1;
    if (((ObjectData *)o)->f398 == -1) {
    } else {
        if (((ObjectData *)o)->f398 != 0) {
            if (((ObjectData *)o)->f398 == 1) {
                goto L_8c13c8e4;
            }
            if (((ObjectData *)o)->f398 == 2) {
                goto L_8c13c948;
            }
            goto L_8c13c978;
        }
        ((ObjectData *)o)->f34 &= -0x200201;
        ((ObjectData *)o)->f35a = ((ObjectData *)o)->f330;
        if (((ObjectData *)o)->f3c4 != 0) {
            g_8c4d9b84 = 1;
            operation_8c13bb4c((int)(((ObjectData *)o)->f1b6), 0);
            interrupt_state_8c13be60(0x12c);
        }
        if (g_8c4d9b9c != 0) {
            v6 = (int)((ObjectData *)o)->f3a4;
            if (((v6 & 0x10000)) != 0) {
                ((ObjectData *)o)->f3a4 = (unsigned int)v6 >> 1 << 1;
                ((ObjectData *)o)->f390 = 2;
                ((ObjectData *)o)->f30a = 2;
                ((ObjectData *)o)->f398 = (int)(((ObjectData *)o)->f3c0);
                goto L_8c13c978;
            }
            if (((v6 & 0x20000)) != 0) {
                ((ObjectData *)o)->f3a4 = (unsigned int)v6 >> 1 << 1;
                operation_8c13d46c((void *)o);
                goto L_8c13c978;
            }
            play_se_8c05fbf8(0x30010, (void *)(((char *)o + 0x3c)), 0xa, 0);
            ((ObjectData *)o)->f398 = 2;
            goto L_8c13c978;
        }
        ((ObjectData *)o)->ff0 = 3;
        ((ObjectData *)o)->f398 = 1;
L_8c13c8e4:;
        operation_8c01c5f0(o);
        if (((ObjectData *)o)->fec == 8) {
            goto L_8c13c978;
        }
        v26 = (int)((ObjectData *)o)->f3a4;
        if (((v26 & 0x10000)) != 0) {
            ((ObjectData *)o)->f3a4 = (unsigned int)v26 >> 1 << 1;
            o->v68();
            goto L_8c13c978;
        }
        if (((v26 & 0x20000)) != 0) {
            ((ObjectData *)o)->f3a4 = (unsigned int)v26 >> 1 << 1;
            operation_8c13d46c((void *)o);
            goto L_8c13c978;
        }
        play_se_8c05fbf8(0x30010, (void *)(((char *)o + 0x3c)), 0xa, 0);
        ((ObjectData *)o)->f398 = 2;
        goto L_8c13c978;
L_8c13c948:;
        t1 = operation_8c13d420((void *)o);
        if (t1 != 1) {
            goto L_8c13c978;
        }
        ((ObjectData *)o)->f3a4 = (unsigned int)((ObjectData *)o)->f3a4 >> 1 << 1;
        o->v66();
        goto L_8c13c978;
    }
    ((ObjectData *)o)->f3a4 = (unsigned int)((ObjectData *)o)->f3a4 >> 1 << 1;
L_8c13c978:;
    operation_8c027090((int)o);
    minimap_add_marker_8c102cd0((void *)(((char *)o + 0x3c)), -0x5db4, 1, 0);
}
