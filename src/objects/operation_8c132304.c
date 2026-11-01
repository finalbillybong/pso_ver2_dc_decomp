typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
extern int game_malloc_8c011ecc(int);
extern void call_8c03d610(int, int, void *, int, int, int);
void operation_8c132304(void)
{
    int t1;
    int t2;
    int t3;
    t1 = get_current_area_8c032b10();
    if (t1 != 0x10) {
        t2 = game_malloc_8c011ecc(0x440);
        if (t2 != 0) {
            call_8c03d610(t2, 1, (void *)((void *)0x8c312870), 0, 0, 0);
        }
        *(int *)0x8c4d9a60 = (int)(t2);
        return;
    }
    t3 = game_malloc_8c011ecc(0x440);
    if (t3 != 0) {
        call_8c03d610(t3, 1, (void *)((void *)0x8c312890), 0, 0, 0);
    }
    *(int *)0x8c4d9a60 = (int)(t3);
}
