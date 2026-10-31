typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4daaa4 S_g8c4daaa4;
class S_vv206;
class S_vv206 {
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
    virtual int v41();
    char unknown1c[0x11a];
    unsigned char f136;
};
struct S_g8c4daaa4 {
    char unknown0[0x20];
    int f20;
};
extern "C" int operation_8c1581d8(S_vv206 *o, short a1)
{
    unsigned char id;
    if (o != 0) {
        id = o->f136;
        if (id < 0x89) {
    if (a1 == 2) {
        switch (id) {
        case 0x1f:
        case 0x38:
        case 0x49:
        case 0x4a:
        case 0x4d:
        case 0x63:
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + 0xab4;
        case 0x1d:
        case 0x22:
        case 0x24:
        case 0x25:
        case 0x2c:
        case 0x50:
        case 0x51:
        case 0x53:
        case 0x5d:
        case 0x60:
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + 0xac8;
        case 0x1e:
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + 0xadc;
        case 0x54:
        case 0x5b:
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + 0xaf0;
        case 0x62:
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + 0xb04;
        case 0x30:
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + 0xb18;
        }
    }
            return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + id * 0x14;
        }
        return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20 + (unsigned char)o->v41() * 0x14;
    }
    return (*(S_g8c4daaa4 **)0x8c4daaa4)->f20;
}
