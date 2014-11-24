#!/usr/local/bin/python
#

import sys
import subprocess

def main(argv):
    folder_name = argv[1]
    do_cleaning = 1 if len(argv) <= 2 else int(argv[2])

    subprocess.call(['g++', folder_name+'/main.cpp', '--output', 'main'])
    subprocess.call('./main')

    if do_cleaning == 1:
        subprocess.call(['rm', 'main'])



if __name__ == '__main__':
    argv = sys.argv
    main(argv)#!/usr/local/bin/python



