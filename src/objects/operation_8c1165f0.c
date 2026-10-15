typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x3c];
    int f3c;
    char unknown40[0x500];
    int f540;
    char unknown544[0x14];
    int f558;
};
extern int scene_control_pressed_direction(void *);
extern void set_fields_8c117e20(void *);
void operation_8c1165f0(Object *o)
{
    char *v1;
    int t1;
    if (o->f540 == 3) {
        t1 = scene_control_pressed_direction((void *)o);
        if (t1 != 0) {
            if (t1 >= 1) {
                *(int *)((char *)o + 0x558) += 1;
                v1 = (char *)o->f558;
                if (!((int)(v1) >= 3)) {
                    goto L_8c116644;
                }
                o->f558 = 0;
            } else {
                if (-1 >= t1) {
                    *(int *)((char *)o + 0x558) -= 1;
                    if (!(o->f558 >= 0)) {
                        o->f558 = 2;
                    }
                }
            }
L_8c116644:;
            o->f3c &= -8;
            o->f3c |= 1 << o->f558;
            set_fields_8c117e20((void *)o);
        }
    }
}
