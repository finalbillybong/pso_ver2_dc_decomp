typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
class S_g8c4e2f8c {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
};
typedef struct S_g8c4e2f8cData {

} S_g8c4e2f8cData;
extern int g_8c4e2f80;
extern int g_8c4e2f84;
extern int g_8c4e2f88;
extern S_g8c4e2f8c *g_8c4e2f8c;
extern "C" void operation_8c1dbcd0(int a0)
{
    g_8c4e2f88 = a0;
    g_8c4e2f80 = 0;
    g_8c4e2f84 = 1;
    if (g_8c4e2f8c != 0) {
        g_8c4e2f8c->v1();
    }
}
