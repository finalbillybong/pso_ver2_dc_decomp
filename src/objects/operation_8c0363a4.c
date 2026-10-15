typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c461c00;
extern int g_8c462004;
extern int g_8c462008;
extern void call_8c2316ec(void *);
extern void call_8c203f3a(void);
extern void call_8c3ca756(int);
extern void call_8c03615c(void *);
extern void call_8c0357e0(void *);
extern void scene_screen_callback();
void operation_8c0363a4(void)
{
    call_8c2316ec(scene_screen_callback);
    if (g_8c461c00 == 0) {
        call_8c203f3a();
    }
    call_8c3ca756(0);
    g_8c462008 = 0;
    g_8c462004 = 0;
    if (g_8c461c00 != 0) {
        call_8c03615c((void *)((void *)&g_8c462008));
        return;
    }
    call_8c0357e0((void *)((void *)&g_8c462008));
}
