typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
class S_c8c0744dc;
class S_c8c0744dc {
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
    virtual int v34();
};
typedef struct S_c8c0744dcData {

} S_c8c0744dcData;
extern S_g8c418248 *g_8c418248;
extern "C" int lookup_low_id(int);
extern "C" int operation_8c0243ec(void *, int, unsigned char, char);
extern "C" S_c8c0744dc *find_record_8c0744dc(int);
extern "C" int operation_8c103b98(int a0)
{
    int v1;
    int t1;
    S_c8c0744dc *t2;
    int t3;
    int t4;
    unsigned char *v2;
    t1 = lookup_low_id((int)g_8c418248);
    if (t1 == 0) {
        v1 = (int)-1;
    } else {
        v2 = (unsigned char *)0x8c285d30 + ((unsigned short)a0 << 1);
        t4 = operation_8c0243ec((void *)t1, 3, v2[0], v2[1]);
        v1 = (int)t4;
    }
    if (v1 == -1) {
        return 0;
    }
    t2 = find_record_8c0744dc(v1);
    if (t2 == 0) {
        return 0;
    }
    t3 = t2->v34();
    return (int)(t3);
}
