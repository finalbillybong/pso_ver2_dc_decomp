typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
typedef struct S_g8c323e8c S_g8c323e8c;
extern int get_current_area_8c032b10(void);
extern void gsl_open_archive_8c1a80d4(void *);
void gsl_open_area_archive_8c1a86a8(void)
{
    int t1;
    t1 = get_current_area_8c032b10();
    gsl_open_archive_8c1a80d4(*(S_g8c323e8c **)((char *)0x8c323e8c + (t1 << 2)));
}
