typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_L8c4daae0 S_L8c4daae0;
typedef struct S_L8c4daae0_c S_L8c4daae0_c;
class S_c8c1736ac;
struct S_L8c4daae0 {
    char unknown0[0xc];
    S_L8c4daae0_c *f0c;
};
class S_c8c1736ac {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct S_c8c1736acData {

} S_c8c1736acData;
extern S_L8c4daae0 g_8c4daae0;
extern "C" S_c8c1736ac *create_loader_8c1736ac(int);
extern "C" void operation_8c1591d4(void)
{
    S_c8c1736ac *t1;
    if ((int)((&g_8c4daae0)->f0c) != -1) {
        t1 = create_loader_8c1736ac((int)((&g_8c4daae0)->f0c));
        if (t1 != 0) {
            t1->v1();
        }
    }
}
