typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c46fe20 S_g8c46fe20;
struct S_g8c46fe20 {
    char unknown0[0x4c];
    int f4c;
};
extern int create_item_view_8c21ddcc(void);
void operation_8c16f798(void)
{
    int t1;
    if (*(int *)0x8c46fe20 != 0 && (*(S_g8c46fe20 **)0x8c46fe20)->f4c == 0) {
        t1 = create_item_view_8c21ddcc();
        (*(S_g8c46fe20 **)0x8c46fe20)->f4c = (int)(t1);
    }
}
