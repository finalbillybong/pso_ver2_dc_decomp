typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_vv1 S_vv1;
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
    virtual int v48(void *, int, int, int);
};
typedef struct ObjectData {
    char unknown0[0x13c];
    int f13c;
    char unknown140[0xf4];
    int f234;
} ObjectData;
struct S_vv1 {
    char unknown0[0x18];
    int f18;
};
extern "C" void operation_8c241658(void *);
extern "C" int allocate_block(void *, unsigned int);
extern "C" void operation_8c1ab01c(void *, int, int, int);
extern "C" void operation_8c251a48();
extern "C" void operation_8c251944(Object *o)
{
    S_vv1 *v1;
    int v2;
    int t1;
    int t2;
    operation_8c241658((void *)o);
    if (((ObjectData *)o)->f13c != 0) {
        v1 = (S_vv1 *)((int)((ObjectData *)o)->f13c + 0x754);
        if (v1->f18 == 0) {
            v2 = (int)0;
            while (v2 != 2) {
                v1->f18 += 1;
                v2 = (int)(v2 + 1);
            }
            *(int *)((char *)o + 0x234) |= 2;
            if (o != 0) {
                t1 = allocate_block((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), (unsigned int)0x2c);
                if (t1 != 0) {
                    operation_8c1ab01c((void *)t1, (int)o, (int)operation_8c251a48, 0x3c);
                }
            }
            ((ObjectData *)o)->f234 |= 4;
            t2 = o->v48(((char *)o + 0x238), 0, 0, 1);
            if (t2 == 1) {
                ((ObjectData *)o)->f234 &= -5;
                o->v48(((char *)o + 0x244), 0, 0, 0);
                return;
            }
            ((ObjectData *)o)->f234 &= -5;
            o->v48(((char *)o + 0x244), 0, 0, 1);
        }
    }
}
