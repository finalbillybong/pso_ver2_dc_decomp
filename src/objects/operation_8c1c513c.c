typedef struct Vector3 {
    float x;
    float y;
    float z;
} Vector3;
extern int get_current_area_8c032b10(void);
extern void get_se_bank_resource_8c0602b0(int);
extern void operation_8c122b00(void);
extern void gsl_open_area_archive_8c1a86a8(void);
extern void run_current_resource_start(void);
extern void run_current_resource_start_8c03c3ac(void);
extern void operation_8c013fc8(void);
extern void operation_8c122ba0(void);
extern void TGStream_close_8c1a81a0(void);
extern void bgm_play_area_8c100850(int);
void operation_8c1c513c(void)
{
    int t1;
    t1 = get_current_area_8c032b10();
    get_se_bank_resource_8c0602b0(t1);
    operation_8c122b00();
    gsl_open_area_archive_8c1a86a8();
    run_current_resource_start();
    run_current_resource_start_8c03c3ac();
    operation_8c013fc8();
    operation_8c122ba0();
    TGStream_close_8c1a81a0();
    bgm_play_area_8c100850(3);
}
