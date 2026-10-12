typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c4db4e4 S_g8c4db4e4;
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
    virtual int v13();
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" char g_8c318c08[];
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" int call_8c12b0cc(int);
extern "C" void call_8c18e720(void *, int);
extern "C" void operation_8c172594(void)
{
    S_c8c021ef8 *t1;
    int t2;
    int t3;
    int t4;
    t1 = lookup_low_id((int)*(S_g8c418248 **)0x8c418248);
    if (t1 != 0) {
        t2 = t1->v13();
        t3 = call_8c12b0cc(t2);
        call_8c18e720((void *)(*(S_g8c4db4e4 **)0x8c4db4e4), t2);
        *(int *)0x8c4db4e4 += t3;
        return;
    }
    t4 = call_8c12b0cc((int)(g_8c318c08 + 0x28));
    call_8c18e720((void *)(*(S_g8c4db4e4 **)0x8c4db4e4), (int)(g_8c318c08 + 0x28));
    *(int *)0x8c4db4e4 += t4;
}
