/* SDK pool group 0x8c34678c-0x8c3468d0 (Hitachi SHC): check a program
   image header ("SDRV" magic, type 2), configure it, then wait for the
   device to report "DMPD" done, a value of at least 10 and "EXEC". */
typedef struct ImageHeader {
    unsigned int magic;
    int unknown4;
    int size;
    int unknown0c;
    unsigned char type;
} ImageHeader;

typedef struct Program {
    char unknown0[0xc];
    ImageHeader *header;
    int unknown10;
    int entry;
    int stack;
} Program;

typedef struct Device {
    char unknown0[0xd8];
    int status;
} Device;

typedef struct Port {
    char unknown0[0x80];
    Device *device;
} Port;

extern void prepare_8c3464c0(void);
extern void stop_8c345b7c(void);
extern int configure_8c347fb4(Program *, void *, int, int, int);
extern void set_mode_8c348210(Program *, int);
extern void reset_8c346688(void);
extern void start_8c346530(void);
extern int read_value_8c346614(unsigned int *);
extern void read_status_8c345e00(void *, unsigned int *);
extern void set_entry_8c347f84(Program *, int, int);
extern void run_8c347980(Program *);
extern void report_error_8c346118(void *, int);
extern int g_busy_8c3fac4c;
extern Port *g_current_8c3fac48;

int load_program_8c34678c(Program *program)
{
    int error = 0;
    unsigned int value;
    ImageHeader *header = 0;
    unsigned int status;
    int entry;
    int stack;
    (void)&header;
    (void)&entry;
    (void)&stack;
    if (program == 0) {
        error = 0x7000103;
    } else if ((header = program->header, header->magic) != 0x56524453) {
        error = 0x9000101;
    } else if (header->type != 2) {
        error = 0xb000002;
    } else {
        goto run;
run:
        prepare_8c3464c0();
        stop_8c345b7c();
        configure_8c347fb4(program, (char *)header + 0x20, header->size - 0x20, -1, 0);
        set_mode_8c348210(program, 0);
        reset_8c346688();
        start_8c346530();
        g_busy_8c3fac4c = 1;
        do read_value_8c346614(&value); while (value == 0x44504d44);
        do read_value_8c346614(&value); while (value < 10);
        do read_status_8c345e00(&g_current_8c3fac48->device->status, &status); while (status != 0x43455845);
        entry = program->entry;
        stack = program->stack;
        set_entry_8c347f84(program, entry, stack);
        run_8c347980(program);
    }
    if (error) report_error_8c346118(load_program_8c34678c, error);
    return error;
}
