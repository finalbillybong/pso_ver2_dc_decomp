#define current_at ((int (*)(void))0x8c032b10)
#define run_at ((void (*)(int))0x8c03c414)
void run_current_resource_start_8c03c3cc(void) { run_at(current_at()); }
