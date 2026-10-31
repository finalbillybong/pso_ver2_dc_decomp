typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c021ef8;
class S_c8c021ef8 {
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
    virtual int v42();
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void create_effect_777c(void *, int);
extern "C" void set_330(void *, short);
extern "C" void operation_8c0e73fc(Object *o)
{
    Object *self = o;
    int v4;
    S_c8c021ef8 *t1;
    int v1;
    int v2;
    int v7;
    int v3;
    int t2;
    v1 = (int)0x324;
    v2 = (int)0x198;
    v3 = (int)0x1f6;
    v4 = (int)0;
    while (v4 != 4) {
        t1 = lookup_low_id((int)(*(short *)((char *)((char *)self + 0x4) + (v4 << 1))));
        if (t1 != 0) {
            t2 = t1->v42();
            if (t2 == 0) {
                if (v4 == 0) {
                    create_effect_777c((void *)((char *)t1 + v1), 0x19);
                }
                set_330((void *)t1, *(short *)((char *)((char *)t1 + 0x0) + (v2)));
                v7 = (int)((char *)t1 + v1);
                create_effect_777c((void *)v7, v3);
            }
        }
        v4 = (int)(v4 + 1);
    }
}
