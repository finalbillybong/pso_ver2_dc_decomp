extern int func_8c1fed74(int, int, int);
extern void *memcpy(void *, const void *, unsigned int);
extern char cfg_8c32c5f0[];
extern void func_8c3ca756(int);
extern int func_8c3ca7b2(int);
extern int device_request_8c3ca534(int, void *, int);

typedef struct {
    int a;
    short b;
    short c;
    char x8;
    char x9;
    char xa;
    char xb;
    short xc;
    short pad;
    int x10;
    int x14;
} Blk4110;
typedef struct { short a; } Blk1;
typedef struct {
    short a;
    int z4;
    char x8;
    char x9;
    short xa;
    short c;
    int b;
} Blk4118;
typedef struct {
    short a;
    short c;
    int b;
    int z;
} Blk4119;

void net_open_8c204010(x)
int x;
{
    int r = func_8c1fed74(2, 0, x);
}

int net_cfg_8c204028(void)
{
    struct { int a; int v; int b; } s;
    memcpy(&s.v, cfg_8c32c5f0, 4);
    func_8c3ca756(s.v);
    return 0;
}

int net_close_8c204046(void)
{
    return func_8c3ca7b2(0);
}

int net_req4110_8c20404c(int a, short b, short c)
{
    Blk4110 k;
    k.a = a;
    k.b = b;
    k.c = c;
    k.x9 = 0;
    k.xa = 0;
    k.xb = 0;
    k.xc = 0;
    k.x10 = 0;
    k.x14 = 0;
    return device_request_8c3ca534(0x4110, &k, 0);
}

int net_req4113_8c204084(short a)
{
    Blk1 k;
    k.a = a;
    return device_request_8c3ca534(0x4113, &k, 0);
}

int net_req4115_8c20409c(short a)
{
    Blk1 k;
    k.a = a;
    return device_request_8c3ca534(0x4115, &k, 0);
}

int net_req4117_8c2040b4(a, b)
short a;
int b;
{
    Blk1 k;
    k.a = a;
    return device_request_8c3ca534(0x4117, &k, b);
}

int net_req4118_8c2040d2(short a, int b, short c)
{
    Blk4118 k;
    k.a = a;
    k.z4 = 0;
    k.x8 = 0;
    k.x9 = 1;
    k.c = c;
    k.b = b;
    return device_request_8c3ca534(0x4118, &k, 0);
}

int net_req4119_8c2040fc(short a, int b, short c)
{
    Blk4119 k;
    k.a = a;
    k.c = c;
    k.b = b;
    k.z = 0;
    return device_request_8c3ca534(0x4119, &k, 0);
}
