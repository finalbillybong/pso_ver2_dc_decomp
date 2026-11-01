typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4189e4;
extern int g_8c4189e8;
extern int file_last_size_8c104d50(void *);
extern int game_malloc_buffer_8c011e9c(int);
extern void file_load_8c104d00(int, int);
void load_light_entries_8c013f54(void)
{
    int t1;
    int t2;
    g_8c4189e4 = 0;
    t1 = file_last_size_8c104d50((void *)((void *)0x8c2e2f0c));
    g_8c4189e8 = (int)(t1);
    if (t1 > 0) {
        t2 = game_malloc_buffer_8c011e9c(t1);
        g_8c4189e4 = (int)(t2);
        if (t2 != 0) {
            file_load_8c104d00((int)((void *)0x8c2e2f0c), t2);
        }
    }
}
