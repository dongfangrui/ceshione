CC=g++
CFLAGS=-g -o
target=xp1
#定义CC为gcc
inch=$(wildcard hxp/*.h)
src1=$(wildcard cxp1/*.c)
src2=$(wildcard cxp2/*.c)
src=$(wildcard *.c ./cxp1/*.c ./cxp2/*.c)
obj=$(patsubst %.c,%.o,$(src))



xp1:$(obj)
	${CC} $^ $(CFLAGS) $@

$(info "start1")
#首要目标是target，依赖为frist last

$(info "start2")

%.o:%.c
	${CC} -c $^ -I hxp -g -o $@

$(info "start3")

%.o:$(src1)
	${CC} -c $^ -g-o $@

$(info "start4")

%.o:$(src2)
	${CC} -c $^ -g -o $@


$(info "start5")
.PHONY:clean
clean:
	rm -rf *.o ./cxp1/*.o ./cxp2/*.o
#完成目标后重新调make，执行clear删除所有.o文件
