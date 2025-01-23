import os
import sys

makeTemplate = '''target/{oname} : main.c | target
\tgcc -o target/{oname} main.c

target :
\tmkdir target

.PHONY: run
run :
\t./target/{oname}
'''

mainfile = '''#include <stdio.h>

int main() {
\tprintf("Hello, World!");
}
'''

if len(sys.argv) < 2:
    print("Usage: python util.py [NAME]")
    exit(1)
pname = sys.argv[1]

if os.path.exists(f'./{pname}/'):
    print(f"Problem {pname} exists, skipping")
    exit(1)

os.mkdir(f'./{pname}/')
mainF = open(f'./{pname}/main.c', 'w')
makeF = open(f'./{pname}/Makefile', 'w')
mainF.write(mainfile)
makeF.write(makeTemplate.format(oname=pname))
