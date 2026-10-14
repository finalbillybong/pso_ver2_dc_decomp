typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc20 S_g8c4dbc20;
typedef struct S_g8c4dbc24 S_g8c4dbc24;
typedef struct S_g8c4dbc28 S_g8c4dbc28;
extern void operation_8c105320(int);
void operation_8c187c4c(void)
{
    if (*(int *)0x8c4dbc28 != 0) {
        operation_8c105320((int)(*(S_g8c4dbc28 **)0x8c4dbc28));
        *(int *)0x8c4dbc28 = 0;
    }
    if (*(int *)0x8c4dbc24 != 0) {
        operation_8c105320((int)(*(S_g8c4dbc24 **)0x8c4dbc24));
        *(int *)0x8c4dbc24 = 0;
    }
    if (*(int *)0x8c4dbc20 != 0) {
        operation_8c105320((int)(*(S_g8c4dbc20 **)0x8c4dbc20));
        *(int *)0x8c4dbc20 = 0;
    }
}
