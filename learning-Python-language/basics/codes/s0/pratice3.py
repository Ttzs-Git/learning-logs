## 列表生成式
## 例题一:创建一个取值范围在`1`到`99`且能被`3`或者`5`整除的数字构成的列表。
# list=[]
# for i in range(1,101):
#     if i %3==0 or i %5==0:
#         list.append(i)
# # print(list)
# list=[i for i in range(1,101)if i %3==0 or i %5==0  ]
# print(list)

# ## 例题2:有一个整数列表`nums1`，创建一个新的列表`nums2`，`nums2`中的元素是`nums1`中对应元素的平方。
# nums1=list(range(1,11))
# nums2=[i**2 for i in nums1]
# print(nums1)
# print(nums2)

## 例题3：有一个整数列表`nums1`，创建一个新的列表`nums2`，将`nums1`中大于`50`的元素放到`nums2`中
# nums1=[60,50,30,80,60,30]
# nums2=[i for i in nums1 if i>50]
# print(nums1)
# print(nums2)