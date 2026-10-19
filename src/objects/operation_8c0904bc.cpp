typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c469e10 S_g8c469e10;
class S_g8c469e1c;
class S_g8c469e20;
class S_g8c469e20 {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_g8c469e20Data {

} S_g8c469e20Data;
class S_g8c469e1c {
public:
    char unknown0[0x8];
    virtual void v0(int);
};
typedef struct S_g8c469e1cData {

} S_g8c469e1cData;
extern S_g8c469e10 *g_8c469e10;
extern S_g8c469e1c *g_8c469e1c;
extern S_g8c469e20 *g_8c469e20;
extern "C" void call_8c03dc40(void *, int);
extern "C" void operation_8c0904bc(void)
{
    if (g_8c469e20 != 0) {
        g_8c469e20->v0(1);
    }
    g_8c469e20 = (S_g8c469e20 *)0;
    if (g_8c469e1c != 0) {
        g_8c469e1c->v0(1);
    }
    g_8c469e1c = (S_g8c469e1c *)0;
    if (g_8c469e10 != 0) {
        call_8c03dc40(g_8c469e10, 1);
        g_8c469e10 = (S_g8c469e10 *)0;
    }
}
