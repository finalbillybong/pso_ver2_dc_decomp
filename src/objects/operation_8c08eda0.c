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
    float ff0;
    float ff4;
};
extern char g_8c300638[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c03cbe8(Object *, void *, void *, int, int, int);
void operation_8c08eda0(Object *o)
{
    if (o->fa0 == 6) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001a, (void *)((g_8c300638 + 0x1d9)), o->fe4);
    if (o->fa0 == 7) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001b, (void *)((g_8c300638 + 0x1e9)), o->fe8);
    if (o->fa0 == 8) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001c, (void *)((g_8c300638 + 0x1f9)), o->fec);
    if (o->fa0 == 9) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001d, (void *)((g_8c300638 + 0x209)), o->ff0);
    if (o->fa0 == 0xa) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x1001e, (void *)((g_8c300638 + 0x219)), o->ff4);
    if (o->fa0 == 6) {
        call_8c03cbe8(o, (void *)(&o->fe4), (void *)(((char *)o + 0xac)), 0x11, 0x1a, 6);
    }
    if (o->fa0 == 7) {
        call_8c03cbe8(o, (void *)(&o->fe8), (void *)(((char *)o + 0xac)), 0x11, 0x1b, 6);
    }
    if (o->fa0 == 8) {
        call_8c03cbe8(o, (void *)(&o->fec), (void *)(((char *)o + 0xac)), 0x11, 0x1c, 6);
    }
    if (o->fa0 == 9) {
        call_8c03cbe8(o, (void *)(&o->ff0), (void *)(((char *)o + 0xac)), 0x11, 0x1d, 6);
    }
    if (o->fa0 == 0xa) {
        call_8c03cbe8(o, (void *)(&o->ff4), (void *)(((char *)o + 0xac)), 0x11, 0x1e, 6);
    }
    call_8c38c5b6(-0xf0f10);
}
