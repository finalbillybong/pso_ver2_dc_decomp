typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Frame Frame;
class Object;
struct Frame {
    char unknown0[0x4];
    Block8 f04;
};
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
    virtual void v59();
    virtual void v60(Block8);
    virtual void v61(Block8);
};
typedef struct ObjectData {

} ObjectData;
extern "C" void operation_8c029cf0(Object *o, Block8 a4)
{
    switch (a4.words[0]) {
    case 15:
        o->v53();
        return;
    case 16:
        o->v54();
        return;
    case 17:
        o->v55();
        return;
    case 18:
        o->v56();
        return;
    case 3:
        o->v58();
        return;
    case 2:
        o->v57(0);
        return;
    case 7:
        o->v59();
        return;
    case 9:
    case 11:
        o->v60(a4);
        return;
    case 10:
    case 12:
        o->v61(a4);
        return;
    case 4:
    case 5:
    case 6:
    case 8:
    case 13:
    case 14:
        break;
    }
}
