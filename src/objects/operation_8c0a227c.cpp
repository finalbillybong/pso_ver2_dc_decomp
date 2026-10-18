typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c46efc8 S_L8c46efc8;
typedef struct S_g8c3032d8 S_g8c3032d8;
class S_vv4;
struct S_L8c46efc8 {
    unsigned char f00;
    char f01;
    char unknown2[0x6];
    int f08;
};
class S_vv4 {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
};
typedef struct S_vv4Data {

} S_vv4Data;
extern S_L8c46efc8 g_8c46efc8;
extern "C" int operation_8c0a227c(int a0)
{
    char *v1;
    S_vv4 *v4;
    unsigned char v2;
    v1 = (char *)(&g_8c46efc8)->f08;
    if ((((int)(v1) & 8)) != 0) {
        return 0;
    }
    (&g_8c46efc8)->f08 |= 8;
    v2 = (unsigned char)(&g_8c46efc8)->f00;
    if (a0 == v2) {
        (&g_8c46efc8)->f00 = a0;
    } else {
        if (v2 != 2 && v2 != 6) {
            (&g_8c46efc8)->f01 = v2;
        }
        (&g_8c46efc8)->f00 = a0;
    }
    v4 = (S_vv4 *)*(S_g8c3032d8 **)((char *)0x8c3032d8 + ((&g_8c46efc8)->f00 << 2));
    if (v4 != 0) {
        v4->v6();
    }
    return 1;
}
