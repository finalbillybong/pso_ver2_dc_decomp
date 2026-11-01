typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_f0 Arg0_f0;
typedef struct Arg0_f4 Arg0_f4;
typedef struct Arg0_f8 Arg0_f8;
struct Object {
    char unknown0[0xa0];
    int fa0;
    char unknowna4[0x4c];
    Arg0_f0 *ff0;
    Arg0_f4 *ff4;
    Arg0_f8 *ff8;
};
extern char g_8c3002d8[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void call_8c03cd68(Object *, void *, void *, int, int, int);
void operation_8c08c918(Object *o)
{
    if (o->fa0 == 9) {
        njPrintColor_8c38c5b6(-0x100);
    } else {
        njPrintColor_8c38c5b6(-0xf0f10);
    }
    debug_print_at_8c38cf80(0x1001e, (void *)((g_8c3002d8 + 0x1de)), (void *)(o->ff0));
    if (o->fa0 == 0xa) {
        njPrintColor_8c38c5b6(-0x100);
    } else {
        njPrintColor_8c38c5b6(-0xf0f10);
    }
    debug_print_at_8c38cf80(0x1001f, (void *)((g_8c3002d8 + 0x1ec)), (void *)(o->ff4));
    if (o->fa0 == 0xb) {
        njPrintColor_8c38c5b6(-0x100);
    } else {
        njPrintColor_8c38c5b6(-0xf0f10);
    }
    debug_print_at_8c38cf80(0x10020, (void *)((g_8c3002d8 + 0x1fa)), (void *)(o->ff8));
    if (o->fa0 == 9) {
        call_8c03cd68(o, (void *)(&o->ff0), (void *)(((char *)o + 0xb0)), 0x11, 0x1e, 7);
    }
    if (o->fa0 == 0xa) {
        call_8c03cd68(o, (void *)(&o->ff4), (void *)(((char *)o + 0xb0)), 0x11, 0x1f, 7);
    }
    if (o->fa0 == 0xb) {
        call_8c03cd68(o, (void *)(&o->ff8), (void *)(((char *)o + 0xb0)), 0x11, 0x20, 7);
    }
    njPrintColor_8c38c5b6(-0xf0f10);
}
