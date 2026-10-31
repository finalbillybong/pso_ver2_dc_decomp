typedef struct Task { int state, identifier; char name[32]; void *destination; int size, sectors; int *done; struct Task *next; int unknown60, offset; char unknown68[36]; } Task;
typedef char check_layout[sizeof(Task) == 104 && (unsigned long)&((Task *)0)->name == 8 && (unsigned long)&((Task *)0)->destination == 40 && (unsigned long)&((Task *)0)->size == 44 && (unsigned long)&((Task *)0)->sectors == 48 && (unsigned long)&((Task *)0)->done == 52 && (unsigned long)&((Task *)0)->next == 56 && (unsigned long)&((Task *)0)->offset == 64 ? 1 : -1];
extern void *heap;
extern Task *first, *last;
extern int next_identifier, count;
extern void *open_at(const char *, int), *heap_alloc_8c122700(void *, unsigned int);
extern void strncpy_8c12b154(char *, const char *, unsigned int), close_at(void *);
extern int ADXF_GetFsizeByte_8c34d9d4(void *), ADXF_GetFsizeSct_8c34d9b8(void *);
int create_file_read_task(const char *name, void *destination, int *done, Task **out) {
    void *handle;
    Task *task;
    if (out) *out = 0;
    handle = open_at(name, 0);
    if (!handle) return -2;
    task = (Task *)heap_alloc_8c122700(heap, 104);
    if (task) {
        if (!first) first = task;
        if (last) last->next = task;
        last = task;
        task->next = 0;
        task->done = 0;
        task->offset = 0;
        task->sectors = 0;
        task->size = 0;
        ++count;
        task->identifier = next_identifier++;
    }
    strncpy_8c12b154(task->name, name, 32);
    task->state = 1;
    task->destination = destination;
    task->size = ADXF_GetFsizeByte_8c34d9d4(handle);
    task->sectors = ADXF_GetFsizeSct_8c34d9b8(handle);
    close_at(handle);
    task->done = done;
    if (done) *done = 0;
    task->offset = 0;
    if (out) *out = task;
    return task->size;
}
