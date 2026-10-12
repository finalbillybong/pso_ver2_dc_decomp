typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x98];
    short f98;
};
extern void operation_8c1cdcdc(void *);
extern void call_8c1cdc94(int);
extern void call_8c1a2ba8(int);
extern void call_8c1cdd08(int);
extern void position_menu_label_8c1cdbc8(void *);
void operation_8c1a2c98(Object *o)
{
    operation_8c1cdcdc((void *)o);
    call_8c1cdc94((int)o);
    call_8c1a2ba8((int)o);
    call_8c1cdd08((int)o);
    position_menu_label_8c1cdbc8((void *)o);
    o->f98 = -1;
}
