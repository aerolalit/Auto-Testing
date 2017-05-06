# 350111
# a3 p1.py
# Bishwa Thapa
import sys
if sys.hexversion >= 0x3000000:
    inp = input
    rng = range
else:
    inp = raw_input
    rng = xrange

def get_int(prompt):
    while True:
        try:
            return int(inp(prompt))
        except ValueError:
            pass

def get_ch(prompt):
    while True:
        res = inp(prompt).strip()
        if res:
            return res[:1]

def make_row(w, edge, center):
    return edge*(w>0) + center*(w-2) + edge*(w>1)

def print_rectangle(h, w, c):
    top_row = make_row(w, c, c)
    mid_row = make_row(w, c, ' ')
    rows = [top_row]*(h>0) + [mid_row]*(h-2) + [top_row]*(h>1)
    print('\n'.join(rows))

def main():
    h = get_int('Rectangle height: ')
    w = get_int('Rectangle width: ')
    c = get_ch('Character to use: ')
    print_rectangle(h, w, c)

if __name__=="__main__":
    main()
