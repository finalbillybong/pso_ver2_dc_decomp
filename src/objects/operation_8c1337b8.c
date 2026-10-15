typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Block68 {
    int words[17];
} Block68;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    Block68 f3c;
};
extern void release_render_mode_four_8c03ce90(void);
void operation_8c1337b8(Object *o)
{
    release_render_mode_four_8c03ce90();
    *(Block68 *)&*(Block68 *)0x8c418280 = *(Block68 *)&o->f3c;
}
