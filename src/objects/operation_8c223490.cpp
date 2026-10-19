typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv7 S_vv7;
class S_g8c506080;
struct S_vv7 {
    int f00;
};
class S_g8c506080 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c506080Data {

} S_g8c506080Data;
extern S_g8c506080 *g_8c506080;
extern "C" void operation_8c223490(void)
{
    if (g_8c506080 != 0) {
        g_8c506080->v0(1);
    }
    g_8c506080 = (S_g8c506080 *)0;
    {
        short i;
        unsigned int *p = (unsigned int *)0x8c004000;
        unsigned int limit = 4096;
        for (i = 0; i < limit; i++) {
            if (*p++) for (;;) {
            }
        }
    }
}
