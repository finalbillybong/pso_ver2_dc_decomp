/* SDK pool group 0x8c347718 (Hitachi SHC): with interrupts masked, resumes a
   handle: programs its DMA channel to the G2 address, starts the request,
   makes it current and logs the transfer in the 256-entry ring. */
typedef struct Handle {
    int unknown0[2];
    int status;
    int unknownc[4];
    int buffer;
    int length;
    int unknown24[2];
    int time;
} Handle;

typedef struct System {
    char unknown0[0x58];
    int starts;
    int unknown5c;
    int channel;
    Handle *current;
} System;

typedef struct LogEntry {
    unsigned int address;
    int buffer;
    int length;
    int time;
    int result;
    int unknown14[3];
} LogEntry;

extern System *g_system_8c3fac48;
extern int g_result_8c52c388;
extern int g_log_index_8c52e3a0;
extern LogEntry g_log_8c52c3a0[];
extern int g_failures_8c3fac70;
extern int check_handle_8c347458(int);
extern void done_8c3478b8(Handle *);
extern int setup_channel_8c36dd5c(int, unsigned int, int, int, int, int, int, void (*)(Handle *), Handle *);
extern int start_request_8c36dee4(int, int);
extern int tmu0_count_8c36e6f6(void);
extern int tmu0_to_us_8c36e706(int);
extern void set_values_8c346118(int, int);
static void count_failure_8c34789e(void);

int resume_handle_8c347718(int handle, int address)
{
    int error;
    Handle *h;
    int old = _builtin_get_imask();
    _builtin_set_imask(15);
    error = check_handle_8c347458(handle);
    if (error) goto done;
    h = (Handle *)handle;
    if (h->length & 0x1f) {
        error = 0x3000002;
        goto done;
    }
    g_result_8c52c388 = 0;
    h->status = 0;
    g_result_8c52c388 = setup_channel_8c36dd5c(g_system_8c3fac48->channel, address + 0xa0800000,
                                               h->buffer, h->length, 0, 1, 1, done_8c3478b8, h);
    if (g_result_8c52c388) count_failure_8c34789e();
    h->time = tmu0_to_us_8c36e706(tmu0_count_8c36e6f6());
    g_result_8c52c388 = start_request_8c36dee4(g_system_8c3fac48->channel, 0);
    if (g_result_8c52c388) count_failure_8c34789e();
    g_system_8c3fac48->current = (Handle *)handle;
    g_system_8c3fac48->starts++;
    g_log_8c52c3a0[g_log_index_8c52e3a0].address = (unsigned int)((char *)address + 0xa0800000);
    g_log_8c52c3a0[g_log_index_8c52e3a0].buffer = h->buffer;
    g_log_8c52c3a0[g_log_index_8c52e3a0].length = h->length;
    g_log_8c52c3a0[g_log_index_8c52e3a0].time = h->time;
    g_log_8c52c3a0[g_log_index_8c52e3a0].result = g_result_8c52c388;
    g_log_index_8c52e3a0 = (g_log_index_8c52e3a0 + 1) % 256;
done:
    if (error) set_values_8c346118((int)resume_handle_8c347718, error);
    _builtin_set_imask(old);
    return error;
}

static void count_failure_8c34789e(void)
{
    g_failures_8c3fac70++;
}
