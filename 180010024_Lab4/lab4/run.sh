cp schedule.c /usr/src/minix/minix/servers/sched/;
cp system.c /usr/src/minix/minix/kernel/;
cd /usr/src/minix/;
make build MKUPDATE=yes >log.txt 2>log.txt