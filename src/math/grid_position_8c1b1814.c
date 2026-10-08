/* Provisional signed grid indices and derived position fields. */
typedef struct View { char unknown0[948]; int column,row; float x,y,z; } View;
typedef char check_column[(unsigned long)&((View *)0)->column==948?1:-1];
typedef char check_row[(unsigned long)&((View *)0)->row==952?1:-1];
typedef char check_x[(unsigned long)&((View *)0)->x==956?1:-1];
typedef char check_y[(unsigned long)&((View *)0)->y==960?1:-1];
typedef char check_z[(unsigned long)&((View *)0)->z==964?1:-1];
typedef char check_prefix[sizeof(View)==968?1:-1];
void grid_position_8c1b1814(View *o) {
 o->x=((float)o->column+0.5f)*29.375f-235.0f;
 o->y=0.0f;
 o->z=((float)o->row+0.5f)*29.375f-235.0f;
}
