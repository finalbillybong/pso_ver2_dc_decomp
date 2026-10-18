typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Object Object;
struct Object {
    char unknown0[0x22];
    short f22;
    short f24;
};
extern void clear_global_render_resources(void);
extern int call_8c011e9c(int);
extern void call_8c379038(int);
extern int call_8c379054(int);
extern void call_8c37904a(void);
extern void call_8c011ec0(int);
extern void call_8c0605a0(void);
void operation_8c227450(Object *o)
{
    int t1;
    int v1;
    int v3;
    if (o->f22 != o->f24) {
        clear_global_render_resources();
        v3 = (int)0;
        t1 = call_8c011e9c(0x4000);
        call_8c379038(t1);
        v1 = (int)0xffff;
        while (call_8c379054((int)(o->f24)) != 0) {
            if (v3++ > v1) {
                break;
            }
        }
        call_8c37904a();
        call_8c011ec0(t1);
        call_8c0605a0();
    }
}
