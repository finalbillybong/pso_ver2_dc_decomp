#define current_at ((int (*)(void))0x8c032b10)
#define run_at ((void (*)(int))0x8c033f5c)
void run_current_resource_end(void) { run_at(current_at()); }
