typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4db474 S_L8c4db474;
typedef struct S_g8c4db408 S_g8c4db408;
typedef struct S_g8c4db408_0 S_g8c4db408_0;
class S_c8c021ef8;
struct S_L8c4db474 {
    char unknown0[0xf];
    char f0f;
};
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
extern S_g8c4db408 *g_8c4db408;
extern S_L8c4db474 g_8c4db474;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void call_8c12b154(void *, int, int);
extern "C" void operation_8c1713e0(int a0)
{
    int v1;
    S_c8c021ef8 *t1;
    int t2;
    v1 = (int)((unsigned char)a0 << 2);
    t1 = lookup_low_id((int)(*(S_g8c4db408_0 **)((char *)((char *)g_8c4db408 + 0x0) + (v1))));
    if (t1 != 0) {
        t2 = t1->v13();
        call_8c12b154((void *)((void *)&g_8c4db474), t2, 0xf);
        (&g_8c4db474)->f0f = 0;
        *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1)) = 1;
        return;
    }
    *(int *)((char *)((char *)g_8c4db408 + 0x0) + (v1)) = 0;
}
