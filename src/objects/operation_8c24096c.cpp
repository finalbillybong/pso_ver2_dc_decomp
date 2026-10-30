typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct SBlock4 {
    short halves[2];
} SBlock4;
typedef struct Arg0_13c Arg0_13c;
typedef struct Arg0_13c_s754 Arg0_13c_s754;
typedef struct Arg0_214 Arg0_214;
typedef struct S_vv5 S_vv5;
typedef struct S_x78672 S_x78672;
class Object;
class Object {
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
    virtual int v33();
};
typedef struct ObjectData {
    char unknown0[0x13c];
    Arg0_13c *f13c;
    char unknown140[0xd4];
    Arg0_214 *f214;
    char unknown218[0x28];
    int f240;
} ObjectData;
struct Arg0_13c_s754 {
    char unknown0[0x30];
    int f30;
};
struct S_vv5 {
    char f00;
};
struct S_x78672 {
    char unknown0[0x4];
    char f04;
};
extern "C" int call_8c1aaabc(int);
extern "C" void operation_8c075894(void *, void *, int, int);
extern "C" void create_effect_b29c8(void *, void *, void *, void *);
extern "C" void operation_8c077224(void *);
extern "C" void operation_8c076580(void *);
extern "C" void operation_8c24096c(Object *o)
{
    int v4;
    int v6;
    S_vv5 *v5;
    char *list;
    SBlock4 *e;
    int t1;
    int v1;
    int t2;
    t1 = call_8c1aaabc(((int)((ObjectData *)o)->f13c + 0x754));
    if (!((short)t1 != 2)) {
        char *list;
        int v6;
        operation_8c075894((void *)o, (void *)(((ObjectData *)o)->f13c), 0, (int)(((char *)o + 0x234)));
        list = (char *)&((Arg0_13c_s754 *)((char *)((ObjectData *)o)->f13c + 0x754))->f30;
        if (list == 0) {
            return;
        }
        v1 = *(int *)list;
        if (v1 < 0 || v1 > 0xa) {
            v1 = 0;
        }
        v5 = (S_vv5 *)((char *)o + 0x244);
        ((ObjectData *)o)->f240 = v1;
        v6 = 0;
        for (; !(v6 == 0xa); ) {
            v1 = v6 << 2;
            e = (SBlock4 *)(list + (v1) + 4);
            if (e != 0) {
                *(SBlock4 *)&v5->f00 = *e;
                v5 = (S_vv5 *)((char *)v5 + 8);
            }
            v6++;
        }
        t2 = o->v33();
        if (t2 != 1) {
            return;
        }
        if (((ObjectData *)o)->f240 != 0) {
            create_effect_b29c8((void *)(((ObjectData *)o)->f13c), (void *)(((char *)o + 0x234)), (void *)(((char *)o + 0x240)), (void *)(((ObjectData *)o)->f214));
        }
        operation_8c077224((void *)o);
        return;
    }
    operation_8c076580((void *)o);
}
