typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x39c];
    int f39c;
};
extern void refresh_records_8c1ada14(void);
extern void clear_global_render_resources(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1b68cc(Object *o)
{
    refresh_records_8c1ada14();
    clear_global_render_resources();
    call_8c05fbf8(0x3000b, 0, 0, 0);
    o->f39c = 0;
}
