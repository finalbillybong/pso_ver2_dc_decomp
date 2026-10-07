#define output_at ((void (*)(const char *))0x8c011efc)
void hierarchy_output(void *unused,const char *value) { output_at(value); }
