typedef struct Task { int state, identifier; char name[32]; void *destination; int size, sectors; int *done; struct Task *next; void *buffer; void (*callback)(void *); char callback_data[32]; void *context; } Task;
typedef char check_layout[sizeof(Task) == 104 && (unsigned long)&((Task *)0)->name == 8 && (unsigned long)&((Task *)0)->destination == 40 && (unsigned long)&((Task *)0)->size == 44 && (unsigned long)&((Task *)0)->sectors == 48 && (unsigned long)&((Task *)0)->done == 52 && (unsigned long)&((Task *)0)->next == 56 && (unsigned long)&((Task *)0)->callback == 64 ? 1 : -1];
extern void *heap;
extern Task *first, *last;
extern int next_identifier, count;
extern void *open_at(const char *, int), *allocate_at(void *, unsigned int);
extern void copy_at(char *, const char *, unsigned int), close_at(void *);
extern void bytes_at(void *, const void *, unsigned int), free_at(void *, void *), reset_at(void);
extern int busy;
extern int size_at(void *), sectors_at(void *);
typedef char check_new_fields[(unsigned long)&((Task *)0)->buffer == 60 && (unsigned long)&((Task *)0)->callback_data == 68 && (unsigned long)&((Task *)0)->context == 100 ? 1 : -1];

extern void *active_handle, *scratch_buffer, *large_buffer;
extern char buffer_pool[];
extern void start_at(void), stop_at(void), cancel_at(void), remove_at(void), complete_at(void), tick_at(void), yield_at(void), process_at(void);
extern void *buffer_at(unsigned int), *heap_at(unsigned int), *large_at(void *);
extern void init_heap_at(void *, unsigned int, unsigned int), destroy_heap_at(void *, int), release_at(void *), release_large_at(void *), read_at(void *, int, void *);
extern int status_at(void *), named_at(void *, const char *);
extern void copy_words_at(void *, void *, int), copy_shorts_at(void *, void *, int), copy_bytes_at(void *, void *, int), decode_at(void *, void *);
void initialize_file_task_queue(void) {
    void *p;
    start_at();
    scratch_buffer = buffer_at(2048);
    first = last = 0;
    active_handle = 0;
    busy = 0;
    count = 0;
    next_identifier = 0;
    p = heap_at(12);
    if (p) init_heap_at(p, 16384, 32);
    heap = p;
}
