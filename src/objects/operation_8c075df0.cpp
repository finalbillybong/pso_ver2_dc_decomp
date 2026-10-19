typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
class S_g8c469a40;
struct Frame {
    Block16 f00;
    Block16 f10;
    Block16 f20;
    Block16 f30;
};
class S_g8c469a40 {
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
};
typedef struct S_g8c469a40Data {

} S_g8c469a40Data;
extern short g_8c2fd6e4;
extern short g_8c2fd6e6;
extern int g_8c4689f0;
extern int g_8c4689f4;
extern S_g8c469a40 *g_8c469a40;
extern "C" void operation_8c074c98(void);
extern "C" void operation_8c074d14(void);
extern "C" void call_8c075ccc(void *, void *, ...);
extern "C" void operation_8c074c30(int);
extern "C" void operation_8c074ce4(void);
extern "C" void operation_8c075df0(void)
{
    Frame frame;
    int v3;
    operation_8c074c98();
    operation_8c074d14();
    g_8c469a40->v57();
    if (g_8c2fd6e4 == g_8c4689f0) {
        call_8c075ccc(g_8c469a40, (void *)(&(&frame)->f10));
        *(Block16 *)&(&frame)->f30 = *(Block16 *)&(&frame)->f10;
        operation_8c074c30((int)(&(&frame)->f30));
    }
    if (g_8c2fd6e6 == g_8c4689f0) {
        operation_8c074ce4();
        v3 = (int)(((g_8c4689f4 & 4)) != 0);
        if (v3 != 0) {
            call_8c075ccc(g_8c469a40, (void *)(&frame));
            *(Block16 *)&(&frame)->f20 = *(Block16 *)&(&frame)->f00;
            operation_8c074c30((int)(&(&frame)->f20));
        }
    }
    g_8c4689f0 += 1;
}
