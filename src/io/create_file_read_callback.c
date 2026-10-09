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
int create_file_read_callback(const char *name, void *destination, void (*callback)(void *), const void *data, Task **out) {
    void *handle;
    Task *task;
    if (out) *out = 0;
    handle = open_at(name, 0);
    if (!handle) return -2;
    task = (Task *)allocate_at(heap, 104);
    if (task) {
        if (!first) first = task;
        if (last) last->next = task;
        last = task;
        task->next = 0;
        task->done = 0;
        task->callback = 0;
        task->sectors = 0;
        task->size = 0;
        ++count;
        task->identifier = next_identifier++;
    }
    copy_at(task->name, name, 32);
    task->state = 1;
    task->destination = destination;
    task->size = size_at(handle);
    task->sectors = sectors_at(handle);
    close_at(handle);
    task->done = 0;
    task->callback = callback;
    if (callback) bytes_at(task->callback_data, data, 8);
    if (out) *out = task;
    return task->size;
}
