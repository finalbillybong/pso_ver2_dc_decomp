#ifndef PSO_CONTEXT_MODE_RECORD_H
#define PSO_CONTEXT_MODE_RECORD_H
/* Observed 12-byte lookup record; table extent and other fields remain unknown. */
typedef struct ContextModeRecord {
    int mode;
    char unknown_04[8];
} ContextModeRecord;
typedef char check_context_mode_field[(unsigned long)&((ContextModeRecord *)0)->mode == 0 ? 1 : -1];
typedef char check_context_mode_stride[sizeof(ContextModeRecord) == 12 ? 1 : -1];
#endif
