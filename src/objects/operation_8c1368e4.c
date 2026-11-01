typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x8c];
    int f8c;
};
extern char g_8c312e90[];
extern void debug_print_at_8c38cf80(int, void *, ...);
void TObjFogCollision_v15_8c1368e4(Object *o)
{
    debug_print_at_8c38cf80(0x13001a, (void *)((g_8c312e90 + 0x58)));
    debug_print_at_8c38cf80(0x13001e, (void *)((g_8c312e90 + 0x5c)));
    if (o->f8c == 0) {
        debug_print_at_8c38cf80(0x13001f, (void *)((g_8c312e90 + 0x65)));
        return;
    }
    debug_print_at_8c38cf80(0x13001f, (void *)((g_8c312e90 + 0x6f)));
}
