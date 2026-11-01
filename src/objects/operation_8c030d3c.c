typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct Frame Frame;
typedef struct S_g8c44be44 S_g8c44be44;
struct Frame {
    char unknown0[0x20];
};
extern char g_8c2e8428[];
extern void call_8c03ef04(Frame *, int, void *);
extern int file_last_size_8c104d50(Frame *);
extern int get_current_area_8c032b10(void);
extern int game_malloc_buffer_8c011e9c(void *);
extern void file_load_8c104d00(Frame *, int);
void operation_8c030d3c(int a0)
{
    Frame frame;
    int t1;
    int t2;
    int t3;
    *(int *)0x8c44be30 = 0;
    call_8c03ef04((Frame *)((&frame)), a0, (void *)((g_8c2e8428 + 0x42)));
    t1 = file_last_size_8c104d50((Frame *)((&frame)));
    *(int *)0x8c44be44 = t1;
    if (t1 > 0) {
        t2 = get_current_area_8c032b10();
        if (t2 == 0xf) {
            if (*(int *)0x8c44be44 > 0x800) {
                *(int *)0x8c44be44 = 0;
                return;
            }
            *(int *)0x8c44be44 = 0x800;
        }
        t3 = game_malloc_buffer_8c011e9c((void *)(*(S_g8c44be44 **)0x8c44be44));
        *(int *)0x8c44be30 = t3;
        if (t3 != 0) {
            file_load_8c104d00((Frame *)((&frame)), t3);
        }
    }
}
