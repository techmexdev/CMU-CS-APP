docker run -it --name data-lab --rm --mount type=bind,source=$(PWD)/bits.c,target=/home/bits.c data-lab "/home/dlc -e /home/bits.c"
