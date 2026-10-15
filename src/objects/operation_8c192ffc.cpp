typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dc2e0 S_g8c4dc2e0;
typedef struct S_g8c4dc2ec S_g8c4dc2ec;
typedef struct S_vv41 S_vv41;
class S_g8c4dc2e4;
class S_g8c4dc2e8;
struct S_vv41 {
    int f00;
};
class S_g8c4dc2e4 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4dc2e4Data {

} S_g8c4dc2e4Data;
class S_g8c4dc2e8 {
public:
    char unknown0[0x18];
    virtual void v0(int);
};
typedef struct S_g8c4dc2e8Data {

} S_g8c4dc2e8Data;
extern S_g8c4dc2e0 *g_8c4dc2e0;
extern S_g8c4dc2e4 *g_8c4dc2e4;
extern S_g8c4dc2e8 *g_8c4dc2e8;
extern S_g8c4dc2ec *g_8c4dc2ec;
extern int g_8c4dc2f0;
extern "C" void call_8c18de08(void *);
extern "C" void call_8c03dc40(void *, int);
extern "C" void operation_193cc8(void);
extern "C" void operation_193764(void);
extern "C" void operation_8c192ffc(void)
{
    call_8c18de08(g_8c4dc2ec);
    if (g_8c4dc2e4 != 0) {
        g_8c4dc2e4->v0(1);
    }
    if (g_8c4dc2e8 != 0) {
        g_8c4dc2e8->v0(1);
    }
    call_8c03dc40(g_8c4dc2e0, 1);
    g_8c4dc2f0 = 0;
    g_8c4dc2e0 = (S_g8c4dc2e0 *)0;
    g_8c4dc2e4 = (S_g8c4dc2e4 *)0;
    g_8c4dc2e8 = (S_g8c4dc2e8 *)0;
    g_8c4dc2ec = (S_g8c4dc2ec *)0;
    operation_193cc8();
    operation_193764();
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
