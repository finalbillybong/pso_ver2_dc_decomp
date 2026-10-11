typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daa20 S_g8c4daa20;
typedef struct S_g8c4daa28 S_g8c4daa28;
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
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x8];
    float f40;
    char unknown44[0xac];
    short ff0;
    char unknownf2[0x6];
    float ff8;
    char unknownfc[0x29c];
    int f398;
    char unknown39c[0x8];
    int f3a4;
    char unknown3a8[0xf0];
    int f498;
} ObjectData;
struct S_g8c4daa20 {
    char unknown0[0x7];
    char f07;
};
struct S_g8c4daa28 {
    char unknown0[0x7];
    char f07;
};
extern "C" void call_8c01c5f0(Object *);
extern "C" void operation_8c153ef8(Object *o)
{
    int v5;
    if (((ObjectData *)o)->f398 != -1) {
        if (((ObjectData *)o)->f398 != 0) {
            if (((ObjectData *)o)->f398 == 2) {
                goto L_8c153f28;
            }
            return;
        }
        ((ObjectData *)o)->f34 |= 0x40000;
        ((ObjectData *)o)->ff0 = 8;
        ((ObjectData *)o)->f398 = 2;
L_8c153f28:;
        call_8c01c5f0(o);
        v5 = (int)0;
        if (!(20.0f > ((ObjectData *)o)->ff8)) {
            v5 = (int)(int)((((ObjectData *)o)->ff8 - 20.0f) * 13.4210529f);
        }
        (*(S_g8c4daa20 **)0x8c4daa20)->f07 = v5;
        (*(S_g8c4daa28 **)0x8c4daa28)->f07 = v5;
        ((ObjectData *)o)->f498 = 0x4000;
        ((ObjectData *)o)->f40 = (1.0f - ((ObjectData *)o)->ff8 * 0.025641026f) * 25.0f;
        if (38.0f > ((ObjectData *)o)->ff8) {
            return;
        }
        ((ObjectData *)o)->f40 = 0.0f;
        ((ObjectData *)o)->f3a4 = (unsigned int)((ObjectData *)o)->f3a4 >> 1 << 1;
        o->v66();
        return;
    }
    ((ObjectData *)o)->f34 &= -0x40001;
}
