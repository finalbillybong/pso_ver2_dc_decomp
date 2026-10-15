typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_bc8 Arg0_bc8;
class S_c8c169508;
struct Object {
    char unknown0[0x350];
    int f350;
    char unknown354[0x874];
    Arg0_bc8 *fbc8;
};
struct Frame {
    char unknown0[0xc];
    int f0c;
    char unknown10[0x4];
};
class S_c8c169508 {
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
    virtual void v31(Frame *);
    virtual void v32();
    virtual void v33();
    virtual int v34();
};
typedef struct S_c8c169508Data {

} S_c8c169508Data;
extern "C" int operation_8c16b2e4(void);
extern "C" int operation_8c19b054(void);
extern "C" int call_8c372d98(int);
extern "C" int call_8c3727a0(int);
extern "C" void call_8c05fbf8(int, int, int, int);
extern "C" int call_8c16a18c(void *, int);
extern "C" S_c8c169508 *operation_8c169508(void *);
extern "C" void operation_8c026700(int, int);
extern "C" void operation_8c1c74a8(void *, int);
extern "C" void call_8c16be70(int, void *, Object *, Frame *, int);
extern "C" void operation_8c02349c(Object *o, int a1, int a2)
{
    Frame frame;
    char *v41;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    S_c8c169508 *t7;
    int t8;
    t1 = operation_8c16b2e4();
    if (t1 != 0) {
        t2 = operation_8c19b054();
        t3 = call_8c372d98((int)((char)t2));
        if (t3 == 0) {
            t4 = operation_8c19b054();
            t5 = call_8c3727a0((int)((char)t4));
            if (t5 == 1) {
                goto L_8c0234ea;
            }
        }
        call_8c05fbf8(0x50006, 0, 0, 0);
        return;
    }
L_8c0234ea:;
    t6 = call_8c16a18c((void *)(o->fbc8), a1);
    if (t6 != 0) {
        t7 = operation_8c169508((void *)t6);
        if (t7 != 0) {
            operation_8c026700((int)o, 0x384);
            o->f350 |= 2;
            t7->v31((&frame));
            operation_8c1c74a8((void *)(&frame), a2);
            v41 = (char *)(&frame)->f0c;
            t8 = t7->v34();
            if ((t8 - a2) > 0) {
                (&frame)->f0c = -1;
            }
            call_8c16be70((int)((int)o->fbc8 + 0x24), (void *)(((char *)o + 0x7d4)), o, (Frame *)((&frame)), (int)(v41));
        }
    }
}
