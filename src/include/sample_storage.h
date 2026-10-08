#ifndef PSO_SAMPLE_STORAGE_H
#define PSO_SAMPLE_STORAGE_H
/* Provisional stack storage observed at these callers, not a decoded field layout. */
typedef struct Sample12 { unsigned int storage[3]; } Sample12;
typedef char check_sample_storage_extent[sizeof(Sample12) == 12 ? 1 : -1];
#endif
