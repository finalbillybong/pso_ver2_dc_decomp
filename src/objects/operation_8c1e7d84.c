typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_19c Arg0_19c;
struct Object {
    char unknown0[0x8c];
    int f8c;
    char unknown90[0x10c];
    Arg0_19c *f19c;
};
extern char g_8c32c1b0[];
extern void njPrintColor_8c38c5b6(int);
extern int get_current_area_8c032b10(void);
extern void debug_print_at_8c38cf80(int, void *, ...);
void operation_8c1e7d84(Object *o)
{
    int t1;
    if (o->f8c < 0 || o->f8c > 0xff) {
        o->f19c = (Arg0_19c *)-1;
        goto L_8c1e7da4;
    }
    o->f19c = (Arg0_19c *)o->f8c;
L_8c1e7da4:;
    njPrintColor_8c38c5b6(-0xff0100);
    t1 = get_current_area_8c032b10();
    if (t1 == 0) {
        debug_print_at_8c38cf80(0x13001e, (void *)((g_8c32c1b0 + 0xe9)));
    }
    debug_print_at_8c38cf80(0x13001f, (void *)((g_8c32c1b0 + 0xfb)), o->f19c);
}
