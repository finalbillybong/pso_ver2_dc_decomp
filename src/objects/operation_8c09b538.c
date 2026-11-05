typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_134 Arg0_134;
struct Object {
    char unknown0[0x134];
    Arg0_134 *f134;
};
extern void game_free_8c011ec0(void *);
void game_free_wrapper_2_8c09b538(Object *o)
{
    game_free_8c011ec0(o->f134);
    o->f134 = (Arg0_134 *)0;
}
