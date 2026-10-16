typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x390];
    int f390;
    char unknown394[0x4];
    int f398;
};
extern int call_8c12b944(void);
extern void call_8c05fbf8(int, int, int, int);
void operation_8c1ad94c(Object *o)
{
    int t1;
    int t2;
    switch (o->f398) {
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        if (!(--*(int *)((char *)o + 0x390) >= 0)) {
            t1 = call_8c12b944();
            if (0.5f > ((float)t1 / 32768.0f)) {
                call_8c05fbf8(0x30000, 0, 0, 0);
            } else {
                call_8c05fbf8(0x30001, 0, 0, 0);
            }
            t2 = call_8c12b944();
            o->f390 = (int)((float)t2 / 32768.0f * 300.0f + 300.0f);
        }
        return;
    }
}
