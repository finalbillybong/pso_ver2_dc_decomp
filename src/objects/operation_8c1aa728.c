typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block16 {
    int words[4];
} Block16;
typedef struct Frame Frame;
typedef struct Object Object;
typedef struct Arg0_64 Arg0_64;
struct Frame {
    Vector3 f00;
    Block16 f0c;
};
struct Object {
    char unknown0[0x64];
    Arg0_64 *f64;
};
extern Block16 g_8c324ec8;
extern Vector3 g_8c324ed8;
extern int operation_8c03d338(void);
extern void operation_8c0c5478(void *, void *, float);
extern void call_8c38ae68(void);
extern void call_8c382a58(int, void *);
extern void call_8c37df90(int, void *);
extern void call_8c37dd28(int, int);
extern void call_8c37e390(Frame *);
extern void call_8c3a944a(void *);
extern void call_8c38ad10(void);
void operation_8c1aa728(Object *o)
{
    Frame frame;
    int t1;
    *(Block16 *)&(&frame)->f0c = *(Block16 *)&g_8c324ec8;
    *(Vector3 *)&(&frame)->f00 = *(Vector3 *)&g_8c324ed8;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)(&(&frame)->f0c), 6.0f);
        call_8c38ae68();
        call_8c382a58(0, (void *)(((char *)o + 0x3c)));
        call_8c37df90(0, (void *)(o->f64));
        call_8c37dd28(0, 0x4000);
        call_8c37e390((Frame *)((&frame)));
        call_8c3a944a((void *)((void *)0x8c2e2618));
        call_8c38ad10();
    }
}
