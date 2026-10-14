typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
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
    virtual int v17();
};
typedef struct S_c8c021ef8Data {

} S_c8c021ef8Data;
extern "C" S_c8c021ef8 *lookup_low_id(int);
extern "C" void operation_8c1a05d4(void)
{
    S_c8c021ef8 *t1;
    int t2;
    if (*(int *)0x8c4dc5ac == 0) {
        t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
        if (t1 != 0) {
            t2 = t1->v17();
            *(int *)0x8c4dc5a4 = t2 + 1;
        } else {
            *(int *)0x8c4dc5a4 = 1;
        }
        if (1 > *(int *)0x8c4dc5a4) {
            *(int *)0x8c4dc5a4 = 1;
        }
        if (*(int *)0x8c4dc5a4 > 0xc7) {
            *(int *)0x8c4dc5a4 = 0xc7;
        }
        *(int *)0x8c4dc5ac = 1;
    }
}
