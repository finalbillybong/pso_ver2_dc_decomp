typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x1a];
    int f20;
};
extern int lookup_low_id(int);
extern void call_8c2600e0(Object *);
extern void update_target_timer_8c2601a8(void *);
void operation_8c260090(Object *o)
{
    int t1;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        call_8c2600e0(o);
        return;
    }
    update_target_timer_8c2601a8((void *)o);
}
