# 控制码
red_ball=list(range(1,10))
for ball in red_ball:
    print(f'\033[031m{ball:0>2d}\033[0m', end=' ')
    ## >右对齐
    ## 0用0补齐
    ## 2d 表示两位整数
    ##
