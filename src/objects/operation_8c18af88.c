typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c4dbc80 S_g8c4dbc80;
extern void operation_8c105320(int);
void operation_8c18af88(void)
{
    if (*(int *)0x8c4dbc80 != 0) {
        operation_8c105320((int)(*(S_g8c4dbc80 **)0x8c4dbc80));
        *(int *)0x8c4dbc80 = 0;
    }
}
