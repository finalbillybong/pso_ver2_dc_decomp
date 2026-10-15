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
};
typedef struct ObjectData {
    char unknown0[0x3ac];
    int f3ac;
    int f3b0;
    char unknown3b4[0x24];
    int f3d8;
} ObjectData;
extern "C" int call_8c18e8a0(int, int);
extern "C" int operation_8c13ba90(Object *o)
{
    int v2;
    int v1;
    int t1;
    v1 = (int)0x3d8;
    v2 = (int)0;
    while (6 > v2) {
        t1 = call_8c18e8a0((int)((int)*(int *)((char *)((char *)o + 0x0) + (v1)) + 6 - v2), 6);
        if (*(char *)((char *)0x8c4da6ec + (t1 << 2)) == 0) {
            ((ObjectData *)o)->f3d8 = (int)t1;
            goto L_8c13bacc;
        }
        v2 = (int)(v2 + 1);
    }
L_8c13bacc:;
    if (v2 == 6) {
        *(int *)0x8c4d9c18 = 1;
        o->v66();
        return 0;
    }
    ((ObjectData *)o)->f3ac = (int)((float)(((int)((ObjectData *)o)->f3d8 + 2) * 0x3c + -0xa) * 65536.0f / 360.0f);
    ((ObjectData *)o)->f3b0 = -0x71c;
    return 1;
}
