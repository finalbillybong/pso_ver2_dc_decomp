/* NON-MATCHING draft: not built, not admitted, earns no matching or progress credit.
 * address: 0x8c136958
 * function: operation_8c136958
 * language: c++
 * reference size: 476 bytes
 * compiled size: 476 bytes (+0.0%)
 * differing lines: 2 of 174 reference instruction lines
 * differing bytes: 4
 * provenance: hand pass on a generator draft (behaviour reviewed)
 * known gaps: hand-revised from a generator draft; review reports remaining differences in
 *   register allocation, instruction scheduling, instruction or operand order, constant loading;
 *   review found and fixed behaviour defects of the generator draft; not proven equivalent to the
 *   original
 * compiler: CodeWarrior for Dreamcast 2.4, -O2 (the pinned matching compiler); see nonmatching/README.md
 */
typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block8 {
    int words[2];
} Block8;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct S_L8c46f564 S_L8c46f564;
typedef struct S_L8c5755ac S_L8c5755ac;
typedef struct Frame Frame;
typedef struct S_g8c2f1b7c S_g8c2f1b7c;
class Object;
typedef struct Block_L8c46f564_0 {
    Block8 f00;
    int f08;
    int f0c;
} Block_L8c46f564_0;
typedef struct Block_L8c5755ac_0 {
    Block8 f00;
    int f08;
    int f0c;
} Block_L8c5755ac_0;
class Object {
public:
    char unknown0[0x18];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual int v11(float, float);
};
typedef struct ObjectData {
    char unknown0[0x6c];
    float f6c;
    char unknown70[0x24];
    int f94;
} ObjectData;
struct Frame {
    Block16 f00;
    Block16 f10;
    Block16 f20;
};
struct S_L8c5755ac {
    Block_L8c5755ac_0 f00;
};
struct S_L8c46f564 {
    Block_L8c46f564_0 f00;
};
extern S_g8c2f1b7c *g_8c2f1b7c;
extern Block16 g_8c312e60;
extern Block16 g_8c312e70;
extern Block16 g_8c312e80;
extern int g_8c46f560;
extern int g_8c46f574;
extern int g_8c46f578;
extern int g_8c575570;
extern int g_8c5755a4;
extern int g_8c5755a8;
extern S_L8c46f564 g_8c46f564;
extern S_L8c5755ac g_8c5755ac;
extern "C" void call_8c38c0e6(int, int);
extern "C" void call_8c38c0f0(void *);
extern "C" void njPushMatrixEx_8c38ae68(void);
extern "C" void translate_current_matrix_v_8c382a40(void *);
extern "C" void njScale_8c37e2e4(int, float, float, float);
extern "C" void call_8c3a944a(void *);
extern "C" void njPopMatrixEx_8c38ad10(void);
extern "C" void operation_8c136958(Object *o)
{
    Frame frame;
    int t1;
    ObjectData *pm2;
    char *pm3;
    float v7;
    pm2 = (ObjectData *)o;
    t1 = o->v11(150.0f, (pm2)->f6c);
    if (t1 == 0) {
        return;
    }
    {
        Block16 *p_ = (Block16 *)&g_8c312e60;
        *(Block16 *)&(&frame)->f20 = *p_;
    }
    *(Block16 *)&(&frame)->f10 = *(&g_8c312e70);
    *(&(&frame)->f00) = *(Block16 *)&g_8c312e80;
    pm2 = (ObjectData *)o;
    g_8c46f560 = (g_8c575570);
    *(Block16 *)&g_8c46f564 = *(Block16 *)&g_8c5755ac;
    g_8c46f574 = (int)(char *)g_8c5755a4;
    g_8c46f578 = (int)(g_8c5755a8);
    g_8c575570 = 0x810 | g_8c575570;
    call_8c38c0e6(0xff00, 0x800);
    switch ((pm2)->f94) {
        case 0:
        call_8c38c0f0((void *)(&(&frame)->f20));
        break;
        case 1:
        case 2:
        case 4:
        case 5:
        call_8c38c0f0((void *)(&frame));
        break;
        case 3:
        call_8c38c0f0((void *)(&(&frame)->f10));
    }
    njPushMatrixEx_8c38ae68();
    pm2 = (ObjectData *)o;
    v7 = (pm2)->f6c;
    pm3 = (char *)o;
    v7 = (v7 * 0.5f);
    translate_current_matrix_v_8c382a40((void *)((0x3c + pm3)));
    njScale_8c37e2e4(0, v7, 3.0f, v7);
    call_8c3a944a(g_8c2f1b7c);
    njPopMatrixEx_8c38ad10();
    g_8c5755a4 = (int)(g_8c46f574);
    g_8c5755a8 = (g_8c46f578);
    *(Block16 *)&(&g_8c5755ac)->f00 = *(Block16 *)&(&g_8c46f564)->f00;
    g_8c575570 = (g_8c46f560);
}
