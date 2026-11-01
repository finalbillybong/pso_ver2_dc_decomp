typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x88];
    Arg0_88 *f88;
};
extern char g_8c3107f8[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjHashiVersus2_v09_8c11a63c(Object *o)
{
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c3107f8 + 0x7d)), (void *)(o->f88));
    njPrintColor_8c38c5b6(-0xf0f10);
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c3107f8 + 0xaa)));
    debug_print_at_8c38cf80(0x13001b, (void *)((g_8c3107f8 + 0xb6)));
    njPrintColor_8c38c5b6(-0xf0f10);
}
