typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv7 S_vv7;
class S_g8c5060a0;
struct S_vv7 {
    int f00;
};
class S_g8c5060a0 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c5060a0Data {

} S_g8c5060a0Data;
extern S_g8c5060a0 *g_8c5060a0;
extern "C" void operation_8c2235f8(void)
{
    if (g_8c5060a0 != 0) {
        g_8c5060a0->v0(1);
    }
    g_8c5060a0 = (S_g8c5060a0 *)0;
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
