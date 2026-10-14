typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c511140 S_g8c511140;
typedef struct Object Object;
struct Object {
    char unknown0[0x20];
    int f20;
};
struct S_g8c46fe20 {
    char unknown0[0x4c];
    int f4c;
};
extern void operation_8c0de330(int);
extern int create_item_view_8c21ddcc(void);
void operation_8c253408(Object *o)
{
    int t1;
    if (o->f20 != 0) {
        operation_8c0de330((int)(*(S_g8c511140 **)0x8c511140));
        return;
    }
    if (*(int *)0x8c4e2ba0 != 0) {
        if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f4c == 0) {
            t1 = create_item_view_8c21ddcc();
            (*(S_g8c46fe20 **)0x8c46fe20)->f4c = (int)(t1);
        }
        operation_8c0de330((int)(*(S_g8c511140 **)0x8c511140));
        o->f20 = 1;
    }
}
