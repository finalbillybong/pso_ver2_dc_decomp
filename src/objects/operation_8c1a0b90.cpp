typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
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
    virtual int v48();
};
typedef struct ObjectData {
    char unknown0[0x34];
    int f34;
    char unknown38[0x4];
    Vector3 f3c;
    char unknown48[0x2c2];
    short f30a;
    char unknown30c[0x18];
    Vector3 f324;
    char unknown330[0x88];
    int f3b8;
} ObjectData;
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c1a11e4(Object *);
extern "C" void transform_actor_records(void *);
extern "C" void call_8c027090(Object *);
extern "C" void call_8c1a0cd0(Object *);
extern "C" void call_8c1a0db4(Object *);
extern "C" void call_8c1a0e44(Object *);
extern "C" void operation_8c1a0ef4(void *);
extern "C" void operation_8c1a0f6c(void *);
extern "C" void operation_8c1a0f9c(void *);
extern "C" void operation_8c1a0fe0(void *);
extern "C" void operation_8c1a0b90(Object *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c1a11e4(o);
        return;
    }
    if (((((ObjectData *)o)->f34 & 0x800)) != 0) {
        ((ObjectData *)o)->f30a = 6;
    } else {
        t2 = o->v48();
        if (t2 != 0) {
            transform_actor_records((void *)o);
            if (((ObjectData *)o)->f3b8 != 1) {
                return;
            }
            call_8c027090(o);
            return;
        }
    }
    switch (((ObjectData *)o)->f30a) {
    case 0:
        call_8c1a0cd0(o);
        break;
    case 1:
        call_8c1a0db4(o);
        break;
    case 2:
        call_8c1a0e44(o);
        break;
    case 3:
        operation_8c1a0ef4((void *)o);
        break;
    case 4:
        operation_8c1a0f6c((void *)o);
        break;
    case 5:
        operation_8c1a0f9c((void *)o);
        break;
    case 6:
        operation_8c1a0fe0((void *)o);
    }
    *(Vector3 *)&((ObjectData *)o)->f324 = *(Vector3 *)&((ObjectData *)o)->f3c;
    transform_actor_records((void *)o);
    if (((ObjectData *)o)->f3b8 == 1) {
        call_8c027090(o);
    }
}
