typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    float f20;
    float f24;
    char unknown28[0x8];
    float f30;
    float f34;
    char unknown38[0x8];
    int f40;
};
extern void backup_render_state(void);
extern void call_8c391c94(void);
extern void call_8c087780(float, float, float, float);
extern void operation_8c087a20(float, float, float, float);
extern void call_8c391cc4(void);
extern void restore_render_state(void);
void operation_8c191990(Object *o)
{
    int v1;
    float v7;
    float v2;
    backup_render_state();
    call_8c391c94();
    v1 = (int)o->f40;
    if (0x96 >= v1) {
        v7 = (float)1.0f;
        v2 = (float)((15.0f - (float)v1) / 15.0f);
    } else {
        v2 = (float)1.0f;
        v7 = (float)((15.0f - (float)(v1 + -0x96)) / 15.0f);
    }
    call_8c087780(o->f20, o->f24, -1.5f, v7);
    operation_8c087a20(o->f30, o->f34, -1.5f, v2);
    call_8c391cc4();
    restore_render_state();
}
