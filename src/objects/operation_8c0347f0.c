typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c460908 S_g8c460908;
extern void operation_195958(void);
extern void clear_global_render_resources(void);
extern void call_8c03dc40(void *, int);
extern void call_8c09703c(void);
extern void clear_render_flags(void);
extern void call_8c0a2b20(void);
extern void call_8c1bec20(void);
extern void call_8c051a94(void);
extern void call_8c08711c(void);
extern void call_8c04c2d4(void);
void operation_8c0347f0(void)
{
    operation_195958();
    clear_global_render_resources();
    call_8c03dc40(*(S_g8c460908 **)0x8c460908, 1);
    *(int *)0x8c460908 = 0;
    call_8c09703c();
    clear_render_flags();
    call_8c0a2b20();
    call_8c1bec20();
    call_8c051a94();
    call_8c08711c();
    call_8c04c2d4();
}
