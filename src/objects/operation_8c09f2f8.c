typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x64];
    int f64;
};
extern int get_current_area_8c032b10(void);
void operation_8c09f2f8(Object *o)
{
    int t1;
    t1 = get_current_area_8c032b10();
    switch (t1) {
    case 1:
    case 2:
        o->f64 += 1;
    }
}
