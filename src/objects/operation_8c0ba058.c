typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_e4 Arg0_e4;
typedef struct Arg0_e8 Arg0_e8;
typedef struct Arg0_ec Arg0_ec;
struct Object {
    char unknown0[0xd4];
    float fd4;
    float fd8;
    float fdc;
    char unknowne0[0x4];
    Arg0_e4 *fe4;
    Arg0_e8 *fe8;
    Arg0_ec *fec;
};
extern char g_8c3058b0[];
extern void call_8c38cf80(int, void *, ...);
void operation_8c0ba058(Object *o)
{
    call_8c38cf80(0x1e0014, (void *)((void *)g_8c3058b0), o->fd4);
    call_8c38cf80(0x1e0015, (void *)((g_8c3058b0 + 0xc)), o->fe4);
    call_8c38cf80(0x1e0016, (void *)((g_8c3058b0 + 0x18)), o->fe8);
    call_8c38cf80(0x1e0017, (void *)((g_8c3058b0 + 0x24)), o->fd8);
    call_8c38cf80(0x1e0018, (void *)((g_8c3058b0 + 0x30)), o->fdc);
    call_8c38cf80(0x1e0019, (void *)((g_8c3058b0 + 0x3c)), o->fec);
}
