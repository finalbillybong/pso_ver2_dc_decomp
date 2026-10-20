typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4689f8 S_g8c4689f8;
typedef struct Object Object;
typedef struct Arg0_8 Arg0_8;
typedef struct S_vv7 S_vv7;
class S_vv11;
struct Object {
    char unknown0[0x4];
    int f04;
    Arg0_8 *f08;
};
struct S_g8c4689f8 {
    char unknown0[0xe8];
    int fe8;
};
struct S_vv7 {
    char unknown0[0xe8];
    int fe8;
};
class S_vv11 {
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
    virtual void v39(void *);
};
typedef struct S_vv11Data {
    char unknown0[0x13c];
    int f13c;
} S_vv11Data;
extern int g_8c4689ec;
extern "C" int current_effect_mode(void);
extern "C" void operation_8c074a2c(Object *o)
{
    int v3;
    int v2;
    int v1;
    int v5;
    S_vv7 *v7;
    S_vv11 *v11;
    int t1;
    t1 = current_effect_mode();
    if (t1 != 0xf) {
        v1 = (int)o->f04;
        v2 = 0;
        v3 = g_8c4689ec - 1;
        while (v3 > v2) {
            v5 = (v2 + v3) >> 1;
            if (v1 > (*(S_g8c4689f8 **)((char *)0x8c4689f8 + (v5 << 2)))->fe8) {
                v2 = v5 + 1;
            } else {
                v3 = v5;
            }
        }
        v7 = (S_vv7 *)*(S_g8c4689f8 **)((char *)0x8c4689f8 + (v2 << 2));
        if (v7 != 0 && v7->fe8 == v1) {
            v11 = (S_vv11 *)v7;
        } else {
            v11 = (S_vv11 *)0;
        }
        if (v11 != 0 && ((S_vv11Data *)v11)->f13c != 0) {
            v11->v39(o->f08);
        }
    }
}
