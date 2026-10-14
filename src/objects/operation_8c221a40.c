typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void call_8c221d2c(void);
extern void call_8c221d80(int);
extern void draw_screen_quad_8c221ca0(int);
void operation_8c221a40(int a0)
{
    call_8c221d2c();
    call_8c221d80(a0);
    draw_screen_quad_8c221ca0(a0);
}
