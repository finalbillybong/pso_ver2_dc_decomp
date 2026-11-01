typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_19c Arg0_19c;
typedef struct Arg0_88 Arg0_88;
struct Object {
    char unknown0[0x88];
    Arg0_88 *f88;
    int f8c;
    char unknown90[0x10c];
    Arg0_19c *f19c;
};
extern char g_8c34034c[];
extern void njPrintColor_8c38c5b6(int);
extern int get_current_area_8c032b10(void);
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjCityMainWarpChallenge_v09_8c259a94(Object *o)
{
    int t1;
    if (o->f8c < 0 || o->f8c > 0xff) {
        o->f19c = (Arg0_19c *)-1;
        goto L_8c259ab4;
    }
    o->f19c = (Arg0_19c *)o->f8c;
L_8c259ab4:;
    njPrintColor_8c38c5b6(-0xff0100);
    t1 = get_current_area_8c032b10();
    if (t1 == 0) {
        debug_print_at_8c38cf80(0x13001e, (void *)((g_8c34034c + 0x1a)), (void *)(o->f88));
    }
    debug_print_at_8c38cf80(0x13001f, (void *)((g_8c34034c + 0x2e)), (void *)(o->f19c));
}
