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
};
typedef struct ObjectData {
    char unknown0[0x20];
    unsigned short f20;
    char unknown22[0x12];
    int f34;
    char unknown38[0x16e];
    short f1a6;
    char unknown1a8[0x6];
    short f1ae;
    char unknown1b0[0x110];
    int f2c0;
    float f2c4;
    int f2c8;
    int f2cc;
    float f2d0;
    int f2d4;
    char unknown2d8[0x30];
    short f308;
} ObjectData;
extern "C" int operation_8c045484(Object *o)
{
    int v1;
    int v2;
    v1 = (int)((ObjectData *)o)->f34;
    if (((v1 & 0x40)) != 0) {
        o->v59();
        return 1;
    }
    v2 = (int)(((ObjectData *)o)->f308 == 2);
    if (v2 != 0) {
        if (((v1 & 3)) == 0) {
            switch (((ObjectData *)o)->f2c0) {
            case 16:
                ((ObjectData *)o)->f1ae += (int)((float)((ObjectData *)o)->f1a6 * -((ObjectData *)o)->f2c4);
            }
            ((ObjectData *)o)->f2c0 = 0;
            ((ObjectData *)o)->f2c4 = 0.0f;
            ((ObjectData *)o)->f2c8 = 0;
        }
        if (((((ObjectData *)o)->f34 & 0x3c)) == 0) {
            switch (((ObjectData *)o)->f2cc) {
            case 2:
                ((ObjectData *)o)->f1ae += (int)((float)((ObjectData *)o)->f1a6 * -((ObjectData *)o)->f2d0);
                break;
            case 3:
                if ((unsigned int)((ObjectData *)o)->f20 >= (unsigned int)0x1000) {
                    ((ObjectData *)o)->f1ae += (int)((float)((ObjectData *)o)->f1a6 * -((ObjectData *)o)->f2d0);
                }
            }
            ((ObjectData *)o)->f2cc = 0;
            ((ObjectData *)o)->f2d0 = 0.0f;
            ((ObjectData *)o)->f2d4 = 0;
        }
    }
    return 0;
}
