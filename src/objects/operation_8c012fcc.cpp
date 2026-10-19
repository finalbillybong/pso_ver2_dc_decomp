typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
class S_c8c053d84;
struct Object {
    char unknown0[0x2];
    unsigned short f02;
    int f04;
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
    virtual void v57(int);
    virtual void v58();
};
typedef struct S_c8c053d84Data {
    char unknown0[0x34];
    int f34;
} S_c8c053d84Data;
extern "C" S_c8c053d84 *lookup_object_by_id(unsigned short);
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c012fcc(Object *o)
{
    unsigned short v108;
    int v1;
    int v2;
    S_c8c053d84 *t1;
    int t2;
    if (o != 0 && *(int *)0x8c4703c0 == 3) {
        Object *p = o;
        v108 = (unsigned short)p->f02;
        if (v108 >= (unsigned int)0x1000 && (unsigned int)0x4000 > v108) {
            t1 = lookup_object_by_id((unsigned short)v108);
            if (t1 != 0) {
                t2 = hierarchy_is_active((void *)t1);
                if (t2 != 0) {
                    v1 = (int)((S_c8c053d84Data *)t1)->f34;
                    if (((v1 & 0x800)) == 0) {
                        v2 = (int)p->f04;
                        if (((v1 & v2)) == 0) {
                            ((S_c8c053d84Data *)t1)->f34 = v1 | v2;
                            switch (v2) {
                            case 2:
                                t1->v54();
                                return;
                            case 4:
                                t1->v58();
                                return;
                            case 16:
                                t1->v56();
                                return;
                            case 32:
                                t1->v57(0);
                            }
                        }
                    }
                }
            }
        }
    }
}
