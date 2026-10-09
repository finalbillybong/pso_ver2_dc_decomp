typedef struct Input { char unknown0[72]; float x; float y; float width; float height; } Input;
typedef char check_Input_x[(unsigned long)&((Input *)0)->x==72?1:-1];
typedef char check_Input_y[(unsigned long)&((Input *)0)->y==76?1:-1];
typedef char check_Input_width[(unsigned long)&((Input *)0)->width==80?1:-1];
typedef char check_Input_height[(unsigned long)&((Input *)0)->height==84?1:-1];
typedef char check_Input_prefix[sizeof(Input)==88?1:-1];
typedef struct Output { char unknown0[16]; float x; float y; float width; float height; float center_x; float center_y; char unknown40[16]; float left; float top; float right; float bottom; } Output;
typedef char check_Output_x[(unsigned long)&((Output *)0)->x==16?1:-1];
typedef char check_Output_y[(unsigned long)&((Output *)0)->y==20?1:-1];
typedef char check_Output_width[(unsigned long)&((Output *)0)->width==24?1:-1];
typedef char check_Output_height[(unsigned long)&((Output *)0)->height==28?1:-1];
typedef char check_Output_center_x[(unsigned long)&((Output *)0)->center_x==32?1:-1];
typedef char check_Output_center_y[(unsigned long)&((Output *)0)->center_y==36?1:-1];
typedef char check_Output_left[(unsigned long)&((Output *)0)->left==56?1:-1];
typedef char check_Output_top[(unsigned long)&((Output *)0)->top==60?1:-1];
typedef char check_Output_right[(unsigned long)&((Output *)0)->right==64?1:-1];
typedef char check_Output_bottom[(unsigned long)&((Output *)0)->bottom==68?1:-1];
typedef char check_Output_prefix[sizeof(Output)==72?1:-1];
extern float inset_x,inset_y;
void set_inset_rectangle(const Input *input,Output *o) {
 float x=input->x,y=input->y,width=input->width,height=input->height;
 o->x=x+inset_x; o->y=y+inset_y;
 o->width=width-inset_x*2.0f; o->height=height-inset_y*2.0f;
 o->left=x+inset_x; o->top=y+inset_y;
 o->right=x+width-inset_x; o->bottom=y+height-inset_y;
 o->center_x=x+width*0.5f; o->center_y=y+height*0.5f;
}
