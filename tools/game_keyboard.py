"""Navigate PSO's on-screen keyboard using visible selection feedback.

For public scenario text such as character names. Registration details must
never be supplied through the recorded runtime action interface.
"""
import sys,time,subprocess,io
from PIL import Image
class Keyboard:
    rows=['ABCDEFGHIJKLMN+-','OPQRSTUVWXYZ@\'()','abcdefghijklmn,.','opqrstuvwxyz!?*:','1234567890$%^<>_']
    def __init__(self, display, controller, origin=(30, 300)):
        self.display = display
        self.control = controller
        self.origin = origin
        self.inputs = []
    def press(self,key):
        self.control.press(key,.06);time.sleep(.8)
        self.inputs.append({'key': key, 'hold': .06, 'after': .8})
    def position(self):
        self.control.focus()
        left, top = self.origin
        data=subprocess.check_output(['import','-display',self.display,'-window',str(self.control.window),'-crop',f'308x140+{left}+{top}','png:-'])
        im=Image.open(io.BytesIO(data)).convert('RGB')
        points=[(x,y) for y in range(140) for x in range(308) if (lambda r,g,b:r>220 and 50<g<200 and b<70)(*im.getpixel((x,y)))]
        if not points:raise ValueError('No keyboard selection detected')
        x=(min(x for x,y in points)+max(x for x,y in points))/2
        y=(min(y for x,y in points)+max(y for x,y in points))/2
        return round((x-10)/19.2),round((y-30)/19.2)
    def move(self,x,y):
        for _ in range(150):
            px,py=self.position()
            if (px,py)==(x,y):return
            if py<y:self.press('down')
            elif py>y:self.press('up')
            elif px<x:self.press('right')
            else:self.press('left')
        raise ValueError('Keyboard selection did not converge')
    def text(self,value):
        for ch in value:
            row=next(i for i,s in enumerate(self.rows) if ch in s)
            self.move(self.rows[row].index(ch),row);self.press('confirm')
    def submit(self):
        self.move(10,4);self.press('down')
        if self.position()[1]!=5:raise ValueError('Keyboard submit row not reached')
        self.press('confirm')
