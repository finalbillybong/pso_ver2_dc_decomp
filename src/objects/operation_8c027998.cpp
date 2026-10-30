typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv19 S_vv19;
typedef struct S_vv5 S_vv5;
typedef struct S_vv5_0 S_vv5_0;
class S_vv7;
struct S_vv5 {
    S_vv5_0 *f00;
};
class S_vv7 {
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
};
typedef struct S_vv7Data {
    char unknown0[0x34];
    int f34;
} S_vv7Data;
struct S_vv19 {
    int f00;
};
extern "C" void operation_8c02c998(void *);
extern "C" void operation_8c027998(void)
{
    int v1;
    int v6;
    S_vv7 *v7;
    S_vv5 *v5;
    int v2;
    int v8;
    int v3;
    int v4;
    S_vv19 *v19;
    v5 = (S_vv5 *)(void *)0x8c41ce2c;
    v1 = (int)0x308;
    v2 = (int)-0xe01;
    v3 = (int)-2;
    v4 = (int)0x350;
    v6 = (int)0;
    while (4 > v6) {
        v7 = (S_vv7 *)v5->f00;
        if (v7 != 0) {
            v8 = (int)(*(short *)((char *)((char *)v7 + 0x0) + (v1)) == 3);
            if (v8 != 0) {
                operation_8c02c998((void *)v7);
                v7->v64();
                ((S_vv7Data *)v7)->f34 &= v2;
                v19 = (S_vv19 *)((int)v7 + v4);
                v19->f00 &= v3;
            }
        }
        v5 = (S_vv5 *)((char *)v5 + 4);
        v6 = (int)(v6 + 1);
    }
}
