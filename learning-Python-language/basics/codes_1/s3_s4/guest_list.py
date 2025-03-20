## 创建嘉宾名单+并且发出邀请
guest_lists=['zzx','xxx','ztz','wrh','zzh']
for i in guest_lists:
    print(f'我可以邀请{i.title()}共进晚餐吗?')
## 特殊情况： 最后一位无法到场,替换名单.发出邀请
print(f'嘉宾{guest_lists[-1].title()}无法赴约')
guest_lists[-1]='hgh'
for i in guest_lists:
    print(f'我可以邀请{i.title()}共进晚餐吗?')
## 可以在邀请3人
print(f'我找到一张更大的桌子可以邀请更多人')
guest_lists.append('sad')
guest_lists.insert(0,'gas')
guest_lists.insert(len(guest_lists)//2,'sda')
for i in guest_lists:
    print(f'我可以邀请{i.title()}共进晚餐吗?')
print(len(guest_lists))
## 删除名单的其他人,只剩两人
print(f'我很抱歉,新订购的餐桌无法准时送达,只能邀请两位共进晚宴')
for _ in range(6):
    reli=guest_lists.pop()
    print(f'很抱歉,我无法邀请{reli.title()}共进晚餐')

## 邀请最后两位,并且打印空名单
for _ in range(2):
    reli=guest_lists.pop()
    print(f'邀请{reli.title()}共进晚宴') 
print(guest_lists)   