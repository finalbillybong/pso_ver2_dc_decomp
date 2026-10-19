typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c44be94 S_g8c44be94;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Object Object;
class S_c8c122700;
class S_c8c122700 {
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
    virtual void v86();
    virtual void v87();
    virtual void v88(Object *);
};
typedef struct S_c8c122700Data {
    char unknown0[0x18];
    void *dispatch;
} S_c8c122700Data;
struct Object {
    char unknown0[0xa];
    short f0a;
};
extern S_g8c44be94 *g_8c44be94;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" S_c8c122700 *allocate_block(void *, unsigned int);
extern "C" void operation_8c0130ac(void *, int);
extern "C" void initialize_actor_8c11dbd0(void *, S_c8c122700 *);
extern "C" void call_8c127738(S_c8c122700 *);
extern "C" void request_actor_mode_seven(void *);
extern "C" S_c8c122700 *operation_8c127964(Object *o)
{
    S_c8c122700 *t1;
    S_c8c122700 *t2;
    t1 = allocate_block(g_8c4d97e0, (unsigned int)0x24);
    if (t1 != 0) {
        operation_8c0130ac((void *)t1, (int)g_8c44be94);
    }
    t2 = allocate_block(g_8c4d97e0, (unsigned int)0x444);
    if (t2 != 0) {
        S_c8c122700 *self = (S_c8c122700 *)t2;
        S_c8c122700 **home = &self;
        (void)home;
        initialize_actor_8c11dbd0((void *)t2, t1);
        *(void **)((char *)self + 0x18) = (void *)(void *)0x8c26c170;
        self->v88(o);
        call_8c127738(self);
        if (o->f0a != 0) {
            request_actor_mode_seven((void *)self);
        }
    }
    return t2;
}
