"""
Script for popping a column and shifting it /inserting it at another point. 
"""
# TODO: Docstrings could use some work

import json
from typing import *
from itertools import chain

ROWLEN = 15  # 15 is default for planck, preonic, xd75 grid. 
FPATH = "./keyboards/xd75/keymaps/xfaxca_split/"  # Add filename here
SHIFTS = [(14, 6)]  # Tuples of orig/dest or from/to for columnar pop and insert. 14 --> 7 moves far right col to center of board. 

def main():
    with open(FPATH,  'r') as f:
        d = json.loads(f.read())
    laycopy = d['layers'].copy()
    
    newlays = []
    for shifts in SHIFTS: 
        new = pop_and_shift_layer(laycopy, orig=shifts[0], dest=shifts[1], rowlen=15) 
        print('new list == old l ist', new == laycopy) 
        newlays = new
    
    dout = d.copy()
    dout['layers'] = newlays
    return dout

def pop_and_shift_layer(layers: List[List[str]], orig: int, dest: int, rowlen: int): 
    """Function to pop a column from each row (from idx orig) and insert it at idx `dest`. 

    Args:
        layers (List[List[str]]): [description]
        orig (int): [description]
        dest (int): [description]
        rowlen (int): [description]

    Returns:
        [type]: [description]
    """
    newlayers = [] 
    for i, l in enumerate(layers): 
        print('Processing layer: ', i) 
        newrows = [] 
        for row in (l[start: start+rowlen] for start in range(0, len(l), rowlen)): 
            print("Processing layer: {}".format(i)) 
            orig_value = l[dest] 
            popped = row.pop(orig) 
            print('Inserting {} at current location of {}'.format(popped, orig_value)) 
            row.insert(dest, popped) 
            newrows.append(row) 
        newlayers.append(list(chain.from_iterable(newrows))) 
         
    return newlayers 

if __name__ == '__main__':
    modified_keymap = main()
    print("Got modified keymap: \n", modified_keymap)
