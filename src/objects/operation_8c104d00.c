typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern void gd_read_file_sectors_8c1a8484(void);
void file_load_8c104d00(int a0)
{
    *(int *)0x8c4d5b10 = a0;
    gd_read_file_sectors_8c1a8484();
}
