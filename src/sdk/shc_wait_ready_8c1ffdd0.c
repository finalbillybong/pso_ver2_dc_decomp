typedef struct {
    unsigned char state;
    char pad1[7];
    short err;
    short pad0a;
    unsigned char *status;
} Job;
extern int func_8c1feece(void);
extern void func_8c1fbec6(void);
extern void func_8c1fbece(void);
extern void func_8c2041cc(void);
extern void func_8c1fbeb6(void);

int wait_ready_8c1ffdd0(Job *job)
{
    unsigned char *st = job->status;
    job->err = 0;
    while (job->state != 5) {
        if (func_8c1feece() != 0 || job->err != 0 || *st == 4) {
            if (job->err == 2) {
                job->err = 0;
                return -1;
            }
            job->err = 0;
            return -2;
        }
        func_8c1fbec6();
        func_8c1fbece();
        func_8c2041cc();
        func_8c1fbeb6();
    }
    job->err = 0;
}
