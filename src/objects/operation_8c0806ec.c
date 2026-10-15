typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
typedef struct Arg0_94 Arg0_94;
struct Object {
    char unknown0[0x4];
    short f04;
    char unknown6[0x8e];
    Arg0_94 *f94;
};
extern int current_effect_mode(void);
extern float squared_distance_xyz(void *, void *);
extern void call_8c0a7608(void *, void *);
extern void set_effect_words(void *, void *);
void operation_8c0806ec(Object *o)
{
    float v2;
    int t1;
    float t2;
    t1 = current_effect_mode();
    if (t1 == 0xe) {
        v2 = (float)2250000.0f;
    } else {
        v2 = (float)40000.0f;
    }
    t2 = squared_distance_xyz((void *)(((char *)o + 0x3c)), (void *)(*(int *)0x8c46ee80 + 0x90));
    if (t2 > v2) {
        o->f04 |= 1;
        return;
    }
    if (o->f94 != 0) {
        call_8c0a7608((void *)(o->f94), (void *)(((char *)o + 0x3c)));
        set_effect_words((void *)(o->f94), (void *)(((char *)o + 0x60)));
    }
}
