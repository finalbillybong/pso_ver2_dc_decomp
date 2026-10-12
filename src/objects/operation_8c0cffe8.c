typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3a4];
    int f3a4;
};
extern void hide_actor_model_entries(void *);
extern void call_8c0c2db0(void *);
void operation_8c0cffe8(Object *o)
{
    if (((o->f3a4 & 0x20000)) != 0) {
        hide_actor_model_entries((void *)0x8c46fb14);
    } else {
        call_8c0c2db0((void *)0x8c46fb14);
    }
    if (((o->f3a4 & 0x40000)) != 0) {
        hide_actor_model_entries((void *)0x8c46fb24);
    } else {
        call_8c0c2db0((void *)0x8c46fb24);
    }
    if (((o->f3a4 & 0x80000)) != 0) {
        hide_actor_model_entries((void *)0x8c46fb54);
        return;
    }
    call_8c0c2db0((void *)0x8c46fb54);
}
