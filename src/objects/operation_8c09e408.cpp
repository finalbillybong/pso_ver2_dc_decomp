typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv13 S_vv13;
class S_vv17;
struct S_vv13 {
    char unknown0[0x2];
    short f02;
    short f04;
    char unknown6[0x6];
    short f0c;
    short f0e;
    char unknown10[0x34];
    S_vv17 *f44;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
};
class S_vv17 {
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
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86(int);
};
typedef struct S_vv17Data {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x52];
    S_vv13 *f84;
} S_vv17Data;
extern int g_8c44be04;
extern int g_8c46ec54;
extern int g_8c46ed10;
extern "C" int call_8c09dfec(S_vv13 *, Frame *);
extern "C" int operation_8c09e408(int a0, int a1, int a2)
{
    Frame frame;
    int v2;
    int v4;
    int v3;
    int v5;
    int v1;
    char *v15;
    int v14;
    int v6;
    int v11;
    S_vv13 *v13;
    int v12;
    S_vv17 *v17;
    short v19;
    short fl;
    int t1;
    int t2;
    v1 = (int)(a0 == g_8c44be04);
    v2 = (int)0;
    if (a0 > 0x11) {
        v11 = (int)v2;
    } else {
        v3 = (int)0;
        v4 = (int)0;
        while (a0 > v4) {
            v5 = (int)(v3 + *(int *)((char *)0x8c46eca0 + (v4 << 2)));
            v3 = (int)v5;
            v4 = (int)(v4 + 1);
        }
        v6 = (int)(g_8c46ec54 + v3 * 0x48);
        v11 = (int)v6;
    }
    v12 = (int)*(int *)((char *)0x8c46eca0 + (a0 << 2));
    v13 = (S_vv13 *)v11;
    v14 = (int)0;
    v15 = (char *)v1;
    while (v12 > v14) {
        fl = v13->f02;
        if (((fl & 8)) == 0 && ((fl & 2)) == 0 && ((fl & 1)) == 0 && v13->f0c == (short)a1 && v13->f0e == (short)a2) {
            if (v15 != 0) {
                v19 = (short)-1;
                t1 = call_8c09dfec(v13, (Frame *)((&frame)));
                if (t1 >= 0) {
                    t2 = ((int (*)(void *))((&frame)->f04))((void *)((int)v13 + 4));
                    v17 = (S_vv17 *)t2;
                } else {
                    v17 = (S_vv17 *)0;
                }
                if (v17 != 0) {
                    v13->f44 = (S_vv17 *)v17;
                    v13->f02 |= 2;
                    ((S_vv17Data *)v17)->f2c = v13->f0c;
                    ((S_vv17Data *)v17)->f2e = v13->f0e;
                    ((S_vv17Data *)v17)->f30 = v13->f04;
                    ((S_vv17Data *)v17)->f84 = (S_vv13 *)v13;
                    if (((S_vv17Data *)v17)->f30 != v19) {
                        v17->v86(g_8c46ed10 + ((S_vv17Data *)v17)->f30 * 0xc);
                    }
                    v2 = (int)(v2 + 1);
                    goto L_8c09e516;
                }
                v13->f44 = (S_vv17 *)0;
            } else {
                v13->f02 |= 1;
                v2 = (int)(v2 + 1);
            }
        }
L_8c09e516:;
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 72);
    }
    return (int)(v2);
}
