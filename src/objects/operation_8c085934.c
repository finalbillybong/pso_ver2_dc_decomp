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
extern char g_8c2ff8a0[];
extern void njPrintColor_8c38c5b6(int);
extern void debug_print_at_8c38cf80(int, void *, ...);
extern void operation_8c0c5478(void *, void *, float);
void TObjContainerAbeEnemy_v09_8c085934(Object *o)
{
    njPrintColor_8c38c5b6(-0xff0100);
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c2ff8a0 + 0x15e)), (void *)(o->f88));
    njPrintColor_8c38c5b6(-0xf0f10);
    operation_8c0c5478((void *)(((char *)o + 0x3c)), (void *)((void *)0x8c306018), 40.0f);
}
