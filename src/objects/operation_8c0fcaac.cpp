typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c053d84;
struct Object {
    char unknown0[0x68];
    unsigned short f68;
    char unknown6a[0x2];
    int f6c;
};
class S_c8c053d84 {
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
typedef struct S_c8c053d84Data {
    char unknown0[0x34];
    int f34;
    char unknown38[0xac];
    short fe4;
} S_c8c053d84Data;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int hierarchy_is_active(void *);
static inline void reset_8c0fcaac(Object *o)
{
    o->f68 = 0xffff;
    if ((float)o->f6c > 15.0f) {
        o->f6c = 0xf;
    }
}
extern "C" void operation_8c0fcaac(Object *o)
{
    S_c8c053d84 *t1;
    int v3;
    unsigned short t2 = 0xffff;
    if (o->f68 != t2) {
        t1 = lookup_object_by_id(o->f68);
        if (t1 == 0 || hierarchy_is_active((void *)t1) == 0) {
            reset_8c0fcaac(o);
            return;
        } else {
            v3 = ((S_c8c053d84Data *)t1)->f34;
            if ((v3 & 0x10000000) == 0) {
                if ((v3 & 0x20000000) != 0) {
                    if (t1->v42() != 0) {
                        reset_8c0fcaac(o);
                    }
                    return;
                } else if ((v3 & 0x80000000) != 0) {
                    if (((S_c8c053d84Data *)t1)->fe4 != 0) {
                        reset_8c0fcaac(o);
                    }
                }
            }
        }
    }
}
