typedef struct Vector { float x, y, z; } Vector;
typedef struct Record { Vector source; char unknown12[16]; Vector destination; int unknown40; } Record;
typedef struct View { char unknown0[60]; Vector position; char unknown72[28]; int angle; char unknown104[116]; Record *records; int count; } View;
typedef char check_layout[sizeof(Vector) == 12 && sizeof(Record) == 44 && (unsigned long)&((Record *)0)->destination == 28 && (unsigned long)&((View *)0)->position == 60 && (unsigned long)&((View *)0)->angle == 100 && (unsigned long)&((View *)0)->records == 220 && (unsigned long)&((View *)0)->count == 224 ? 1 : -1];
extern char matrix[];
extern int enabled_at(void);
extern void load_at(void *), rotate_at(int, int), transform_at(int, Vector *, Vector *), add_at(Vector *, Vector *), pop_at(int);
void transform_actor_records(View *o) {
    if (o && o->records && enabled_at()) {
        int count = o->count;
        int i;
        Vector position;
        load_at(matrix);
        rotate_at(0, o->angle);
        for (i = 0; i < count; ++i) {
            int offset = i * 44;
            position = *(Vector *)((char *)o->records + offset);
            transform_at(0, &position, &position);
            add_at(&position, &o->position);
            *(Vector *)((char *)&o->records->destination + offset) = position;
        }
        pop_at(1);
    }
}
