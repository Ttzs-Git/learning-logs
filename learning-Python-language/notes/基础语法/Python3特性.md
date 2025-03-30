# Python3特性

文本总是Unicode，由str类型表示；

二进制数据则由bytes类型表示。Python3不会以任意隐式的方式混用str和bytes，正是这使得两者区分特别清晰。

即：在python2中类型会自动转化，而在python3中则要么报错，要么不转化