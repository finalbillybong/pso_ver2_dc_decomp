typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xa0];
    int fa0;
    char unknowna4[0x28];
    float fcc;
    float fd0;
    float fd4;
};
extern char g_8c300638[];
extern void call_8c38c5b6(int);
extern void call_8c38cf80(int, void *, ...);
extern void call_8c03cbe8(Object *, void *, void *, int, int, int);
void operation_8c08eadc(Object *o)
{
    if (o->fa0 == 0) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x10012, (void *)((g_8c300638 + 0x19f)), o->fcc);
    if (o->fa0 == 1) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x10013, (void *)((g_8c300638 + 0x74)), o->fd0);
    if (o->fa0 == 2) {
        call_8c38c5b6(-0x100);
    } else {
        call_8c38c5b6(-0xf0f10);
    }
    call_8c38cf80(0x10014, (void *)((g_8c300638 + 0x84)), o->fd4);
    if (o->fa0 == 0) {
        call_8c03cbe8(o, (void *)(&o->fcc), (void *)(((char *)o + 0xa4)), 0x11, 0x12, 6);
    }
    if (o->fa0 == 1) {
        call_8c03cbe8(o, (void *)(&o->fd0), (void *)(((char *)o + 0xa4)), 0x11, 0x13, 6);
    }
    if (o->fa0 == 2) {
        call_8c03cbe8(o, (void *)(&o->fd4), (void *)(((char *)o + 0xa4)), 0x11, 0x14, 6);
    }
}
