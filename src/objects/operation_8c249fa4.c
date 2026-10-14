typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c418248 S_g8c418248;
typedef struct Object Object;
struct Object {
    char unknown0[0x6c];
    float f6c;
};
extern int lookup_low_id(int);
extern float squared_distance_xz(void *, void *);
void operation_8c249fa4(Object *o)
{
    int t1;
    float t2;
    t1 = lookup_low_id((int)(*(S_g8c418248 **)0x8c418248));
    if (t1 != 0) {
        t2 = squared_distance_xz((void *)(t1 + 0x3c), (void *)(((char *)o + 0x3c)));
        if (400.0f > t2) {
            if (o->f6c > 0.0f) {
                *(int *)0x8c33b1f0 = 1;
                return;
            }
            *(int *)0x8c33b1f0 = 0;
        }
    }
}
