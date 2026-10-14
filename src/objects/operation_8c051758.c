typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0xf0];
    short ff0;
};
extern int check_range_8c01cf68(void *, float);
extern void call_8c05fbf8(int, void *, int, int);
void operation_8c051758(Object *o)
{
    int t1;
    int t2;
    if (o->ff0 == 3) {
        t1 = check_range_8c01cf68((void *)o, 10.0f);
        if (t1 == 0) {
            t2 = check_range_8c01cf68((void *)o, 30.0f);
            if (t2 == 0) {
                return;
            }
        }
        call_8c05fbf8(0x3000c, (void *)(((char *)o + 0x3c)), 0, 0);
    }
}
