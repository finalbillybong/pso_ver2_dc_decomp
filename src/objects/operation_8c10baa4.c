typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int g_8c4d7ce0;
extern int g_8c4d81a4;
extern void process_entries_8c1116a4(void);
void operation_8c10baa4(void)
{
    g_8c4d7ce0 = 0;
    process_entries_8c1116a4();
    g_8c4d81a4 = 0;
}
