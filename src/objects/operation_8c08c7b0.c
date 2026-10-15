typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    int fa0;
    char unknowna4[0x40];
    float fe4;
    float fe8;
    float fec;
};
extern char g_8c3002d8[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c03cbe8(Object *, void *, void *, int, int, int);
void operation_8c08c7b0(Object *o)
{
    if (o->fa0 == 6) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001a, (void *)((g_8c3002d8 + 0x1ce)), o->fe4);
    if (o->fa0 == 7) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001b, (void *)((g_8c3002d8 + 0x69)), o->fe8);
    if (o->fa0 == 8) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001c, (void *)((g_8c3002d8 + 0x79)), o->fec);
    if (o->fa0 == 6) {
        call_8c03cbe8(o, (void *)(&o->fe4), (void *)(((char *)o + 0xac)), 0x11, 0x1a, 6);
    }
    if (o->fa0 == 7) {
        call_8c03cbe8(o, (void *)(&o->fe8), (void *)(((char *)o + 0xac)), 0x11, 0x1b, 6);
    }
    if (o->fa0 == 8) {
        call_8c03cbe8(o, (void *)(&o->fec), (void *)(((char *)o + 0xac)), 0x11, 0x1c, 6);
    }
    call_8c38c5b6(-0xf0f10);
}
