typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_vv13 S_vv13;
class S_vv18;
struct S_vv13 {
    char unknown0[0x2];
    short f02;
    short f04;
    char unknown6[0x6];
    short f0c;
    short f0e;
    char unknown10[0x34];
    S_vv18 *f44;
};
struct Frame {
    char unknown0[0x4];
    int f04;
    char unknown8[0x8];
};
class S_vv18 {
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
typedef struct S_vv18Data {
    char unknown0[0x2c];
    short f2c;
    short f2e;
    short f30;
    char unknown32[0x52];
    S_vv13 *f84;
} S_vv18Data;
extern int g_8c46ec44;
extern int g_8c46ec54;
extern int g_8c46ed10;
extern "C" int operation_8c09e2d4(int a0, int a1)
{
    Frame frame;
    int v3;
    int v2;
    int v1;
    int v15;
    int v11;
    int v14;
    int v5;
    int v10;
    int v16;
    S_vv18 *v18;
    int v38;
    S_vv13 *v13;
    int v12;
    int t1;
    int t2;
    v1 = (int)g_8c46ec44;
    v15 = (int)0;
    if (!(v1 >= 0)) {
        return 0;
    }
    if (v1 > 0x11) {
        v10 = (int)0;
    } else {
        v2 = 0;
        for (v3 = 0; v3 < v1; v3++) {
            v2 += *(int *)((char *)0x8c46eca0 + (v3 << 2));
        }
        v5 = (int)(g_8c46ec54 + v2 * 0x48);
        v10 = (int)v5;
    }
    v11 = (int)*(int *)((char *)0x8c46eca0 + (v1 << 2));
    v13 = (S_vv13 *)v10;
    v14 = (int)0;
    v12 = (int)-1;
    while (v11 > v14) {
        v16 = (int)v13->f02;
        if (((v16 & 8)) == 0 && ((v16 & 2)) == 0 && v13->f0c == (short)a0 && v13->f0e == (short)a1) {
            t1 = ((int ( *) ( S_vv13 *, Frame *))0x8c09dfec)(v13, (&frame));
            if (t1 >= 0) {
                t2 = ((int ( *) ( void *))((&frame)->f04))((void *)((int)v13 + 4));
                v18 = (S_vv18 *)t2;
            } else {
                v18 = (S_vv18 *)0;
            }
            if (v18 != 0) {
                v13->f44 = (S_vv18 *)v18;
                v13->f02 |= 2;
                ((S_vv18Data *)v18)->f2c = v13->f0c;
                ((S_vv18Data *)v18)->f2e = v13->f0e;
                ((S_vv18Data *)v18)->f30 = v13->f04;
                ((S_vv18Data *)v18)->f84 = (S_vv13 *)v13;
                v38 = (int)((S_vv18Data *)v18)->f30;
                if (v38 != (short)v12) {
                    v18->v86(g_8c46ed10 + v38 * 0xc);
                }
                v15 = (int)(v15 + 1);
            } else {
                v13->f44 = (S_vv18 *)0;
            }
        }
        v14 = (int)(v14 + 1);
        v13 = (S_vv13 *)((char *)v13 + 72);
    }
    return (int)(v15);
}
