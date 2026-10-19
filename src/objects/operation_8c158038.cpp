typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_vv6 S_vv6;
class S_g8c4daaa8;
struct S_vv6 {
    int f00;
};
class S_g8c4daaa8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4daaa8Data {

} S_g8c4daaa8Data;
extern S_g8c4daaa8 *g_8c4daaa8;
extern "C" void operation_8c158088(void);
extern "C" void operation_8c158038(void)
{
    if (g_8c4daaa8 != 0) {
        g_8c4daaa8->v0(1);
    }
    g_8c4daaa8 = (S_g8c4daaa8 *)0;
    operation_8c158088();
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
